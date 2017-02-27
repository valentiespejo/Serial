/**********************************************************************************
**                                                                               **
**                              Control Structures 3                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    27/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int tempAigua = 103; // define the variable
//******************************** SETUP ******************************************
void setup()              // run once, when the arduino starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  
//the variable number has use for the program to prints the sentence who need

  if ( tempAigua < 90)
  {
    Serial.print("Aigua encara no bull");
  }
  else if (tempAigua >= 90 & tempAigua < 100)
  {
    Serial.print("Aigua apunt de bullir");
  }
  else if (tempAigua == 100)
  {
    Serial.print("Aigua a 100C");
  }
  else
  {
    Serial.print ("Aigua bullint");
  }  
}
//********************************* LOOP ******************************************
void loop()  // no program in loop part
{
}
//******************************* FUNCIONS ****************************************
