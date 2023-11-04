/********************************************
 * github @CatOnComputer                    *
 * Simple led flasing for WWHF 2023 badge   *
 ********************************************/

// use definitions to give static labels to certain numbers in our code
#define LED_01 47
#define LED_02 7
#define LED_03 17
#define LED_04 18
#define LED_05 8
#define LED_06 3
#define LED_07 41
#define LED_08 42
#define LED_09 2
#define LED_10 1
#define LED_11 46

#define LED_R 4
#define LED_G 5
#define LED_B 6

#define TOTAL_LEDS 14

// store those pins we'll use in an array called "pinList" for easy access later
const int pinList[TOTAL_LEDS] = {
  LED_01, LED_02, LED_03, LED_04, LED_05, LED_06, LED_07,
  LED_08, LED_09, LED_10, LED_11, LED_R, LED_G, LED_B
};

// a helper function to turn all the leds off
void allOff() {
  // iterate through the pinList to sequentially turn them off
  for(int listIndex = 0; listIndex < TOTAL_LEDS; listIndex++) {
    digitalWrite(pinList[listIndex], LOW);
  }
}

// a helper function to turn all the leds on
void allOn() {
  // iterate through the pinList to sequentially turn them off
  for(int listIndex = 0; listIndex < TOTAL_LEDS; listIndex++) {
    digitalWrite(pinList[listIndex], HIGH);
  }
}

// a helper function to set all the leds to "output" mode
void allOutput() {
  // iterate through the pinList to sequentially configure them
  for(int listIndex = 0; listIndex < TOTAL_LEDS; listIndex++) {
    pinMode(pinList[listIndex], OUTPUT);
  }
}

// setup() only runs once, after powering the device
void setup() {
  // configure the mode of each pin. Since they are LEDs to control, they are all OUTPUT mode
  allOutput();
}

// loop() will run continuously, in a loop
void loop() {
  // Turn them all on, then wait a second (1000 ms)
  allOn();
  delay(1000);

  // Turn them all off, then wait another second
  allOff();
  delay(1000);
}
