int a;
void setup() {
  // put your setup code here, to run once:
  pinMode(A3,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  a=analogRead(A3);
  a=a/4;           //Scaling 0 to 1023 value to 0 to 255
  analogWrite(9,a);
}
