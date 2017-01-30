/**********************************************************************************
**                                                                               **
**                              Math is fun                                      **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    30/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//define the variables
int a = 5;
int b = 10;
int c = 20;

//******************************** SETUP ******************************************
void setup()              // run one when the arduino starts
{
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps

  Serial.println(" Here is some math: ");

  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("c = ");
  Serial.println(c);

  Serial.print("a + b = ");       // add
  Serial.println(a + b);

  Serial.print("a * c = ");       // multiply
  Serial.println(a * c);
  
  Serial.print("c / b = ");       // divide
  Serial.println(c / b);

  Serial.print("c % b = ");       // module
  Serial.println(c % b);
  
  Serial.print("b - c = ");       // subtract
  Serial.println(b - c);
}

//********************************* LOOP ******************************************
void loop()  // we need this to be here even though its empty
{
}
//******************************* FUNCIONS ****************************************
