int led = 11;
int pushButton = 12;
boolean teste = false;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pushButton, INPUT);
  Serial.begin(9600);
}

void loop() {
  int valor = digitalRead(pushButton);

  if(valor == HIGH){
    teste = !teste;
    valor = LOW;
  }
  
  if (teste){
    Serial.println("A");
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  }else{
    Serial.println("B");
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
}
