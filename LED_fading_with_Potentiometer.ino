int analogPin = A0; // potentiometer connected to analog A0
int ledPin = 11; // LED connected to digital pin 11
int val = 0; // variable to store the read value
void setup() {
 // put your setup code here, to run once:
 //setting all the leds to ouput
 Serial.begin(2400);
 pinMode(ledPin, OUTPUT);
 
}
void loop() {
 val = analogRead(analogPin); // read the input pin
 Serial.print("val:");
 Serial.print(val);
 analogWrite(ledPin,val/4);
 Serial.print("out:");
 Serial.println(ledPin);
 delay(50);
 }
