#define out 10
#define in A0
#define LEDout 11
void setup() 
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(out, OUTPUT);
  pinMode(in, INPUT);
  pinMode(LEDout, OUTPUT);

  digitalWrite(LED_BUILTIN, HIGH);
  digitalWrite(LEDout, HIGH);
  Serial.println("Ready");
}
int MATH;
void loop() 
{ 
  MATH = (analogRead(in) / (float)1023) * (float)255;  
  analogWrite(out, MATH);
  
  Serial.print(analogRead(in));
  Serial.print("/");
  Serial.println(MATH);
  Serial.print(" [In/Out]");
}
