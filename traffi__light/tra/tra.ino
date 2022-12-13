int abcd;
int r1=2,y1=3,g1=4;
int r2=5,y2=6,g2=7;
int sensorPin=8;//sensorPin2=9;
boolean val =0;
void setup() {
  pinMode(sensorPin, INPUT);//pinMode(sensorPin2, INPUT);
  Serial.begin(1200);
 pinMode(r1,OUTPUT); pinMode(y1,OUTPUT); pinMode(g1,OUTPUT);
digitalWrite(r1,LOW);digitalWrite(y1,LOW);digitalWrite(g1,LOW);
   pinMode(r2,OUTPUT); pinMode(y2,OUTPUT); pinMode(g2,OUTPUT);
digitalWrite(r2,LOW);digitalWrite(y2,LOW);digitalWrite(g2,LOW);
 
}
void delayy(int a,int chk)
{
  unsigned long b=millis();
while((millis()-b)<a)
{
 
  delay(1);
  val =digitalRead(sensorPin);
  Serial.println(val);
 // unsigned long c=millis();
  if(val==LOW){
   if(chk==1)
   {
     // while((millis()-c)<5000){
      light1(8000); 
      Serial.println("Ambulance in road 1 and road 1 turns green");///}
      //delay(3000);
   }
   light2(2000);
  /* if(chk==2)
   {
       //while((millis()-c)<5000){
       light2(2000); 
       Serial.println("Ambulance in road 2 and road 2 turns green");//}
       //delay(3000);
  }*/
  
  } 
}
}
void light1(int p)
{
  digitalWrite(r1,LOW);
  digitalWrite(y1,LOW);
  digitalWrite(g1,HIGH);
 
   digitalWrite(r2,HIGH);
  digitalWrite(y2,LOW);
  digitalWrite(g2,LOW);
  Serial.println("Road 1");
   delay(p); 
}
void light2(int p)
{
  digitalWrite(r1,HIGH);
  digitalWrite(y1,LOW);
  digitalWrite(g1,LOW);
 
   digitalWrite(r2,LOW);
  digitalWrite(y2,LOW);
  digitalWrite(g2,HIGH);
Serial.println("Road 2");
 delay(p);
}
void loop() {
 
  
  light1(2000);
  delayy(3000,1);
 
 /* digitalWrite(r1,LOW);
  digitalWrite(y1,HIGH);
  digitalWrite(g1,LOW);
  delayy(1000);*/
 
 
  light2(1000);
  delayy(3000,2);
 
  
}
