#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperature: 25");
  lcd.write(0xDF); // Print the degree symbol (ASCII code 223)
  lcd.print("C");
}

void loop() {
  // Your main code here (if any)
}
