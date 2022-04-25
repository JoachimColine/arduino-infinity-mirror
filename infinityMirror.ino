#include <FastLED.h>

#define NUM_LEDS 27
#define DATA_PIN 7
#define DELAY_MS 25
CRGB leds[NUM_LEDS];

void setup() {
  FastLED.addLeds<WS2811, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Blue;
    FastLED.show();
    delay(DELAY_MS);
  }
    for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Green;
    FastLED.show();
    delay(DELAY_MS);
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Red;
    FastLED.show();
    delay(DELAY_MS);
  }
  for (int i = 0; i < NUM_LEDS; i++) {
    leds[i] = CRGB::Yellow;
    FastLED.show();
    delay(DELAY_MS);
  }
}
