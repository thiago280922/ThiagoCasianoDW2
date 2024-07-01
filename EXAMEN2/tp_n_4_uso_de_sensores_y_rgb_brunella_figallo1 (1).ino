// C++ code
//

int rojo = 3;
int verde = 6;
int azul = 5;

int luz = A0 ;

int temp = A1 ;

void setup()
{
  
  pinMode( rojo , OUTPUT);
  pinMode( azul , OUTPUT);
  pinMode( verde , OUTPUT);
  
  pinMode( temp , INPUT);
  pinMode( luz , INPUT);
  
  Serial.begin(9600);
  
}

void loop()
{
  int lecturaLuz = analogRead(luz);

      
  int porcentajeLuz = map( lecturaLuz , 1 , 310 , 100 , 0 );
  porcentajeLuz = constrain( porcentajeLuz , 0 , 100 ); 
  
  Serial.print("El porcentaje de luz actual es: ");
  Serial.println ( porcentajeLuz );
  	delay(10);
 
 
  float lecturaTemp = analogRead(temp);
  float voltaje = (lecturaTemp / 1024.0) * 5.0;
  int temperatura = round((voltaje - 0.5) * 100);

  
  Serial.print("La temperatura actual es: ");
  Serial.print(temperatura);
  Serial.println("C");
  	delay(10);

  	if ((temperatura >= -40) && (temperatura <= 18) && (porcentajeLuz >= 30) && (porcentajeLuz <= 70)){
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, HIGH);
  	} else if ((temperatura > 18) && (temperatura <= 90) && (porcentajeLuz >= 30) && (porcentajeLuz <= 70)){
    digitalWrite(rojo, LOW);
    digitalWrite(verde, HIGH);
    digitalWrite(azul, LOW);
  	} else if ((temperatura >= 90) && (temperatura <= 125) && (porcentajeLuz >= 30) && (porcentajeLuz <= 70)) {
    digitalWrite(rojo, HIGH);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
  	} else {
    digitalWrite(rojo, LOW);
    digitalWrite(verde, LOW);
    digitalWrite(azul, LOW);
  	}
  
}