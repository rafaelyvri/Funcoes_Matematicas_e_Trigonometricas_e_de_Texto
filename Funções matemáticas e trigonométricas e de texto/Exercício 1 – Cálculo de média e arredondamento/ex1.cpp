void setup() {
  Serial.begin(9600);
}

void loop() {
  int leitura1 = analogRead(A0);
  int leitura2 = analogRead(A0);
  int leitura3 = analogRead(A0);
  float media = (leitura1 + leitura2 + leitura3) / 3.0;
  float raiz = sqrt(media);
  Serial.print("Media: ");
  Serial.println(round(media));
  Serial.print("Raiz quadrada da media: ");
  Serial.println(ceil(raiz));
  delay(2000);
}