int vermelho = 11;
int amarelo = 12;
int verde = 13;
int verdeP = 2;
int vermelhoP = 3;

void setup() {
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(verdeP, OUTPUT);
  pinMode(vermelhoP, OUTPUT);
}

void loop() {
  controlaVermelho();
  controlaVerde();
  controlaAmarelo();
}

void controlaVermelho(){
  digitalWrite(vermelho, HIGH);
  digitalWrite(verdeP, HIGH);
  digitalWrite(vermelhoP, LOW);
  delay(3000);
  digitalWrite(vermelho, LOW);
}

void controlaAmarelo(){
  digitalWrite(amarelo, HIGH);
  delay(1000);
  digitalWrite(amarelo, LOW);
}

void controlaVerde(){
  digitalWrite(verde, HIGH);
  digitalWrite(verdeP, LOW);
  digitalWrite(vermelhoP, HIGH);
  delay(3000);
  digitalWrite(verde, LOW);
}
