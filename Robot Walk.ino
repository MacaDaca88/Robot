#include <Servo.h>


Servo myservofl;
Servo myservofr;
Servo myservorr;
Servo myservorl;

int led = 0;
#define led A5
#define ledred 3
#define laser 4
long randNumber;
int pos = 0;  // variable to store the servo position
unsigned long previousMillis = 0;
const long interval = 1000;

void setup() {

  Serial.begin(9600);
  Serial.println("Serial OK");
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  pinMode(ledred, OUTPUT);
  pinMode(laser, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(ledred, LOW);
  myservofl.attach(5);  // attaches the servo on pin 9 to the servo object
  myservofr.attach(6);
  myservorr.attach(9);
  myservorl.attach(10);
  myservorr.write(0);
  myservorl.write(0);
  myservofr.write(0);
  myservofl.write(0);
  delay(600);
  myservorr.write(180);
  myservorl.write(180);
  myservofr.write(180);
  myservofl.write(180);
  delay(600);
  myservorr.write(0);
  myservorl.write(0);
  myservofr.write(0);
  myservofl.write(0);
  delay(600);
  myservorr.write(180);
  myservorl.write(180);
  myservofr.write(180);
  myservofl.write(180);
  delay(600);
}

void loop() {
  unsigned long currentMillis = millis();


  digitalWrite(LED_BUILTIN, 0x0);
  myservorr.write(0);
  myservorl.write(180);
  myservofr.write(180);
  myservofl.write(0);
  delay(500);
  digitalWrite(LED_BUILTIN, 0x1);
  myservorr.write(90);
  myservorl.write(90);
  delay(500);
  myservofr.write(90);
  myservofl.write(90);
  delay(500);
  myservorr.write(180);
  myservorl.write(0);
  delay(500);
  myservofr.write(0);
  myservofl.write(180);
  delay(15000);


}
