//define the for pins for infrared sensor
unsigned int ad1;
unsigned int ad2;
unsigned int ad3;
unsigned int ad4;
//define the motors
unsigned int pwml;
unsigned int pwmr;
void setup() {
Serial.begin(19200);
analogReference(DEFAULT);
}
//main control loop
void loop() {
  // put your main code here, to run repeatedly:
               
  ad1 = analogRead(0);
  
  ad2 = analogRead(1);

  ad3 = analogRead(2);
 
  ad4 = analogRead(3);
  if((ad1<250) + (ad4<250)+(ad3<250)+(ad2<250)>2)
  {
    pwml=255;
    pwmr=255;
  } 
  else if(ad1<250)
  {
    pwml=150;
    pwmr=0;
  }
    
  else if(ad4<250)
  {
    pwml=0;
    pwmr=150;
  } 
  else if(ad3<250)
   {pwml=50;
    pwmr=200;
  }
   else if(ad2<250)
  {
    pwml=200;
    pwmr=50;
  }   

    analogWrite(10,pwml);
    analogWrite(11,pwmr);
 
  } 
