int PumpPinOn =3;
int water_on=0;
 unsigned long currentMillis = millis();
unsigned long prevMillis = 0;


const long wateringTime = 3000;//3600
const long cycleTime = 10000;//3000

void setup()
{
  pinMode (PumpPinOn, OUTPUT);

  Serial.begin (9600);
}

void loop()
{
  pump();
}

void pump() {
unsigned long currentMillis = millis();

  if (currentMillis - prevMillis <= wateringTime) {
      digitalWrite(PumpPinOn, LOW); 
      Serial.print("27: ");
      Serial.println(prevMillis);
    }
  else {   
        digitalWrite(PumpPinOn,HIGH);
  Serial.println("33: ");
  delay(1000);
    prevMillis=currentMillis;  
  }
}
