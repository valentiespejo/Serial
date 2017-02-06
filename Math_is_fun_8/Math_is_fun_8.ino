/**********************************************************************************
**                                                                               **
**                              Math is fun 8                                    **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    06/02/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//define the variable
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long missing_drive_kb;
//******************************** SETUP ******************************************
void setup()             
{
  Serial.begin(9600);      // run one when the arduino starts
  Serial.print("Your HD is "); 
  Serial.print(drive_gb); // write the number
  Serial.println(" GB large."); // define the large type

  drive_mb = drive_gb;
  drive_mb = drive_mb * 1024; // do the operation to convert GB to Mbytes

  Serial.print("In theory, it can store ");
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");// Shows the result of the operation

  drive_kb = drive_mb;
  drive_kb = drive_kb * 1024; // dot the operation to convert Mbytes to Kbytes

  Serial.print(drive_kb);
  Serial.println(" Kilobytes.");
  
  real_drive_mb = drive_gb;
  real_drive_mb = real_drive_mb * 1000;

  Serial.print("But it really only stores ");
  Serial.print(real_drive_mb);
  Serial.print(" Megabytes, ");

  real_drive_kb = real_drive_mb;
  real_drive_kb = real_drive_kb * 1000;

  Serial.print(real_drive_kb);
  Serial.println(" Kilobytes.");

  missing_drive_kb = drive_kb - real_drive_kb;

  Serial.print("You are missing ");
  Serial.print(missing_drive_kb);
  Serial.println(" Kilobytes!");
}

//********************************* LOOP ******************************************
void loop()  //no program on loop part
{
}
//******************************* FUNCIONS ****************************************
