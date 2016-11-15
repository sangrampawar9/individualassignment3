// This #include statement was automatically added by the Particle IDE.
#include "neopixel/neopixel.h"

// This #include statement was automatically added by the Particle IDE.
#include "Adafruit_SSD1306/Adafruit_SSD1306.h"

#define OLED_DC     D3
#define OLED_CS     D4
#define OLED_RESET  D5
Adafruit_SSD1306 display(OLED_DC, OLED_RESET, OLED_CS);

// This #include statement was automatically added by the Particle IDE.
#include "neopixel/neopixel.h"





#include <application.h>



/* ======================= Prototype Defs =========================== */

void colorAll(uint32_t c, uint8_t wait);


/* ======================= Spark_StrandTest.cpp ===================== */

#define PIN D6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(24, PIN, WS2812B);



int sensorPin = A0; //analog pin 0
int prox;
int pos = 0;
int led = D7;
int x;


void setup(){
  Serial.begin(9600);
  Spark.variable("val",&prox,INT);
   Spark.function("setLed", photonLed);
   pinMode(A0,INPUT);
     pinMode(led, OUTPUT);
    // strip.setBrightness(2);
     strip.begin();
     strip.show();
    display.begin(SSD1306_SWITCHCAPVCC);
display.setTextSize(2);// text size
display.setTextColor(WHITE);

}

void loop(){
    prox = analogRead(sensorPin);
   Serial.println(prox);
  //just to slow down the output - remove if trying to catch an object passing by
  //delay(1000);
  strip.show();
  
   // display.begin(SSD1306_SWITCHCAPVCC);
  // display.clearDisplay();
   //display.setCursor(x/2, 7);
    //display.setTextSize(1.6);       // text size
    //display.setTextColor(WHITE); // text color
    //display.setTextWrap(false); // turn off text wrapping so we can do scrolling
    //display.print(prox);
    //display.display();
    //delay(1000);

}

// output value displayed from  sensor.


int photonLed(String posValue) {
    pos = posValue.toInt();
    Serial.println(pos);
    
    if(prox<500){
        display.clearDisplay();
   display.setCursor(x/2, 7);
    //display.setTextSize(1.6);       // text size
    //display.setTextColor(WHITE); // text color
    //display.setTextWrap(false); // turn off text wrapping so we can do scrolling
    display.print(prox);
    display.display();
    delay(1000);
        
  strip.setPixelColor(0, strip.Color(0, 0, 0));      
  strip.setPixelColor(1, strip.Color(0, 0, 0));
  strip.setPixelColor(2, strip.Color(0, 0, 0));
  strip.setPixelColor(3, strip.Color(0, 0, 0));
  strip.setPixelColor(4, strip.Color(0, 0, 0));
  strip.setPixelColor(5, strip.Color(0, 0, 0)); 
  strip.setPixelColor(6, strip.Color(0, 0, 0));
  strip.setPixelColor(7, strip.Color(0, 0, 0));
  strip.setPixelColor(8, strip.Color(0, 0, 0));
  strip.setPixelColor(9, strip.Color(0, 0, 0));
  strip.setPixelColor(10, strip.Color(0, 0, 0)); 
  strip.setPixelColor(11, strip.Color(0, 0, 0));
  strip.setPixelColor(12, strip.Color(0, 0, 0));
  strip.setPixelColor(13, strip.Color(0, 0, 0));
  strip.setPixelColor(14, strip.Color(0, 0, 0));
  strip.setPixelColor(15, strip.Color(0, 0, 0)); 
  strip.setPixelColor(16, strip.Color(0, 0, 0));
  strip.setPixelColor(17, strip.Color(0, 0, 0));
  strip.setPixelColor(18, strip.Color(0, 0, 0));
  strip.setPixelColor(19, strip.Color(0, 0, 0));
  strip.setPixelColor(20, strip.Color(0, 0, 0));
  strip.setPixelColor(21, strip.Color(0, 0, 0));
  strip.setPixelColor(22, strip.Color(0, 0, 0));
  strip.setPixelColor(23, strip.Color(0, 0, 0));
  strip.setPixelColor(24, strip.Color(0, 0, 0));
  
        
    }
    
    
   else if(prox>=500 && prox<1500)
    {
        display.clearDisplay();
   display.setCursor(x/2, 7);
    //display.setTextSize(1.6);       // text size
    //display.setTextColor(WHITE); // text color
    //display.setTextWrap(false); // turn off text wrapping so we can do scrolling
    display.print(prox);
    display.display();
    delay(1000);
        digitalWrite(led,HIGH);
         Serial.println("On");
  strip.setPixelColor(0, strip.Color(255, 0, 255));      
  strip.setPixelColor(1, strip.Color(255, 0, 255));
  strip.setPixelColor(2, strip.Color(255, 0, 255));
  strip.setPixelColor(3, strip.Color(255, 0, 255));
  strip.setPixelColor(4, strip.Color(255, 0, 255));
  strip.setPixelColor(5, strip.Color(255, 0, 255));
  strip.setPixelColor(6, strip.Color(255, 0, 255));
  strip.setPixelColor(7, strip.Color(255, 0, 255));
  strip.setPixelColor(8, strip.Color(255, 0, 255));
  strip.setPixelColor(9, strip.Color(0, 0, 0));
  strip.setPixelColor(10, strip.Color(0, 0, 0)); 
  strip.setPixelColor(11, strip.Color(0, 0, 0));
  strip.setPixelColor(12, strip.Color(0, 0, 0));
  strip.setPixelColor(13, strip.Color(0, 0, 0));
  strip.setPixelColor(14, strip.Color(0, 0, 0));
  strip.setPixelColor(15, strip.Color(0, 0, 0)); 
  strip.setPixelColor(16, strip.Color(0, 0, 0));
  strip.setPixelColor(17, strip.Color(0, 0, 0));
  strip.setPixelColor(18, strip.Color(0, 0, 0));
  strip.setPixelColor(19, strip.Color(0, 0, 0));
  strip.setPixelColor(20, strip.Color(0, 0, 0));
  strip.setPixelColor(21, strip.Color(0, 0, 0));
  strip.setPixelColor(22, strip.Color(0, 0, 0));
  strip.setPixelColor(23, strip.Color(0, 0, 0));
  strip.setPixelColor(24, strip.Color(0, 0, 0));
  
  
    }
    else if(prox>=1500 && prox<2500)
    {
        
        display.clearDisplay();
   display.setCursor(x/2, 7);
    //display.setTextSize(1.6);       // text size
    //display.setTextColor(WHITE); // text color
    //display.setTextWrap(false); // turn off text wrapping so we can do scrolling
    display.print(prox);
    display.display();
    delay(1000);
         digitalWrite(led,HIGH);
         Serial.println("Off");
  strip.setPixelColor(0, strip.Color(255, 0, 255));
  strip.setPixelColor(1, strip.Color(255, 0, 255));
  strip.setPixelColor(2, strip.Color(255, 0, 255));
  strip.setPixelColor(3, strip.Color(255, 0, 255));
  strip.setPixelColor(4, strip.Color(255, 0, 255));
  strip.setPixelColor(5, strip.Color(255, 0, 255));
  strip.setPixelColor(6, strip.Color(255, 0, 255));
  strip.setPixelColor(7, strip.Color(255, 0, 255));
  strip.setPixelColor(8, strip.Color(255, 0, 255));
  strip.setPixelColor(9, strip.Color(255, 0, 255));
  strip.setPixelColor(10, strip.Color(255, 0, 255));
  strip.setPixelColor(11, strip.Color(255, 0, 255));
  strip.setPixelColor(12, strip.Color(255, 0, 255));
  strip.setPixelColor(13, strip.Color(255, 0, 255));
  strip.setPixelColor(14, strip.Color(255, 0, 255));
  strip.setPixelColor(15, strip.Color(255, 0, 255));
  strip.setPixelColor(16, strip.Color(255, 0, 255));
  strip.setPixelColor(17, strip.Color(0, 0, 0));
  strip.setPixelColor(18, strip.Color(0, 0, 0));
  strip.setPixelColor(19, strip.Color(0, 0, 0));
  strip.setPixelColor(20, strip.Color(0, 0, 0));
  strip.setPixelColor(21, strip.Color(0, 0, 0));
  strip.setPixelColor(22, strip.Color(0, 0, 0));
  strip.setPixelColor(23, strip.Color(0, 0, 0));
  strip.setPixelColor(24, strip.Color(0, 0, 0));
  
    }
    
    else if(prox>=2500){
        display.clearDisplay();
   display.setCursor(x/2, 7);
    //display.setTextSize(1.6);       // text size
    //display.setTextColor(WHITE); // text color
    //display.setTextWrap(false); // turn off text wrapping so we can do scrolling
    display.print(prox);
    display.print("Danger");
    display.display();
    delay(1000);
        
        
        
    
   strip.setPixelColor(0, strip.Color(255, 0, 255));        
  strip.setPixelColor(1, strip.Color(255, 0, 255));
  strip.setPixelColor(2, strip.Color(255, 0, 255));
  strip.setPixelColor(3, strip.Color(255, 0, 255));
  strip.setPixelColor(4, strip.Color(255, 0, 255));
  strip.setPixelColor(5, strip.Color(255, 0, 255));
  strip.setPixelColor(6, strip.Color(255, 0, 255));
  strip.setPixelColor(7, strip.Color(255, 0, 255));
  strip.setPixelColor(8, strip.Color(255, 0, 255));
  strip.setPixelColor(9, strip.Color(255, 0, 255));
  strip.setPixelColor(10, strip.Color(255, 0, 255));
  strip.setPixelColor(11, strip.Color(255, 0, 255));
  strip.setPixelColor(12, strip.Color(255, 0, 255));
  strip.setPixelColor(13, strip.Color(255, 0, 255));
  strip.setPixelColor(14, strip.Color(255, 0, 255));
  strip.setPixelColor(15, strip.Color(255, 0, 255));
  strip.setPixelColor(16, strip.Color(255, 0, 255));
  strip.setPixelColor(17, strip.Color(255, 0, 255));
  strip.setPixelColor(18, strip.Color(255, 0, 255));
  strip.setPixelColor(19, strip.Color(255, 0, 255));
  strip.setPixelColor(20, strip.Color(255, 0, 255));
  strip.setPixelColor(21, strip.Color(255, 0, 255));
  strip.setPixelColor(22, strip.Color(255, 0, 255));
  strip.setPixelColor(23, strip.Color(255, 0, 255));
  strip.setPixelColor(24, strip.Color(255, 0, 255));
  
  
        
    }
     return 0;
}

void colorAll(uint32_t c, uint8_t wait) {
  uint16_t i;

  for(i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
  }
  strip.show();
  delay(wait);
}