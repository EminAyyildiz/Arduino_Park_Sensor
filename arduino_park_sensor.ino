// Written by Emin Ayyıldız

int trig =9;
int echo = 10;
long sure;
long uzaklik;

#define Doo 262
#define Re  294
#define Mi  330
#define Fa  349
#define Sol 392


int buzzer=13;

int led1 =2, led2=3, led3=4, led4=5, led5=6;
void setup()
{
  pinMode(trig,OUTPUT),
  pinMode(echo,INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(buzzer, OUTPUT);
  
  Serial.begin(9600);
  
  
}

void loop()
{
  digitalWrite(buzzer,LOW);
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  sure=pulseIn(echo,HIGH);
  uzaklik=sure/2/29.150;

  
  Serial.print("  SIGNAL :  ");
  Serial.print(sure);
  Serial.println("  hareket etmistir...");
  
  Serial.print("uzunluk :  ");
  Serial.print(uzaklik);
  delay(500);
  
  if(uzaklik<=50)
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    tone(buzzer, Doo);
  }
  else if(uzaklik<=100)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    tone(buzzer, Re);
  
  }
  
    else if(uzaklik<=150)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH); 
    tone(buzzer, Mi);
  
  }
  
    else if(uzaklik<=200)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    tone(buzzer, Fa);
  
  }
  
    else if(uzaklik<=250)
  {
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,HIGH);
    tone(buzzer, Sol);
      
  
  }
  
    else
  {
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led5,HIGH);
    
    
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    noTone(buzzer);
      
  
  }
  
  
  
}
