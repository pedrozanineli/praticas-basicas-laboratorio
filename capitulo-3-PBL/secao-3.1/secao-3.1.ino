// Seção 3.1 - Checando a umidade do solo
// Definição de variáveis das portas

int led_vermelho = 5;
int led_amarelo = 6;
int led_verde = 7;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void loop() {
  int valor_leitura = analogRead(A0);
  Serial.println(valor_leitura);

  // Definição do solo úmido como maior que 0 e menor que 400
  if (valor_leitura > 0 && valor_leitura < 400)
  {
    Serial.println("O solo está úmido");
    apagarLuzes();
    digitalWrite(led_verde, HIGH);
  }
 
  // Definição do solo com umidade média como maior que 400 e menor que 800
  if (valor_leitura >= 400 && valor_leitura < 800)
  {
    Serial.println("O solo não está muito úmido");
    apagarLuzes();
    digitalWrite(led_amarelo, HIGH);
  }
 
  // Definição do solo seco como maior que 800 e menor que 1024
  if (valor_leitura >= 800 && valor_leitura < 1024)
  {
    Serial.println("O solo está seco");
    apagarLuzes();
    digitalWrite(led_vermelho, HIGH);
  }
  delay(100);
}

void apagarLuzes(){
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
}
