/**********************************************************************************
**                                                                               **
**                              Math is fun 9                                    **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    06/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//define the variable
float a = 3;
float b = 2;
float d;
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);      // run one when the arduino starts
  Serial.println("Here is division: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  d = a / b;

  Serial.print("a / b = ");
  Serial.println(d);
}

//********************************* LOOP ******************************************
void loop()  //no program on loop part
{
}
//******************************* FUNCIONS ****************************************
