// C++ code
//
int led=9;
int i=0;

void setup()
{
  pinMode(9, OUTPUT);
}

void loop()
{
  for(i=0;i<=255;i++){
  	analogWrite(led,i);  
    delay(10);
  }
  for(i=255;i>0;i--){
  	analogWrite(led,i);  
    delay(10);
  }
  
}
