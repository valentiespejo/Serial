/**********************************************************************************
**                                                                               **
**                              Math is fun 2                                    **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    04/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//define the variables
int a = 3;
int b = 4;
int h;

//******************************** SETUP ******************************************
void setup()              // run one when the arduino starts
{
  Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps


Serial.println("Lets calculate a hypoteneuse "); //first line in terminal


  h = sqrt(a*a + b*b); //square root of the add of each multiply

  
  Serial.print("a = "); // define the variable in terminal
  Serial.println(a); // in a new line the variable ( a = 3 )
  Serial.print("b = ");
  Serial.println(b);
  Serial.print("h = ");
  Serial.println(h);


}

//********************************* LOOP ******************************************
void loop()  // no program on loop part
{
}
//******************************* FUNCIONS ****************************************
