// Pin connections
const int pin_button = 3;
const int pin_led_posh = 2;
const int pin_led_halway = 4;

// Stores the button state
int button_state = 0;

// Stores the starting time
unsigned long initialTime = 0;

void setup() {
  // Set LED pins as outputs
  pinMode(pin_led_posh, OUTPUT);
  pinMode(pin_led_halway, OUTPUT);

  // Set button as input with internal pull-up resistor
  pinMode(pin_button, INPUT_PULLUP);
}

void loop() {

  // Read the current button state
  button_state = digitalRead(pin_button);

  // Check if the button is pressed
  if (button_state == LOW) {

    // Turn both LEDs ON
    digitalWrite(pin_led_posh, HIGH);
    digitalWrite(pin_led_halway, HIGH);

    // Record the starting time
    initialTime = millis();

    // Wait for 30 seconds
    while (millis() - initialTime < 30000) {
    }

    // Turn off the first LED
    digitalWrite(pin_led_posh, LOW);

    // Wait until 60 seconds have passed
    while (millis() - initialTime < 60000) {
    }

    // Turn off the second LED
    digitalWrite(pin_led_halway, LOW);
  }
  else {

    // Keep both LEDs OFF when button is not pressed
    digitalWrite(pin_led_posh, LOW);
    digitalWrite(pin_led_halway, LOW);
  }
}
