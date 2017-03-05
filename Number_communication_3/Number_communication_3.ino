/**********************************************************************************
**                                                                               **
**                            Number communication 3                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    05/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
long numEntrat, num;
int numXifres;
//******************************** SETUP ******************************************
void setup() {
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
  Serial.println("Entrar un numero?"); //first line on terminal
}
//********************************* LOOP ******************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) 
  {
    // look for the next valid integer in the incoming serial stream:
    numEntrat = Serial.parseInt();//the number that I introduce
    num = numEntrat;
    numXifres = 0;

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') 
  {
      do 
      {
        num = num / 10;//divide to 10 to know how many numbers
        numXifres++; //plus
      }
      while (num != 0);
      Serial.print("El el numero ");
      Serial.print(numEntrat);
      Serial.print(" te ");
      Serial.print(numXifres);
      Serial.println(" xifres.");//write the result 
      Serial.println("");
      Serial.println("Entra un numero? ");
      //after this write again the first line and the program is ready
    }
  }
}
//******************************* FUNCIONS ****************************************
