#include <Dabble.h>
const int motorL1 = 11;
const int motorL2 = 5;
const int motorR1 = 9;
const int motorR2 = 6;
void setup() {
  // put your setup code here, to run once:
  Dabble.begin(9600);
  Serial.begin(9600);

  pinMode(motorL1, OUTPUT);
  pinMode(motorL2, OUTPUT);
  pinMode(motorR1, OUTPUT);
  pinMode(motorR2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Dabble.processInput();
  if (GamePad.isUpPressed()) {
    straightWithSpeed3();
    delay(100);
    stop();
  } else if (GamePad.isDownPressed()) {
    backWithSpeed3();
    delay(100);
    stop();
  } else if (GamePad.isLeftPressed()) {
    leftWithSpeed3();
    delay(100);
    stop();
  } else if (GamePad.isRightPressed()) {
    rightWithSpeed3();
    delay(100);
    stop();
  } else {
    stop();
  }
}

// speed 1 ~ 3 --> slow ~fast
void straightWithSpeed1() {
  analogWrite(motorL1, 50);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 50);
  analogWrite(motorR2, 0);
}
void straightWithSpeed2() {
  analogWrite(motorL1, 70);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 70);
  analogWrite(motorR2, 0);
}
void straightWithSpeed3() {
  analogWrite(motorL1, 150);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 150);
  analogWrite(motorR2, 0);
}
void leftWithSpeed1() {
  analogWrite(motorL1, 40);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 60);
  analogWrite(motorR2, 0);
}
void leftWithSpeed2() {
  analogWrite(motorL1, 0);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 70);
  analogWrite(motorR2, 0);
}
void leftWithSpeed3() {
  analogWrite(motorL1, 0);
  analogWrite(motorL2, 60);
  analogWrite(motorR1, 70);
  analogWrite(motorR2, 0);
}
void rightWithSpeed1() {
  analogWrite(motorL1, 60);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 40);
  analogWrite(motorR2, 0);  
}
void rightWithSpeed2() {
  analogWrite(motorL1, 70);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 0);
  analogWrite(motorR2, 0);
}
void rightWithSpeed3() {
  analogWrite(motorL1, 70);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 0);
  analogWrite(motorR2, 60);
}
void backWithSpeed1() {
  // TODO
}
void backWithSpeed2() {
  //TODO
}
void backWithSpeed3() {
  analogWrite(motorL1, 0);
  analogWrite(motorL2, 150);
  analogWrite(motorR1, 0);
  analogWrite(motorR2, 150);
}
void stop() {
  analogWrite(motorL1, 0);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 0);
  analogWrite(motorR2, 0);
}
