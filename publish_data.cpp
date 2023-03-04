// EXAMPLE USAGE

int analogPinY = A1; //y-axis
int analogPinX = A2; //x-axis
int Yval = 0;       
int Xval = 0;       

void setup()
{
    Particle.publish("Setup");
}

void loop()
{
  Yval = analogRead(analogPinY);  // read the analogPin
  Xval = analogRead(analogPinY);  // read the analogPin
  Particle.publish("Y-axis", String(Yval));
  Particle.publish("X-axis", String(Xval));
  delay(30000);
}