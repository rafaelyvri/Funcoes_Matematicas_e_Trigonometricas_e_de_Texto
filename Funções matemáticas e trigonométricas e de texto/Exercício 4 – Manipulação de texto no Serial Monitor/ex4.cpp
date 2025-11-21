char texto[50];

void setup() {
  Serial.begin(9600);
  Serial.println("Digite uma palavra:");
}

void loop() {
  if (Serial.available() > 0) {
    int tamanho = Serial.readBytesUntil('\n', texto, 50);
    texto[tamanho] = '\0';

    
    Serial.print("Quantidade de letras: ");
    Serial.println(strlen(texto));

    
    for (int i = 0; i < strlen(texto); i++) {
      texto[i] = toupper(texto[i]);
    }

    
    Serial.print("Palavra em maiuscula: ");
    Serial.println(texto);

    
    char saudacao[60] = "Ola, ";
    strcat(saudacao, texto);
    strcat(saudacao, "!");
    Serial.println(saudacao);

    Serial.println("\nDigite outra palavra:");
  }
}