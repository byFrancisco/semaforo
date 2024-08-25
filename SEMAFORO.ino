int f1=2;
int f2=3;
int f3=4;
void setup() {
  // put your setup code here, to run once:
  pinMode(f1,OUTPUT);
  pinMode(f2,OUTPUT);
  pinMode(f3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(f1,HIGH);
  digitalWrite(f2,LOW);
  digitalWrite(f3,LOW);
  delay(2000);
  
  digitalWrite(f1,HIGH);
  delay(1000);
  digitalWrite(f1,LOW);
  delay(1000);
  digitalWrite(f1,HIGH);
  delay(1000);
  
  digitalWrite(f1,LOW);
  digitalWrite(f2,HIGH);
  digitalWrite(f3,LOW);
  delay(2500);
  digitalWrite(f1,LOW);
  digitalWrite(f2,LOW);
  digitalWrite(f3,HIGH);
  delay(2000);
}
