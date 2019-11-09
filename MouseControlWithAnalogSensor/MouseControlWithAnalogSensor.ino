#include <Mouse.h>

// Add Analog Pins Here
int moveLeftSensor = A0;

// Add Variables For
int leftSensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(9600);
}

//Threshold for FSR
int sensorThreshold = 100;

//Threshold for Photoresistor
//int sensorThreshold = 10;

void loop() {
  // read the value from the sensor:
  leftSensorValue = analogRead(moveLeftSensor);

  // Using Force Sensitive Resistor Sensor
  if (leftSensorValue > sensorThreshold ) {
    // Move mouse three pixels to the left
    Mouse.move(-3, 0, 0);
  }

  // Using Photo Sensor
  //  if (leftSensorValue < sensorThreshold ) {
  //    // Move mouse three pixels to the left
  //    Mouse.move(-3, 0, 0);
  //  }

  // Implement Code For other Mouse Actions Here!
  //if ( > sensorThreshold) {
  //
  //}


  Serial.println(leftSensorValue);
  delay(100);
}
