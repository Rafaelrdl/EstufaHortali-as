int PinAzul = 8;
int PinRox = 9;
int PinRos = 10;
int pinTMP = 0;

int ValorTMP = 0;


void setup()
{
  pinMode(PinAzul, OUTPUT);
  pinMode(PinRox, OUTPUT);
  pinMode(PinRos, OUTPUT);
  
  Serial.begin(9600);
  
  digitalWrite(PinAzul, LOW);
  digitalWrite(PinRox, LOW);
  digitalWrite(PinRos, LOW);
}

void loop()
{
  ValorTMP = analogRead(pinTMP);
  Serial.println(ValorTMP);
  
  if(ValorTMP <= 164)
  {    
	digitalWrite(PinAzul, LOW);
  	digitalWrite(PinRox, LOW);
 	digitalWrite(PinRos, LOW);
  }	
  
  if(ValorTMP >=165)
  {    
	digitalWrite(PinAzul, LOW);
  	digitalWrite(PinRox, LOW);
 	digitalWrite(PinRos, HIGH);
  }
  if(ValorTMP >= 205)
  {		
	digitalWrite(PinAzul, HIGH);
  	digitalWrite(PinRox, HIGH);
  	digitalWrite(PinRos, HIGH);
  }

}