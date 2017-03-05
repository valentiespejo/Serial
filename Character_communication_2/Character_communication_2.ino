/**********************************************************************************
**                                                                               **
**                            Character communication 2                          **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    05/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//define the variables
char thisByte;
char thatByte
//******************************** SETUP ******************************************
void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  Serial.println("Introdueixi lletra de l'alfabet en majuscula o minuscula...");
  //First line on terminal
}
//********************************* LOOP ******************************************
void loop()
  {
  while (Serial.available() > 0)
  {
    thisByte = thatByte;
    thatByte = Serial.read();
    if (thatByte == '\n')
    {
      if (thisByte > 96 &  thisByte < 123)
      {
        Serial.println("");
        Serial.print("La lletra ");
        Serial.write(thisByte);
        Serial.println(" esta en minuscula");
      }
      else if (thisByte > 64 &  thisByte < 91)
      {
        Serial.println("");
        Serial.print("La lletra ");
        Serial.write(thisByte);
        Serial.println(" esta en majuscula");
      }
      else
      {
        Serial.println("No has entrat una lletra!");
      }
    Serial.println("");
    Serial.println("Introdueixi lletra de l'alfabet en majuscula o minuscula...");
    }
  }
  }
//******************************* FUNCIONS ****************************************
