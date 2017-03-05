/**********************************************************************************
**                                                                               **
**                            Number communication 1                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    05/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
float r1, r2;             // variables for the R's
float rSerie, rParalel;   // variables for the results
//******************************** SETUP ******************************************
void setup()              // run once, when the arduino starts
{
  Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)"); 
// first line on terminal
}

//********************************* LOOP ******************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) {

    // look for the next valid integer in the incoming serial stream:
    r1 = Serial.parseInt(); 
    Serial.print("r1 = ");
    Serial.print(r1);
    Serial.print(" ohms\t");
    // do it again:
    r2 = Serial.parseInt(); 
    Serial.print("r2 = ");
    Serial.print(r2);
    Serial.println(" ohms");

    // look for the newline. 
    if (Serial.read() == '\n') {
      // calculate serie and paralel
      rSerie = r1 + r2;
      rParalel = (r1 * r2) / (r1 + r2);
      
      Serial.print("rSerie = ");
      Serial.print(rSerie); //write the value rserie
      Serial.print(" ohms\t");
      Serial.print("rParal.lel = ");
      Serial.print(rParalel);// write the value rparalel
      Serial.println(" ohms");
      Serial.println();
      Serial.println("Entra nous valors per r1 i r2 (separats per una coma)");
      //repeat the question and the program is ready to calculate again
    }
  }
}
//******************************* FUNCIONS ****************************************
