/**********************************************************************************
**                                                                               **
**                              Control Structures 7                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    27/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************
// In this example is included the 6 and 7 of Control Structures
//******************************* VARIABLES ***************************************
int comptar = 11; // define the variable
//******************************** SETUP ******************************************
void setup()              // run once, when the arduino starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a "); // first line on terminal
  Serial.println(comptar); //in a new line
  for (int i = 0; i <= comptar; i++) // write the variable anb plus one
  {
    Serial.print(i);
    if (i<=(comptar-1))//if this part is true
    {
    Serial.print("-"); // write this
    }
  }
  }
// the program repeats until 11
//********************************* LOOP ******************************************
void loop()  // no program in loop part
{
}
//******************************* FUNCIONS ****************************************
