/**********************************************************************************
**                                                                               **
**                              Control Structures 2                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    27/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int tempAigua = 60; // define the variable
//******************************** SETUP ******************************************
void setup()              // run once, when the arduino starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    //when the temperature is bigger than 100 prints the sentence
    Serial.print("Aigua supera els 100C, esta bullint!");
  }

  if (tempAigua < 100)
  {
    Serial.print ("L'aigua encara no bull, està per sota de 100c");
  }
}
  //********************************* LOOP ******************************************
  void loop()  // no program in loop part
  {
  }
  //******************************* FUNCIONS ****************************************
