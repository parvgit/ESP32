/**
 * DHT11 Sensor Reader for Arduino
 * This sketch reads temperature and humidity data from the DHT11 sensor and prints the values to the serial plotter.
 *
 * Author: Dhruba Saha
 * Version: 2.0.0
 * License: MIT
 */
// Code  is tested on 25/12/2023 - Parveen Kumar 

// Include the DHT11 library for interfacing with the sensor.
#include <DHT11.h>

// Create an instance of the DHT11 class.
// - For Arduino: Connect the sensor to Digital I/O Pin 2.
// - For ESP32: Connect the sensor to pin GPIO2 or P2.
// - For ESP8266: Connect the sensor to GPIO2 or D4.
#define DHT11_PIN 15
DHT11 dht11(DHT11_PIN);

void setup()
{
    // Initialize serial communication to allow debugging and data readout.
    // Using a baud rate of 9600 bps.
    Serial.begin(9600);
}

void loop()
{
   // Attempt to read  humidity values from the DHT11 sensor.
    int humidity = dht11.readHumidity();
   // Attempt to read  temprature values from the DHT11 sensor  with a delay of 500 ms
   delay(500);
   int temp = dht11.readTemperature();
    // Check the result of the reading.
    // If there's no error, print the humidity value.
    // If there's an error, print the appropriate error message.
    if (humidity != DHT11::ERROR_CHECKSUM && humidity != DHT11::ERROR_TIMEOUT)
    {
        Serial.print("Humidity: ");
        Serial.print(humidity);
         Serial.print(" % ");
 
    }
    else
    {
        Serial.println(DHT11::getErrorString(humidity));
    }
    // Check the result of the reading.
    // If there's no error, print the temp value.
    // If there's an error, print the appropriate error message.
    if (temp != DHT11::ERROR_CHECKSUM && temp != DHT11::ERROR_TIMEOUT)
    {
        Serial.print("Temprature: ");
        Serial.print(temp);
    
    }
    else
    {
        Serial.println(DHT11::getErrorString(temp));
    }


    // Wait for 1 seconds before the next reading.
    delay(1000);
    Serial.println(" ");
}