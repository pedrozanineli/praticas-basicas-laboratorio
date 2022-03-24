// Seção 3.3 - Estação meteorológica

#include <DHT.h>
#include <Adafruit_BMP280.h>
// #include <Adafruit_Sensor.h>
// #include <Adafruit_I2CDevice.h>

Adafruit_BMP280 sensor_bmp;

float leitura_umidade;
float leitura_temperatura;

int pino_dados = A1;

DHT sensor_dht(pino_dados, DHT11);

void setup() {
  Serial.begin(9600);
  sensor_dht.begin();
  sensor_bmp.begin();

  sensor_bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,
                           Adafruit_BMP280::SAMPLING_X2,
                           Adafruit_BMP280::SAMPLING_X16,
                           Adafruit_BMP280::FILTER_X16,
                           Adafruit_BMP280::STANDBY_MS_500);
}

void loop() {
  // Serial.print("Umidade (em porcentagem),Temperatura (Celsius)");
  
  leitura_umidade = sensor_dht.readHumidity();
  leitura_temperatura = sensor_dht.readTemperature();

  Serial.print(leitura_umidade);
  Serial.print(",");

  float temp_media = (leitura_temperatura + sensor_bmp.readTemperature())/2;
  Serial.print(leitura_temperatura);
  Serial.println();

  /*
  Serial.print("Pressao (Pa) = ");
  Serial.print(sensor_bmp.readPressure());
  Serial.println();

  float temp_media = (leitura_temperatura + sensor_bmp.readTemperature())/2;
  Serial.print("Temperatura (Celsius): ");
  Serial.print(temp_media);
  Serial.println();

  Serial.print("Pressao (Pa) = ");
  Serial.print(sensor_bmp.readPressure());
  Serial.println();
  */

  delay(10000);
}
