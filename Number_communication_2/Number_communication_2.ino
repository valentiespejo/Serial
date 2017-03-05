/**********************************************************************************
**                                                                               **
**                            Number communication 2                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    05/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
long num; //define the variable
//******************************** SETUP ******************************************
void setup() {
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
  Serial.println("Entrar un numero?"); //first line on terminal
}
//********************************* LOOP ******************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    num = Serial.parseInt(); //the number that I introduce
    Serial.print("El "); //pint it.
    Serial.print(num);
    
    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') { 
      
      if ( num % 2 == 0){
        Serial.println(" es parell.");//if the number can be divided
      }
      else{
        Serial.println(" es imparell.");//if the number can't be divided
      }
      //after this write again the first line and the program is ready
      Serial.println("");
      Serial.println("Entrar un numero?");
    }
  }
}
//******************************* FUNCIONS ****************************************
