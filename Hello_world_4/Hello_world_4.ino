/**********************************************************************************
**                                                                               **
**                              Hello world 4                                    **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    30/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.println("Escull un numero de l'operacio que vols realitzar?");
  Serial.println("   1.  Comprovar numero de tarjeta de credit");
  Serial.println("   2.  Comprovar numero de compte bancari");
  Serial.println("   3.  Buscar un digit perdut de tarjeta de credit");
  // prints explanatory text in new lines
}

//********************************* LOOP ******************************************
void loop(){

}

//******************************* FUNCIONS ****************************************
