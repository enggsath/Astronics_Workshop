
    //include<dht.h>
    #include <DHT.h>
    #define dataPin D7 // Defines pin number to which the sensor is connected
    DHT dht(dataPin,DHT22); // Creats a DHT object
    void setup() {
      Serial.begin(9600);
      pinMode(D6,OUTPUT);
      pinMode(D8,OUTPUT);
      digitalWrite(D6,HIGH);
      digitalWrite(D8,LOW);
        dht.begin();
    }
    void loop() {
      float t = dht.readTemperature(); // Gets the values of the temperature
      float h = dht.readHumidity(); // Gets the values of the humidity
      
      // Printing the results on the serial monitor
      Serial.print("Temperature = ");
      Serial.print(t);
      Serial.print(" *C ");
      Serial.print("    Humidity = ");
      Serial.print(h);
      Serial.println(" % ");
      
      delay(2000); // Delays 2 secods, as the DHT22 sampling rate is 0.5Hz
    }
