/********************************************
 * github @CatOnComputer                    *
 * Simple serial "Hello World" for an esp32 *
 ********************************************/

// use this variable to count the messages printed in the loop()
int n_messageLoops = 0;

// setup() only runs once, after powering the device
void setup() {

  // init the serial connection (115200 baud rate)
    Serial.begin(115200);

  // do nothing until a serial connection is made...
    while (!Serial) {;}

  // send a message upon successful connection
    Serial.println("Serial Connection Started!");
}

// loop() will run continuously, in a loop
void loop() {

  // Print the message, and the number of times it looped
    Serial.println("Hello World! Message #" + String(n_messageLoops));
  
  // wait about one second
    delay(1000);

  // increment the counter (increase +1)
    n_messageLoops++;
}
