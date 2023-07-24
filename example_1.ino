void setup() {
  // Initialize the serial communication at 9600 baud rate
  Serial.begin(9600);
}

void loop() {
  // Read the analog input from pin A2
  int analogValue = analogRead(A2);

  // Print the value to the serial terminal
  Serial.print("Analog Value on A2: ");
  Serial.println(analogValue);

  // Add a small delay to avoid flooding the serial port with data
  delay(500);
}
