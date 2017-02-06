/**********************************************************************************
**                                                                               **
**                              Math is fun 5                                    **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    04/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//define the variable
long drive_gb = 100; //define 100 GB
long drive_mb; // change int for long to get more numbers
//******************************** SETUP ******************************************
void setup()             
{
Serial.begin(9600);      // run one when the arduino starts
  Serial.print("Your HD is "); // first text on first line in terminal 
  Serial.print(drive_gb); // punt the number defined before
  Serial.println(" GB large."); // to end the line

  drive_mb = 1024 * drive_gb; //define the conversor type between GB and Megabytes

  Serial.print("It can store "); //first text on second line in terminal
  Serial.print(drive_mb); // the number of multiply 1024*100
  Serial.println(" Megabytes!"); // to end the line
}

//********************************* LOOP ******************************************
void loop()  //no program on loop part
{
}
//******************************* FUNCIONS ****************************************
