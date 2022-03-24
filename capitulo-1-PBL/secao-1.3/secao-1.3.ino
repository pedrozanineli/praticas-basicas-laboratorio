// Seção 1.3 - Código Morse

// Tempo t definido como 1000 ms
// Tempo 3t definido como 3000 ms

int curto = 1000;
int longo = 3*curto;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
}

void loop() {
  // Sinal para o S: 3 curtos
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(curto);
  digitalWrite(LED_BUILTIN, LOW);
  delay(curto);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(curto);
  digitalWrite(LED_BUILTIN, LOW);
  delay(curto);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(curto);
  digitalWrite(LED_BUILTIN, LOW);

  // Tempo entre letras: 1 longo
  delay(longo);

  // Sinal para o O: 3 longos
  digitalWrite(LED_BUILTIN, HIGH);
  delay(longo);
  digitalWrite(LED_BUILTIN, LOW);
  delay(curto);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(longo);
  digitalWrite(LED_BUILTIN, LOW);
  delay(curto);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(longo);
  digitalWrite(LED_BUILTIN, LOW);

  // Tempo entre letras: 1 longo
  delay(longo);

  // Sinal para o S: 3 curtos
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(curto);
  digitalWrite(LED_BUILTIN, LOW);
  delay(curto);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(curto);
  digitalWrite(LED_BUILTIN, LOW);
  delay(curto);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(curto);
  digitalWrite(LED_BUILTIN, LOW);

  // Tempo ao fim de uma palavra: 7 * curto
  delay(7*curto);
}
