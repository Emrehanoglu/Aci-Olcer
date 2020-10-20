#include<LiquidCrystal.h>
#include<Servo.h>

#define potansiyometre A0
LiquidCrystal lcd(12,11,5,4,3,2);
Servo motor;

int derece;

void setup() {
  lcd.begin(16,2);
  motor.attach(9);

}

void loop() {
  derece = analogRead(potansiyometre);
  derece = map(derece,0,1023,0,180);
  motor.write(derece);
  delay(50);

  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("derece:");
  lcd.setCursor(0,1);
  lcd.print(derece);
  delay(100);

}
