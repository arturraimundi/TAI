int VERMELHO = 5;
int VERDE= 7;
int AZUL=6;

int iVermelho=0;
int iVerde=0;
int iAzul=0;


void setup()
{
  pinMode(VERMELHO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AZUL, OUTPUT);
}

void loop()
{
	analogWrite(VERMELHO,iVermelho);
  	analogWrite(VERDE,iVerde);
  	analogWrite(AZUL,iAzul);
  
  	delay(1000);
  
  	iVermelho = random(256);
    iVerde = random(256);
    iAzul = random(256);
  
}
