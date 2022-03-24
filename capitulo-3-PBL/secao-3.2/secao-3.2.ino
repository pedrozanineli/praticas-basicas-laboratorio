// Seção 3.2 - Medindo a distância com Arduino

// Heitor Bernardes - 220052
// Pedro Zanineli - 220068

#include <Ultrasonic.h>

int trigger = 9;
int echo = 8;

int d1 = 10;
int d2 = 50;

int led_vermelho = 4;
int led_amarelo = 3;
int led_verde = 2;

float leitura;

Ultrasonic ultrasonic(trigger, echo);

void setup() {
  Serial.begin(9600);
}

void loop() {
  float d;
  // float microsec = ultrasonic.timing();

  d = ultrasonic.read();

  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.print(d);

  // Perto de bater
  if (d < d1) {
    Serial.println("Colisão eminente!");
    apagaLuzes();
    digitalWrite(led_vermelho, HIGH);
  }
  if (d >= d1 && d < d2){
    Serial.println("Cuidado, risco de colisão");
    apagaLuzes();
    digitalWrite(led_amarelo, HIGH);
  }
  
  if(d >= d2) {
    Serial.println("Não existe risco de colisão");
    apagaLuzes();
    digitalWrite(led_verde, HIGH);
  }
  delay(1000);
}

void apagaLuzes(){
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
}
