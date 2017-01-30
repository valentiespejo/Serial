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

  Serial.println(" Here is some math: "); //first line in terminal

  Serial.print("a = "); // define the variable in terminal
  Serial.println(a); // in a new line the variable ( a = 5 )
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
void loop()  // no program on loop part
{
}
//******************************* FUNCIONS ****************************************
