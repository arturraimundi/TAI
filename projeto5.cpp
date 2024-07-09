// C++ code
//
int POT = A1;
int LED = 13;
int valor = 0;

void setup()
{
  //entrada
  pinMode(POT, INPUT);
  //saída
  pinMode(LED, OUTPUT);
}

void loop()
{
  valor = analogRead(POT);
  digitalWrite(LED, HIGH);
  delay(valor);
  digitalWrite(LED, LOW);
  delay(valor); 
}
