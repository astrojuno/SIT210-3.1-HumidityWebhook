// This #include statement was automatically added by the Particle IDE.
// Used for the DHT temperature, humidity sensor
#include <Adafruit_DHT.h>

// define the pin we're using to read the sensor
#define SensorPin A4

// Create the dht object
DHT dht(SensorPin, DHT11);

// Setup the program
void setup() {
    // start the sensor
    dht.begin();
}

void loop() {
    String humidity = String(dht.getHumidity());
    
    Particle.publish("Humidity %", humidity, PRIVATE);
    delay(30000);
    
}
