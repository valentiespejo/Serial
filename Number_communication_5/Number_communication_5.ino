/**********************************************************************************
**                                                                               **
**                            Number communication 5                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    05/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int midaCargol;//define the variable
//******************************** SETUP ******************************************
void setup() {
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
  Serial.println("Quina mida te el cargol en cm?"); //first line on terminal
}
//********************************* LOOP ******************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    midaCargol = Serial.parseInt();//define the number

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') {

      Serial.print("El cargol amb una mida de ");
      Serial.print(midaCargol);
      Serial.print(" cm es ");
      //define which number represents each case 1 to 10
      switch (midaCargol) {
        case 1:
          Serial.println("petit.");
          break;
        case 2:
          Serial.println("petit.");
          break;
        case 3:
          Serial.println("mitja.");
          break;
        case 4:
          Serial.println("mitja.");
          break;
        case 5:
          Serial.println("gran.");
          break;
        case 6:
          Serial.println("gran.");
          break;
        case 7:
          Serial.println("gran.");
          break;
        case 8:
          Serial.println("molt gran.");
          break;
        case 9:
          Serial.println("molt gran.");
          break;
        case 10:
          Serial.println("molt gran.");
          break;
        default:
          Serial.println("incorrecte.");
          //if the number is bigger than 10 writes
      }
      Serial.println("");
      Serial.println("Quina mida te el cargol en cm?");
      //after the first read the program is available again
    }
  }
}
//******************************* FUNCIONS ****************************************
