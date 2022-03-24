int vermelho = 11;
int amarelo = 12;
int verde = 13;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  controlaSemaforo();
}

void controlaSemaforo(){
  digitalWrite(vermelho, HIGH);
  delay(3000);
  digitalWrite(vermelho, LOW);

  digitalWrite(amarelo, HIGH);
  delay(1000);
  digitalWrite(amarelo, LOW);

  digitalWrite(verde, HIGH);
  delay(3000);
  digitalWrite(verde, LOW); 
}
