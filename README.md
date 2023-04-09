MFRC522-UART-Arduino
======================

Arduino library for MFRC522 based modules via Serial UART interface.


Methods
=======

```c++
void begin(HardwareSerial *serial);

bool available();

void wait();

void readCardSerial();

byte *getCardSerial();

bool getBlock(byte block, byte keyType, byte *key, byte *returnBlock);

bool writeBlock(byte block, byte keyType, byte *key, byte *data);
```
