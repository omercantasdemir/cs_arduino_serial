#define led_kirmizi 5
#define led_yesil 6
void setup() {
  pinMode(led_yesil,OUTPUT);
  pinMode(led_kirmizi,OUTPUT);
  Serial.begin(9600);
}
void baslangic();
char serialval;
void loop() {
serialval=Serial.read();
if(serialval=='1')
{digitalWrite(led_kirmizi,HIGH);
digitalWrite(led_yesil,LOW);}
else if(serialval=='2')
{digitalWrite(led_kirmizi,LOW);
digitalWrite(led_yesil,LOW);}
else if(serialval=='3')
{digitalWrite(led_yesil,HIGH);
digitalWrite(led_kirmizi,LOW);}
else if(serialval=='b'){baslangic();}

  
  
  


}
void baslangic(){
  int sayi=0;
  for(int i=0;i<250;i++){
    analogWrite(led_kirmizi,sayi);
    analogWrite(led_yesil,sayi);
    sayi=sayi+1;
    delay(10);
    }
    digitalWrite(led_kirmizi,LOW);
    digitalWrite(led_yesil,LOW);
    for (int j=0;j<4;j++)
    {
      digitalWrite(led_kirmizi,HIGH);
      digitalWrite(led_yesil,HIGH);      
      delay(150);
      digitalWrite(led_kirmizi,LOW);
      digitalWrite(led_yesil,LOW);
      delay(150);
      }
  
  }
