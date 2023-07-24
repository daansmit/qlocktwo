#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif
#define PIN        D7
#define NUMPIXELS 150

Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
#define DELAYVAL 500

void setup() {
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif

  pixels.begin();
}

void loop() {
    pixels.clear();
    pixels.setPixelColor(10, pixels.Color(0, 150, 0));
    pixels.show();
    delay(1000);

  // for(int i=0; i<NUMPIXELS; i++) {

  //   pixels.setPixelColor(i, pixels.Color(0, 150, 0));
  //   pixels.show();
  //   delay(DELAYVAL);
  // }
}