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
  analogWrite(motorL1, 100);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 100);
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
  analogWrite(motorL2, 50);
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
  analogWrite(motorR2, 50);
}
void backWithSpeed1() {
  // TODO
}
void backWithSpeed2() {
  //TODO
}
void backWithSpeed3() {
  //TODO
}
void stop() {
  analogWrite(motorL1, 0);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 0);
  analogWrite(motorR2, 0);
}
