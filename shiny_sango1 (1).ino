int d1= 5;
int d2= 6;
int speed;

int tiltPin= 7;
int Reading;



void setup()
{
  Serial.begin(9600);
  pinMode (d1, OUTPUT);
  pinMode (d2, OUTPUT);
  pinMode (tiltPin, INPUT);
  
}

void loop()
{
  Reading= digitalRead(tiltPin);
  
  if (Reading ==1)
  {
  	digitalWrite (d1, HIGH);
  	digitalWrite (d2, HIGH);
    digitalWrite (speed,1);
  }
  
  if (Reading==0)
   {
  	digitalWrite (d1, LOW);
  	digitalWrite (d2, LOW);
    digitalWrite (speed,0);
  }

}