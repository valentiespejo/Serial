/**********************************************************************************
**                                                                               **
**                              Math is fun 7                                    **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    06/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//define the variable
int test = 32767;
//******************************** SETUP ******************************************
void setup()             
{
  Serial.begin(9600);      // run one when the arduino starts
  Serial.print("Test value is:"); //First line on terminal
  Serial.println(test); //Read the variable in the same line

  test = test + 1; // Plus one to variable 32767
 
  Serial.print("Now it is "); //Second line on terminal
  Serial.println(test); // the result number
//* 32767 is the last number on a 32 bytes variable and the number 
 converts to negative until 32767*//
}

//********************************* LOOP ******************************************
void loop()  //no program on loop part
{
}
//******************************* FUNCIONS ****************************************
