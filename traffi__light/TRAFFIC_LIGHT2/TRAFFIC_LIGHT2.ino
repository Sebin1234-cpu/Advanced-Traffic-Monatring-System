

int threshold=700;
int abcd;
int r1=2,y1=3,g1=4;
int r2=5,y2=6,g2=7;
int r3=8,y3=9,g3=10;
int r4=11,y4=12,g4=13;
void setup() {
  // put your setup code here, to run once:
 pinMode(r1,OUTPUT); pinMode(y1,OUTPUT); pinMode(g1,OUTPUT);
digitalWrite(r1,LOW);digitalWrite(y1,LOW);digitalWrite(g1,LOW);
   pinMode(r2,OUTPUT); pinMode(y2,OUTPUT); pinMode(g2,OUTPUT);
digitalWrite(r2,LOW);digitalWrite(y2,LOW);digitalWrite(g2,LOW);
   pinMode(r3,OUTPUT); pinMode(y3,OUTPUT); pinMode(g3,OUTPUT);
digitalWrite(r3,LOW);digitalWrite(y3,LOW);digitalWrite(g3,LOW);
   pinMode(r4,OUTPUT); pinMode(y4,OUTPUT); pinMode(g4,OUTPUT);
digitalWrite(r4,LOW);digitalWrite(y4,LOW);digitalWrite(g4,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(r1,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(g1,HIGH);
  
   digitalWrite(r2,HIGH);
  digitalWrite(y2,LOW);
  digitalWrite(g2,LOW);
  
   digitalWrite(r3,HIGH);
  digitalWrite(y3,LOW);
  digitalWrite(g3,LOW);
  
   digitalWrite(r4,HIGH);
  digitalWrite(y4,LOW);
  digitalWrite(g4,LOW);
  delayy(5000);
  
  digitalWrite(r1,LOW);
  digitalWrite(y1,HIGH);
  digitalWrite(g1,LOW);
  delayy(1000);
  
  
  digitalWrite(r1,HIGH);
  digitalWrite(y1,LOW);
  digitalWrite(g1,LOW);
  
   digitalWrite(r2,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(g2,HIGH);
  
   digitalWrite(r3,HIGH);
  digitalWrite(y3,LOW);
  digitalWrite(g3,LOW);
  
   digitalWrite(r4,HIGH);
  digitalWrite(y4,LOW);
  digitalWrite(g4,LOW);
  delayy(5000);
  
  digitalWrite(r2,LOW);
  digitalWrite(y2,HIGH);
  digitalWrite(g2,LOW);
  delayy(1000);
  
  
   digitalWrite(r1,HIGH);
  digitalWrite(y1,LOW);
  digitalWrite(g1,LOW);
  
   digitalWrite(r2,HIGH);
  digitalWrite(y2,LOW);
  digitalWrite(g2,LOW);
  
   digitalWrite(r3,LOW);
  digitalWrite(y3,LOW);
  digitalWrite(g3,HIGH);
  
   digitalWrite(r4,HIGH);
  digitalWrite(y4,LOW);
  digitalWrite(g4,LOW);
  delayy(5000);
  
  digitalWrite(r3,LOW);
  digitalWrite(y3,HIGH);
  digitalWrite(g3,LOW);
  delayy(1000);
  
  digitalWrite(r1,HIGH);
  digitalWrite(y1,LOW);
  digitalWrite(g1,LOW);
  
   digitalWrite(r2,HIGH);
  digitalWrite(y2,LOW);
  digitalWrite(g2,LOW);
  
   digitalWrite(r3,HIGH);
  digitalWrite(y3,LOW);
  digitalWrite(g3,LOW);
  
   digitalWrite(r4,LOW);
  digitalWrite(y4,LOW);
  digitalWrite(g4,HIGH);
  delayy(5000);
  
  digitalWrite(r4,LOW);
  digitalWrite(y4,HIGH);
  digitalWrite(g4,LOW);
  delayy(1000);
  
 /* 
  digitalWrite(y1,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(g1,LOW);
  delayy(1000);
  digitalWrite(g1,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(y1,LOW);
  delayy(5000);*/
}
void delayy(int a)
{
  unsigned long b=millis();
while((millis()-b)<a)
{
  
  delay(1);
 /* if(analogRead(A0)>threshold)
  {
    abcd=1;
  }
  
   if(analogRead(A1)>threshold)
  {
    abcd=0;
  }
  
  if(abcd==1)
  {
      digitalWrite(r1,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(g1,HIGH);
    
  }*/
    
  
  
}}
