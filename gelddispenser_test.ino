#include<Stepper.h>

const int stepsPerRotation = 2048;
const int stepperSpeed = 14;

//Gezien vanaf de voorkant (IN1, IN3, IN2, IN4)
Stepper stepperMotorLeft = Stepper(stepsPerRotation, 14, 16, 15, 17); //pins from Mega
Stepper stepperMotorCenter = Stepper(stepsPerRotation, 7, 5, 6, 4); //pins from Mega
Stepper stepperMotorRight = Stepper(stepsPerRotation, 11, 9, 10, 8); //pins from Mega

//Functies initialiseren
void leftMotorOneBill();
void centerMotorOneBill();
void rightMotorOneBill();
void getInfo();

void setup() {
  Serial.begin(9600);
  stepperMotorLeft.setSpeed(stepperSpeed); //10 euro
  stepperMotorCenter.setSpeed(stepperSpeed); //20 euro
  stepperMotorRight.setSpeed(stepperSpeed); //50 euro

  //stepperMotorCenter.step(stepsPerRotation);
  leftMotorOneBill();
  //centerMotorOneBill();
  //rightMotorOneBill();
}

void loop() {
  // put your main code here, to run repeatedly:*+
}

void leftMotorOneBill() {
  stepperMotorLeft.step(-stepsPerRotation);
}

void centerMotorOneBill() {
  stepperMotorCenter.step(-stepsPerRotation);  
}

void rightMotorOneBill() {
  stepperMotorRight.step(stepsPerRotation);
}

/*
void getInfo() {
  int i = 0;
  while(!(date != "" && currentTime != "" && transactionNo != -1 && accountNo != "" && cardNo != -1 && amount != -1)){
    while (!Serial.available());
    x = Serial.readString();
    x = String(x);
    Serial.println(i);
    if(x != "") {
      if(x.indexOf("") > -1) {
        String temp = x.substring(2);
        date = temp;
        i++;
      } else if () {
        
        }
    }
  }
}*/
