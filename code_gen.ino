/*********************************************************************
generiert den code fuer die LED-birne

ungekuerzt 
ausfuehrliche beschreibung 
ausgabe ueber SER
**********************************************************************/
uint32_t LEDcode(uint8_t code){

  uint32_t TXcode = 16711680;
   Serial.print("000");
   Serial.print(code,BIN);
   Serial.print(" , Farbcode ("); 
   Serial.print(code);
   Serial.println(")"); 
  uint8_t blockA = code << 3; // nach links um 3 stellen verschieben 00010101 -> 10101000
   Serial.print(blockA,BIN);
   Serial.println(" , verschiebe nach Links um 3 Stellen");
   
  blockA = blockA +7; // init (3x 111) vorab stellen 10101000 -> 10101111
   Serial.print(blockA,BIN); 
   Serial.println(" , Block A (ersten drei Bit's = 111)"); 
   
  uint8_t blockB = ~blockA; // code_invert =  // invertiere die 8 bit
   Serial.print("0");
   Serial.print(blockB,BIN); 
   Serial.println(" , Block B 'Verifizierung' (Invert von Block A)"); 

  uint8_t blockC = 255;
   Serial.print(blockC,BIN); 
   Serial.println(" , Block C (255)"); 
  //uint32_t TXcode = 16711680; 
   Serial.print(TXcode,BIN);
   Serial.println(" , Block C (32bit)"); 
 
  uint16_t BlockAuB = blockB << 8; // nach links um 8 stellen verschieben
  BlockAuB = BlockAuB + blockA;
    
   Serial.print(BlockAuB,BIN); 
   Serial.println(" , Block A und B"); 
  TXcode = TXcode + BlockAuB;
   Serial.print(TXcode,BIN);
   Serial.println(" , alle 3 Bloecke hintereinander");
   Serial.print(TXcode,HEX);
   Serial.println(" , (HEX)"); 
  return TXcode;
}

