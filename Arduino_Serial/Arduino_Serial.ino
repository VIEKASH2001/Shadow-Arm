int n1,n2;
int i=0;
String s1,s2;
volatile int state=1;

void setup() {
  pinMode(13,OUTPUT);
  digitalWrite(13,LOW);
  Serial.begin(9600);
}

void ser()
{
  if(Serial.available());
  s1=Serial.readStringUntil(';');
  s2=Serial.readStringUntil('.');
  n1=s1.toInt();
  n2=s2.toInt();
}

void loop() {
  ser();
  if(n1==5 && n2==12)
  {
    state=!state;
    digitalWrite(13,state);
  }
  Serial.print(s1);Serial.print(";");Serial.print(s2);Serial.println(";");
}
