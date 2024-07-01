// C++ code
//
bool boton;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  
  pinMode(A1, INPUT);
  
  pinMode(13, INPUT);
  
  Serial.begin( 9600 );
}

void loop()
{
  int lectura = analogRead(A1);
  //              VARIABLE  MIN  MAX   NUEVOMIN  NUEVOMAX
  int tiempo= map(lectura , 0 , 1023 , 200 , 1500);
  analogWrite(A1, tiempo);
  
  Serial.print("Lectura:");
  Serial.println(lectura);
  
  boton = digitalRead(13);
  
  if (boton == HIGH)
  {
    analogWrite(3, 255);
  analogWrite(4, 0);
  analogWrite(5, 0);
    delay(tiempo);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  	delay(tiempo);
  
  digitalWrite(12, HIGH);
  	delay(99);
  digitalWrite(12, LOW);
  
  	delay(tiempo);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
    delay(tiempo);
  analogWrite(6, 0);
  analogWrite(7, 0);
  analogWrite(8, 0);
    delay(tiempo);
  
  digitalWrite(12, HIGH);
  	delay(99);
  digitalWrite(12, LOW);
  
  	delay(tiempo);
  analogWrite(9, 0);
  analogWrite(10, 127);
  analogWrite(11, 127);
    delay(tiempo);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
    delay(tiempo);
  
  digitalWrite(12, HIGH);
  	delay(99);
  digitalWrite(12, LOW);
  	delay(tiempo);
    
  }else
  {
    analogWrite(3, 0);
  analogWrite(4, 0);
  analogWrite(5, 0);
    delay(tiempo);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  	delay(tiempo);
  
  digitalWrite(12, LOW);
  	delay(99);
  digitalWrite(12, LOW);
  
  	delay(tiempo);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
    delay(tiempo);
  analogWrite(6, 0);
  analogWrite(7, 0);
  analogWrite(8, 0);
    delay(tiempo);
  
  digitalWrite(12, LOW);
  	delay(99);
  digitalWrite(12, LOW);
  
  	delay(tiempo);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
    delay(tiempo);
  analogWrite(9, 0);
  analogWrite(10, 0);
  analogWrite(11, 0);
    delay(tiempo);
  
  digitalWrite(12, LOW);
  	delay(99);
  digitalWrite(12, LOW);
  	delay(tiempo);
  }
    
}