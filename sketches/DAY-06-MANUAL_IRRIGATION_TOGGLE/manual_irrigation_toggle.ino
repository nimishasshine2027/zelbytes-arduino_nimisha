const uint8_t RELAY_PIN = 8;
const uint8_t BTN_PIN = 2;
const uint8_t LED_PIN = 13;

const bool RELAY_ACTIVE_LOW = true;
const unsigned long DEBOUNCE_MS = 50;

int lastReading = HIGH;
int stableState = HIGH;
unsigned long lastDebounce = 0;

void setValve(bool open) {
  bool energize = open;

  if (RELAY_ACTIVE_LOW)
    energize = !energize;

  digitalWrite(RELAY_PIN, energize ? LOW : HIGH);
}

bool debouncePressed(uint8_t pin) {
  int reading = digitalRead(pin);

  if (reading != lastReading) {
    lastDebounce = millis();
  }

  if ((millis() - lastDebounce) > DEBOUNCE_MS) {
    stableState = reading;
  }

  lastReading = reading;

  return (stableState == LOW);
}

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);

  setValve(false);
  digitalWrite(LED_PIN, LOW);

  Serial.begin(9600);
  Serial.println(F("Valve Control Ready"));
  Serial.println(F("Commands: s = status"));
}

void loop() {
  bool pressed = debouncePressed(BTN_PIN);

  setValve(pressed);
  digitalWrite(LED_PIN, pressed ? HIGH : LOW);

  if (Serial.available()) {
    char c = Serial.read();

    if (c == 's') {
      Serial.print(F("Valve="));
      Serial.println(pressed ? F("OPEN") : F("CLOSED"));
    }
  }
}