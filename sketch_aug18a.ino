const int pin_button = 3;
const int pin_led_posh = 2;
const int pin_led_halway = 4;

int button_state = 0;

unsigned long initialTime = 0;

void setup() {
  pinMode(pin_led_posh, OUTPUT);
  pinMode(pin_led_halway, OUTPUT);
  pinMode(pin_button, INPUT_PULLUP);
}

void loop() {

  button_state = digitalRead(pin_button);

  if (button_state == LOW) {

    digitalWrite(pin_led_posh, HIGH);
    digitalWrite(pin_led_halway, HIGH);

    initialTime = millis();

    while (millis() - initialTime < 30000) {
    }

    digitalWrite(pin_led_posh, LOW);

    while (millis() - initialTime < 60000) {
    }

    digitalWrite(pin_led_halway, LOW);
  }
  else {
    digitalWrite(pin_led_posh, LOW);
    digitalWrite(pin_led_halway, LOW);
  }
}
