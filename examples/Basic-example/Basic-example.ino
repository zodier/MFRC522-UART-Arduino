// example.ino

#include "MFRC522.h"

MFRC522 Conector;

void setup()  {
	Conector.begin(&Serial);
}

void loop() {
    if (Conector.available()) {
        Conector.readCardSerial(); 	// Mandatory
        
        // Detected card at the reader!

        Conector.wait();			// Mandatory
    }
}
