/**********************************************************************************
**                                                                               **
**                             Hello World 2                                     **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    30/01/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************

//******************************** SETUP ******************************************
void setup()// run one when the arduino starts
{
Serial.begin(9600);    // opens serial port, sets data rate to 9600 bps
}

//********************************* LOOP ******************************************
void loop()  //run over and over again                   
{
  Serial.print("Hello world!");  // prints Hello word! in the same line
  delay(1000); //delay 1000 bps between each write
}

//******************************* FUNCIONS ****************************************