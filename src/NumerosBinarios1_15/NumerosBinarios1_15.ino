void setup()
{
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
 
  
  
  //CONFIGURACION NUMERO 1 --------------------------------
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(500);
  cambio();

 
  //CONFIGURACION NUMERO 2 --------------------------------
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO 3 --------------------------------
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO 4 --------------------------------
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO 5 --------------------------------
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO 6 --------------------------------
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO 7 --------------------------------
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO 8 --------------------------------
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO 9 --------------------------------
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO A(10) --------------------------------
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO B(11) --------------------------------
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO C(12) --------------------------------
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO D(13) --------------------------------
  digitalWrite(0, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO E(14) --------------------------------
  digitalWrite(0, LOW);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
  cambio();
  //CONFIGURACION NUMERO F(15) --------------------------------
  digitalWrite(0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  delay(500);
  cambio();
 
}








void cambio() {
  digitalWrite(0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  delay(100);

}
