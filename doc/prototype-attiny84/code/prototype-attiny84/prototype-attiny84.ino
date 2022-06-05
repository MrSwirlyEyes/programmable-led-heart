// Program to blink an array of leds
//
// Blinks/toggles an array of LEDs ON and OFF



// Total number of LEDs
#define NUM_LEDS 10

// Assign led aliases
#define led1  10
#define led2   9
#define led3   8
#define led4   7
#define led5   6
#define led6   5
#define led7   4
#define led8   3
#define led9   2
#define led10  1

// Define LED array
byte leds[NUM_LEDS] = {
  led1,
  led2,
  led3,
  led4,
  led5,
  led6,
  led7,
  led8,
  led9,
  led10
};

void setup() {

  // Configure ALL led pins to be a digital OUTPUT
  for(int i = 0; i < NUM_LEDS; i++) {
    pinMode(leds[i],OUTPUT);
  }
}

void loop() {

  // Write all LEDs HIGH/ON
  for(int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(leds[i],HIGH);

    delay(50);
  }

  delay(500);

  // Write all LEDs LOW/OFF
  for(int i = 0; i < NUM_LEDS; i++) {
    digitalWrite(leds[i],LOW);

    delay(50);
  }

  delay(500);
}