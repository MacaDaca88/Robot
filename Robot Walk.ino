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
}

void loop() {
  digitalWrite(LED_BUILTIN,0x0);
  myservorr.write(0);  // tell servo to go to position in variable 'pos'
  myservorl.write(180);
  myservofr.write(0);
  myservofl.write(180);
  delay(5000);
    digitalWrite(LED_BUILTIN,0x1);
  myservorr.write(180);  // tell servo to go to position in variable 'pos'
  myservorl.write(0);
  myservofr.write(180);
  myservofl.write(0);
  delay(5000);
}