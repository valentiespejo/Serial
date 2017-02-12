/**********************************************************************************
**                                                                               **
**                                 Print                                         **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    12/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************

//define the variable

int num = 64;

//******************************** SETUP ******************************************

void setup()             // run once, when the arduino starts

{
  Serial.begin(9600);    // set up Serial library at 9600 bps

  Serial.println("Different formats for the same number:"); //first line 

  Serial.write(num); //write binary data to serial port
  Serial.println(); 

  // Show the number in deciaml form
  
  Serial.println(num,DEC);

  // Show the number in binary form
  
  Serial.println(num,BIN);

  // Show the number in hexadecimal form
  
  Serial.println(num,HEX);

  //Show the number in octal form
  
  Serial.println(num,OCT);

  // To change the format after the variable name put the type
}


//********************************* LOOP ******************************************
void loop()  //no program on loop part
{
}
//******************************* FUNCIONS ****************************************
