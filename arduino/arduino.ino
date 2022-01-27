int ledR = 10;
int ledG = 11;
int ledB = 12;

int pot= A0;

int valorPot;



void setup() {
  Serial.begin(9600);
  pinMode(ledR, OUTPUT);
  pinMode(ledG, OUTPUT);
  pinMode(ledB, OUTPUT);
  apagaLed();

}

void loop() {
  valorPot = analogRead(pot);
  Serial.print("sensor = ");
  Serial.println(valorPot);

  if(valorPot >= 0 && valorPot <= 256) //Entre 0 e 256
  {
    apagaLed();  
  }
  if(valorPot > 256 && valorPot <= 512) //Entre 256 e 512
  {
    vermelho(); 
  }
  if(valorPot > 512 && valorPot <= 768) //Entre 512 e 768
  {
    verde();
  }
  if(valorPot > 768 && valorPot <= 1023) //Entre 768 e 1023
  {
    azul();
  }        

  
}

void apagaLed() {
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, LOW);
  }

void vermelho()
{
  digitalWrite(ledR, HIGH);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, LOW);
}
void verde()
{
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, HIGH);
  digitalWrite(ledB, LOW);
}
 void azul()
{
  digitalWrite(ledR, LOW);
  digitalWrite(ledG, LOW);
  digitalWrite(ledB, HIGH);
}
 
 
