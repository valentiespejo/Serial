/**********************************************************************************
**                                                                               **
**                              Control Structures 8                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    05/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int comptar = 11; // define the variable
int i = 0;
//******************************** SETUP ******************************************
void setup()              // run once, when the arduino starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");// first line on terminal
  Serial.println(comptar);//in a new line
   while(i <= comptar) //write the variable when is <= 11
  {
    Serial.print(i); //print variable if the operation is true
    Serial.print("-"); //print -
    i++; //increase
  } 

}

//********************************* LOOP ******************************************
void loop()  // no program in loop part
{
}
//******************************* FUNCIONS ****************************************
