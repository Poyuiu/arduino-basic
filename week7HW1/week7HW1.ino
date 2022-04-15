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

const int trigL = 4;
const int echoL = 7;
const int trigR = 10;
const int echoR = 11;

double T = 22.0;
double v = (331 + 0.6 * T) * 100 / 1000000;
double timeL = 0.0;
double distanceL = 0.0;
double timeR = 0.0;
double distanceR = 0.0;
void setup() {
  Serial.begin(9600);
  pinMode(irl, INPUT);
  pinMode(irr, INPUT);

  pinMode(motorL1, OUTPUT);
  pinMode(motorL2, OUTPUT);
  pinMode(motorR1, OUTPUT);
  pinMode(motorR2, OUTPUT);

  pinMode(trigL, OUTPUT);
  pinMode(trigR, OUTPUT);
  pinMode(echoL, INPUT);
  pinMode(echoR, INPUT);
}

void loop() {
  irlstate = digitalRead(irl);
  irrstate = digitalRead(irr);
  ultrasoundL();
  ultrasoundR();
  if (irlstate == 1 && irrstate == 1) {
    action(distanceR - distanceL, distanceL - distanceR);
  }
  else if (irrstate == 1) {
    action(30, -30);
  }
  else if (irlstate == 1) {
    action(-30, 30);
  }
  else {
    stop();
  }
  delayMicroseconds(1000);
}

void action(double L, double R) {
  analogWrite(motorL1, 90 + L);
  analogWrite(motorL2, 90 - L);
  analogWrite(motorR1, 90 + R);
  analogWrite(motorR2, 90 - R);
}

void stop() {
  analogWrite(motorL1, 0);
  analogWrite(motorL2, 0);
  analogWrite(motorR1, 0);
  analogWrite(motorR2, 0);
}

void ultrasoundL() {
  digitalWrite (trigL, LOW); delay(1);
  digitalWrite (trigL, HIGH); delay(5);
  digitalWrite (trigL, LOW);
  timeL = pulseIn(echoL, HIGH);
  distanceL = v * (timeL / 2);
}

void ultrasoundR() {
  digitalWrite (trigR, LOW); delay(1);
  digitalWrite (trigR, HIGH); delay(5);
  digitalWrite (trigR, LOW);
  timeR = pulseIn(echoR, HIGH);
  distanceR = v * (timeR / 2);
}
