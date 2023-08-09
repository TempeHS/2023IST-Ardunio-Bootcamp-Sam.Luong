/*
  Author: Sam Luong
  Learning Intention: The students will learn what 'pulse width modulation' is and how to use it to write analogue data on a digital PIN.
  Success Criteria:
    1. I understand what pulse width modulation is
    2. I can identify the PWM PINS on the Arduino Uno
    3. I can wire an RGB LED for PWM control in TINKERCAD
    5. I can write PWM data to multiple pins and manually change the colour of the LED

  Student Notes: 

  Documentation: 
    https://www.w3schools.com/colors/colors_rgb.aspt
  Schematic:
    https://www.tinkercad.com/things/drNDsMxGMIY?sharecode=D6x4_xTTRl_zGs7B-XGqfbQhG_xgjj3TVS_c-GNTK-c
    https://github.com/TempeHS/TempeHS_Ardunio_Boilerplate/blob/main/Ardunio_Bootcamp/06.pulseWidthModulation/Bootcamp-PWMOutput.png
*/
unsigned static int myLightSensor = A0;
unsigned static int myLED = 5;

void setup() {
//configure serial monitor
Serial.begin(9600);
//debug serial monitor
Serial.println("Serial monitor configured to 9600");
Serial.println("---------------------------------");
pinMode(myLED, OUTPUT);
}

void loop() {
// read serial date from light sensor
int val = analogRead(A0);
Serial.print("myLightSensor:");
Serial.println(val);
delay(100);
int LEDbright = 255;
analogWrite(myLED, LEDbright);
}