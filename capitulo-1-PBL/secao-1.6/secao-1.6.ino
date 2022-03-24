// Seção 1.6 - Pisca-pisca cíclico

// Contador
int t = 500;
boolean teste = false;

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
}

void loop() {

  // O primeiro tempo será de 500 ms
  // Mas para todas as próximas vezes, terá um acréscimo de 100 ms
  // Porém, se atingir 2 segundos, retorna para 100 ms

  digitalWrite(LED_BUILTIN, HIGH);
  delay(t);
  digitalWrite(LED_BUILTIN, LOW);
  delay(t);

  Serial.println(t);

  if(t == 2000){
    teste = true;
  }
  if(t == 500){
    teste = false;
  }

  if(teste){
    t = t - 100;
  }else{
    t = t + 100;
  }
}
