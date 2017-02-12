/**********************************************************************************
**                                                                               **
**                              Math is fun 9                                    **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    12/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//I change the variable int for float to get decimal numbers.
float a = 3;
float b = 2;
float d;
//******************************** SETUP ******************************************
void setup()
{
  Serial.begin(9600);      // run one when the arduino starts
  Serial.println("Here is division: "); // first line on terminal
  
  // Show the variables in two lines.
  
  Serial.print("a = ");
  Serial.println(a);
  Serial.print("b = ");
  Serial.println(b);

  // do the operation

  d = a / b;

// get the result 

  Serial.print("a / b = ");
  Serial.println(d);
}

//********************************* LOOP ******************************************
void loop()  //no program on loop part
{
}
//******************************* FUNCIONS ****************************************
