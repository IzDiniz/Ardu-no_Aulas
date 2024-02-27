int cm = 0;
int trigger = 7;
int echo = 8;

// Tipo inteiro, mais longo que possuí um armazenamento maior
long readUltrassonicDistance(int trigger,int echo)
{
  pinMode(trigger, OUTPUT);
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);

  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  pinMode(echo, INPUT);

  return pulseIn(echo, HIGH);
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  cm = 0.01723 * readUltrassonicDistance(trigger, echo);

  Serial.print(cm);
  // printLn ele faz o print ir para baixo.
  Serial.println("Cm");
  delay(100);
}
