/**********************************************************************************
**                                                                               **
**                              Control Structures 4                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    27/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
float qualEnergy = 33; // define the variable in a decimal form
//******************************** SETUP ******************************************
void setup()              // run once, when the arduino starts
{
  Serial.begin(9600); 
  
  if (qualEnergy >= 43.2) //when the variables i bigger or 43.2 G
  {
    Serial.print("G");
  }
  else if (qualEnergy < 43.2 & qualEnergy > 38.2)//between 6.5 - 3.5 print F
  {
    Serial.print("F");
  }
  else if (qualEnergy <= 38.2 & qualEnergy > 17.7)//between 6.5 - 3.5 print E
  {
    Serial.print("E");
  }
  else if (qualEnergy <= 17.7 & qualEnergy > 11.1)//between 6.5 - 3.5 print D
  {
    Serial.print("D");
  }
  else if (qualEnergy <= 11.1 & qualEnergy > 6.5)//between 6.5 - 3.5 print C
  {
    Serial.print("C");
  }
  else if (qualEnergy <= 6.5 & qualEnergy > 3.5)//between 6.5 - 3.5 print B
  { 
    Serial.print("B");
  }
  else
  {
    Serial.print("A"); //if the variable is less than 3,5 print
  }
}

//********************************* LOOP ******************************************
void loop()  // no program in loop part
{
}
//******************************* FUNCIONS ****************************************
