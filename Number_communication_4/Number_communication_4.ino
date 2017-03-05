/**********************************************************************************
**                                                                               **
**                            Number communication 4                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    05/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
int hores;
float salari;
//******************************** SETUP ******************************************
void setup() {
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
  Serial.println("Quantes hores de treball"); //first line on terminal
}
//********************************* LOOP ******************************************
void loop() {
  // if there's any serial available, read it:
  while (Serial.available() > 0) 
  {
    // look for the next valid integer in the incoming serial stream:
    hores = Serial.parseInt(); 

    // look for the newline. That's the end of your sentence:
    if (Serial.read() == '\n') 
    {  
     //two if else deppens of number
      if (hores <= 37)//less or iqual 37
      {
        salari = hores * 20;//number multiply 20
      }
      else
      {
        salari = 37 * 20 + (hores - 37) * 30;//or bigger multiply 30
      }
      if (salari <= 800)//if the salary is iqual o less than 800
      {
        salari = salari * 0.95;//multiply 0.95
      }
      else
      {
        salari = salari * 0.9;//or if is bigger multiply 0,9
      }
      //print the number of hour and the salary
      Serial.print("El salari per ");
      Serial.print(hores);
      Serial.print(" hores treballades es de ");
      Serial.print(salari);
      Serial.println(" Euros.");
      Serial.println("");
      Serial.println("Quantes hores de treball?");
      //after the operation the progran is ready to calculate again
    }
  }
}

//******************************* FUNCIONS ****************************************
