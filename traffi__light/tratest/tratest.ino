int abcd;
int r1=2,y1=3,g1=4;
int r2=5,y2=6,g2=7;
int sensorPin1=8,sensorPin2=9;
boolean val =0;
void setup() {
  pinMode(sensorPin1, INPUT);pinMode(sensorPin2, INPUT);
  Serial.begin(1200);
 pinMode(r1,OUTPUT); pinMode(y1,OUTPUT); pinMode(g1,OUTPUT);
digitalWrite(r1,LOW);digitalWrite(y1,LOW);digitalWrite(g1,LOW);
   pinMode(r2,OUTPUT); pinMode(y2,OUTPUT); pinMode(g2,OUTPUT);
digitalWrite(r2,LOW);digitalWrite(y2,LOW);digitalWrite(g2,LOW);
 
}
/*void delayy(int a,int chk)
{
  unsigned long b=millis();
 
while((millis()-b)<a)
{
 
  delay(1);
  val =digitalRead(sensorPin);
  Serial.println(val);
  if(val==LOW){
   if(chk==1)
   {
      light1(); 
      Serial.println("Ambulance in road 1 and road 1 turns green");
      //delay(3000);
   }
   if(chk==2)
   {
       light2(); 
       Serial.println("Ambulance in road 2 and road 2 turns green");
       //delay(3000);
  }
  
  } 
}
}*/
void light1()
{
  digitalWrite(r1,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(g1,HIGH);
 
   digitalWrite(r2,HIGH);
  digitalWrite(y2,LOW);
  digitalWrite(g2,LOW);
  Serial.println("Road 1");
   
}
void light2()
{
  digitalWrite(r1,HIGH);
  digitalWrite(y1,LOW);
  digitalWrite(g1,LOW);
 
   digitalWrite(r2,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(g2,HIGH);
Serial.println("Road 2");
}
void look(int chk)
{
   val =digitalRead(sensorPin1);
  Serial.println(val);
  if(val==LOW){
   if(chk==1)
   {
      light1(); 
      Serial.println("Ambulance in road 1 and road 1 turns green");
      //delay(3000);
   }
   if(chk==2)
   {
       light2(); 
       Serial.println("Ambulance in road 2 and road 2 turns green");
       //delay(3000);
  }
  val =digitalRead(sensorPin2);
  Serial.println(val);
  if(val==HIGH)
  {
    if(chk==1)
   { 
      Serial.println("Ambulance crossed road 1 and road 1 turns red");
      light2();
      //delay(3000);
   }
   if(chk==2)
   {
       Serial.println("Ambulance crossed road 2 and road 2 turns red");
       light2(); 
       //delay(3000);
  }
  }
}
}
void loop() {
 
  
  light1();
  look(1);
  delay(3000);
 
 /* digitalWrite(r1,LOW);
  digitalWrite(y1,HIGH);
  digitalWrite(g1,LOW);
  delayy(1000);*/
 
 
  light2();look(2);
  delay(3000);
 
  
}
 
   /*digitalWrite(r1,HIGH);
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
 

  digitalWrite(y1,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(g1,LOW);
  delayy(1000);
  digitalWrite(g1,HIGH);
  digitalWrite(r1,LOW);
  digitalWrite(y1,LOW);
  delayy(5000);*/



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
