/**********************************************************************************
**                                                                               **
**                              Control Structures 5                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    27/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int sensorReading = 0; // define the variable 
//******************************** SETUP ******************************************
void setup()              // run once, when the arduino starts
{
  Serial.begin(9600);
  {
    Serial.begin(9600);
    Serial.print("The day is "); // Fixed part on line one

    switch (sensorReading) {
      case 0:
        Serial.println("dark"); // when the variable is 0 prints dark
        break;
      case 1:
        Serial.println("dim"); // when the variable is 1 prints dark
        break;
      case 2:
        Serial.println("medium"); // when the variable is 2 prints medium
        break;
      case 3:
        Serial.println("bright"); // when the variable is 3 prints bright
        break;
      default:
        Serial.println("... I don't know!!!"); // no variable deffined
    }
  }
}

//********************************* LOOP ******************************************
void loop()  // no program in loop part
{
}
//******************************* FUNCIONS ****************************************
