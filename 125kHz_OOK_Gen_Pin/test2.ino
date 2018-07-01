/* Output on pin 10
 */

//Includes for libraries must be done in *.ino file
#include "SPI.h"


//Includes needed for this file
#include "as3933gen.h"

byte pattern[]={0x97, 0xA3}; //pattern[0]=R6, pattern[1]=R5 on AS3932
As3933Gen as;


// the setup function runs once when you press reset or power the board
void setup()
{
  Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop()
{
    as.begin(pattern);
    while(!as.isTxDone());
    as.end();
    delay(1000);
    Serial.println("done sending");
}


