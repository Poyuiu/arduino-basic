const int irl = 13;
const int irr = 12;
// black == 0
// white == 1
int irlstate;
int irrstate;

const int motorL1 = 3;
const int motorL2 = 5;
const int motorR1 = 9;
const int motorR2 = 6;

void setup() {
  Serial.begin(9600);
  pinMode(irl, INPUT);
  pinMode(irr, INPUT);

  pinMode(motorL1, OUTPUT);
  pinMode(motorL2, OUTPUT);
  pinMode(motorR1, OUTPUT);
  pinMode(motorR2, OUTPUT);
}

void loop() {
  irlstate = digitalRead(irl);
  irrstate = digitalRead(irr);
  if (irlstate == 1 && irrstate == 1) {
    straightWithSpeed2();
  }
  else if (irrstate == 1) {
    leftWithSpeed2();
  }
  else if (irlstate == 1) {
    rightWithSpeed2();
  }
  else{
    stop();
  }
  delayMicroseconds(1000);
}
