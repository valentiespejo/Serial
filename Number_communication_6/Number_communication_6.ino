/**********************************************************************************
**                                                                               **
**                            Number communication 6                             **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    05/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//define the variables
int num, nums;
long suma;
double mitja;
//******************************** SETUP ******************************************
void setup() {
  Serial.begin(9600);// opens serial port, sets data rate to 9600 bps
  Serial.println("Entrar numeros un a un (per acabar 0):");//first line on terminal
}
//********************************* LOOP ******************************************
void loop() {
  nums = 0;
  num = 1;
  do{
    // if there's any serial available, read it:
    while (Serial.available() > 0) {
      // look for the next valid integer in the incoming serial stream:
      num = Serial.parseInt();
      Serial.print(num);//define the number
      Serial.print(" - ");
    
      // look for the newline. That's the end of your sentence:
      if (Serial.read() == '\n') { 
          suma = suma + num;
          nums++; //plus number of numbers to gent how many
      }
    }
  }while (num != 0);
  nums--;
  mitja = float(suma) / nums;//to get the average
    
  Serial.println(""); 
  Serial.print("S'han entrat ");
  Serial.print(nums);
  Serial.print(" numeros, la suma de tots ells es ");
  Serial.print(suma);
  Serial.print(" i la mitja ");
  Serial.print(mitja);
  Serial.println(".");
  Serial.println("");
  Serial.print("Entrar numeros un a un (per acabar 0): ");   
}
//******************************* FUNCIONS ****************************************
