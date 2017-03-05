/**********************************************************************************
**                                                                               **
**                            Character communication 1                          **
**                                                                               **
** VALENTÍ ESPEJO RODRIGUEZ                                    05/03/2017        **
**********************************************************************************/

//******************************* INCLUDES ****************************************

//******************************* VARIABLES ***************************************
//define the variables
char thisByte;
char thatByte = 33;
//******************************** SETUP ******************************************
void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  Serial.println("Prem una tecla...");//First line on terminal
}
//********************************* LOOP ******************************************
void loop() {
  // see if there's incoming serial data:
  while (Serial.available() > 0) {

    thisByte = thatByte;
    thatByte = Serial.read();

    // look for the newline. That's the end of your sentence:
    if (thatByte == '\n') {

      // prints value unaltered, i.e. the raw binary version of the
      // byte. The serial monitor interprets all bytes
      Serial.write(thisByte);

      Serial.print(", dec: ");
      // prints value as string as an ASCII-encoded decimal (base 10).
      // Decimal is the  default format for Serial.print() and Serial.println(),
      Serial.print(thisByte);
      // Serial.print(thisByte, DEC);

      Serial.print(", hex: ");
      // prints value as string in hexadecimal (base 16):
      Serial.print(thisByte, HEX);

      Serial.print(", oct: ");
      // prints value as string in octal (base 8);
      Serial.print(thisByte, OCT);

      Serial.print(", bin: ");
      // prints value as string in binary (base 2)
      Serial.println(thisByte, BIN);
      //Serial.println("Prem una tecla...");
      //without limit of times
    }
  }
}
//******************************* FUNCIONS ****************************************
