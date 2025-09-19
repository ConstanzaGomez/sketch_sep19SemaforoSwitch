int LedRojo = 9;
int LedAzul = 6;
int LedVerde = 10;
int ledColor;
int dt = 300;

String mg1 = "Elige un color de led";


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(LedRojo, OUTPUT);
  pinMode(LedAzul, OUTPUT);
  pinMode(LedVerde, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println();
  Serial.print(mg1);
  while (Serial.available() == 0) {
  }
  ledColor = Serial.parseInt();
  switch (ledColor) {
    case 1:
      digitalWrite(LedRojo, HIGH);
      digitalWrite(LedAzul, LOW);
      digitalWrite(LedVerde, LOW);
      break;
    case 2:
      digitalWrite(LedRojo, LOW);
      digitalWrite(LedAzul, HIGH);
      digitalWrite(LedVerde, LOW);
      break;
    case 3:
      digitalWrite(LedRojo, LOW);
      digitalWrite(LedAzul, LOW);
      digitalWrite(LedVerde, HIGH);
      break;
    default:
      digitalWrite(LedRojo, LOW);
      digitalWrite(LedAzul, LOW);
      digitalWrite(LedVerde, LOW);
      Serial.println();
      Serial.println("El valor ingresado no es correcto intente de nuevo");
  }
  // ESTE CODIGO FUNCIONA PARA EL ledColor con String
  /*if (ledColor == "rojo") {
    digitalWrite(LedRojo, HIGH);
    digitalWrite(LedAzul, LOW);
    digitalWrite(LedVerde, LOW);
  }else if (ledColor == "azul") {
    digitalWrite(LedRojo, LOW);
    digitalWrite(LedAzul, HIGH);
    digitalWrite(LedVerde, LOW);
  }else if (ledColor == "verde") {
  digitalWrite(LedRojo, LOW);
  digitalWrite(LedAzul, LOW);
  digitalWrite(LedVerde, HIGH);
}

else {
  digitalWrite(LedRojo, LOW);
  digitalWrite(LedAzul, LOW);
  digitalWrite(LedVerde, LOW);
  Serial.println();
  Serial.println("El valor ingresado no es correcto intente de nuevo");
}*/
  delay(dt);
}
