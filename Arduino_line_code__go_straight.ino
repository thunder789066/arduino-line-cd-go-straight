/* 
ANCH150 HW#8-Line Following Car - 2017
The code will have the car only travel forward. 
This is to help you figure out how to get the car to travel straight.

The range of speed is from 0 to 255. 255 is the maximum duty cycle (max speed) 
Change the values of leftMotor and rightMotor until the car will travel straight. 
To find the values that make the car go straight is trial and error. 
Try lowering the duty cycle of the faster motor, little by little.
Those values probably won't match each other. So be patient!
*/

// Pin Declarations: Do not change
int LeftMotorDir = 12, LeftMotorPower = 3; 
int RightMotorDir = 13, RightMotorPower = 11;  

// Change these values
int leftMotor = 255, rightMotor = 255;

void setup() {
  pinMode(LeftMotorDir, OUTPUT);
  pinMode(RightMotorDir, OUTPUT);
  pinMode(LeftMotorPower, OUTPUT);
  pinMode(RightMotorPower, OUTPUT);
}

void loop() {
  digitalWrite(LeftMotorDir, HIGH);  // Left motor forward 
  analogWrite(LeftMotorPower, leftMotor);  
  digitalWrite(RightMotorDir, HIGH); // Right motor forward
  analogWrite(RightMotorPower, rightMotor);
}
