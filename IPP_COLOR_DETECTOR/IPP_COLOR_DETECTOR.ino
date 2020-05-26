/*********
  Rui Santos
  Complete project details at http://randomnerdtutorials.com  
*********/
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
// TCS230 or TCS3200 pins wiring to Arduino
#define S0 7
#define S1 8
#define S2 9
#define S3 10
#define sensorOut 13

// Stores frequency read by the photodiodes
int red = 0;
int green = 0;
int blue = 0;


int data=0; //Global variabel för sensordata


void setup() {
  // Setting the outputs
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  
  // Setting the sensorOut as an input
  pinMode(sensorOut, INPUT);
  lcd.begin(16, 2);
  lcd.setCursor(5, 0);
  lcd.print("Arduino");
  lcd.setCursor(1, 1);
  lcd.print("Color Detector");

  // Setting frequency scaling to 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW); 
  
   // Begins serial communication 
  Serial.begin(9600);
}
void loop() {
  // Setting RED (R) filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  
  // Reading the output frequency
  red = pulseIn(sensorOut, LOW);
  
   // Printing the RED (R) value
  Serial.print("RÖD = ");
  Serial.print(red);
  delay(300);
  
  // Setting GREEN (G) filtered photodiodes to be read
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  
  // Reading the output frequency
  green = pulseIn(sensorOut, LOW);
  
  // Printing the GREEN (G) value  
  Serial.print(" Grön =  ");
  Serial.print(green);
  delay(300);
 
  // Setting BLUE (B) filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  
  // Reading the output frequency
  blue = pulseIn(sensorOut, LOW);
  
  // Printing the BLUE (B) value 
  Serial.print(" BLÅ = ");
  Serial.println(blue);
  delay(300);

//color();
  //Serial.print("R =");
  //Serial.print(red, DEC);
  //Serial.print(" G = ");
  //Serial.print(green, DEC);
  //Serial.print(" B = ");
  //Serial.print(blue, DEC);
  //Serial.print("\t");

if (red <= 8 && green > 32 && blue >= 21)
{
  if (red <= 11 && green < 40 && blue < 30)
    
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print(" Color Detection");
      lcd.setCursor(0, 1);
      lcd.print(" Color : ");
      lcd.print("Red");
      Serial.println(" - (Red Color)");
    }
    
if (red <= 35 && green <= 20 && blue <= 9)
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" Color Detection");
  lcd.setCursor(0,1);
  lcd.print(" Color :");
  lcd.print("Blue");
  Serial.println(" - (Blue Color)");
}


if ( red >= 6 && green <= 8 && blue <= 13)
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" Color Detection");
  lcd.setCursor(0,1);
  lcd.print(" Color : ");
  lcd.print("Yellow");
  Serial.println(" -(Yellow Color)");
}
if (red <= 4 && green <= 4 && blue <= 4)
{
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" Color Detection ");
  lcd.setCursor(0,1);
  lcd.print(" Color ");
  lcd.print(" White ");
  Serial.println(" -(White Color)");
  
}
  if ( red >= 56 && green >= 56 && blue >= 41)
  {
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" Color Detection ");
    lcd.setCursor(0,1);
    lcd.print(" Color ");
    lcd.print(" Black ");
    Serial.println(" - (Black Color)");   
  }
if (red <= 77 && green >= 74 && blue <= 86)
{
  
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(" Color Detection ");
  lcd.setCursor(0,1);
  lcd.print(" Color ");
  lcd.print(" Green "); 
  Serial.println(" - (Green Color)");
}
if (red <= 30 && green <= 199 && blue <= 64)
{
lcd.clear();
lcd.setCursor(0,0);
lcd.print(" Color Detection ");
lcd.setCursor(0,1);
lcd.print(" Color ");
lcd.print(" Pink ");
Serial.println(" - (Pink Color)");
}
if (red <= 35 && green <= 20 && blue <= 9){
  if (red <= 30 && green <= 199 && blue <= 64) 

 lcd.clear();
lcd.setCursor(0,0);
lcd.print(" Color Detection ");
lcd.setCursor(0,1);
lcd.print(" Color ");
lcd.print(" Transparant ");
Serial.println(" - (Transparant Color)");
}  



//Serial.println();
//delay(300); 
}
