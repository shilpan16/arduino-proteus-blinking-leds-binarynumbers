// Define the LED pins
const int ledPins[4] = {2, 3, 4, 5}; // Connect LEDs to digital pins 2, 3, 4, 5

void setup() {
  // Initialize the digital pins as outputs
  for (int i = 0; i < 4; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Loop through numbers 0 to 15 (0000 to 1111 in binary)
  for (int number = 0; number < 16; number++) {
    // Set the LEDs based on the binary representation of the number
    for (int i = 0; i < 4; i++) {
      digitalWrite(ledPins[i], bitRead(number, i));
    }
    delay(1000); // Wait for 1 second before showing the next number
  }
}