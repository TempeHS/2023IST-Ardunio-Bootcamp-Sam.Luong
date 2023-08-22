/*
  Author: Sam Luong
   Learning Intention: The students understand how time is used in microcontrollers and best practices
    1. I understand why delay(1000) whilst easy is not the preferred way of time event management
    2. I can use the millis() method and binary logic to trigger events by time
    3. I can explain the difference and benefits in serial monitor plotting by using millis() compared to delay()
    4. I understand how time can be used to send a communication frequency by using micros()

  Student Notes: 

  Documentation: 
    https://www.arduino.cc/reference/en/#functions
  Schematic: 
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/09.workingWithTime/Bootcamp-workingWithTime.png
*/

// LED and bool to turn led on or off
static unsigned int myLED = 13;
bool myLedStatus = false;

// both as longs as you can mathematically compare
unsigned long myLEDPrevMillis = 0;
const unsigned long myLedInterval = 2000;

void setup() {
// setup serial monitor
Serial.begin(9600);
Serial.println("Serial monitor configured to 9600");
Serial.println("---------------------------------");

// configure LED
pinMode(myLED, OUTPUT);
}

void loop() {
unsigned long currentMillis = millis();
digitalWrite(myLED, myLedStatus );
Serial.print(currentMillis);
Serial.print(",");
Serial.println(myLedStatus);

if (currentMillis - myLEDPrevMillis >= myLedInterval) {
  myLedStatus = !myLedStatus;
  myLEDPrevMillis = currentMillis;
}
}