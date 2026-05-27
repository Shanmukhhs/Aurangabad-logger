#include "DHT.h"              // Line 1

#define DHTPIN 8              // Line 3
#define DHTTYPE DHT11         // Line 4
#define redPin 12

DHT dht(DHTPIN, DHTTYPE);     // Line 6
void setup() {                // Line 8
  Serial.begin(9600);         // Line 9
  pinMode(redPin,OUTPUT);
  dht.begin();                // Line 10

}                             // Line 12

void loop() {                 // Line 14
  delay(1000);                // Line 15
  
  float h = dht.readHumidity(); // Line 17
  float t=dht.readTemperature();
  
  if (isnan(h) || isnan(t)){
    Serial.println("Error:Failed to get readings from the sensor!");
    return;
  }

  else if (h>70 || h<30 || t>45 || t<15){
    digitalWrite(redPin,HIGH);
    Serial.println();
    Serial.println("*****  Warning!:Conditions Unfavourable. *****");
    




    }

    
else {
  digitalWrite(redPin,LOW);
}
  Serial.print("Humidity: "); // Line 19
  Serial.print(h);            // Line 20
  Serial.print(" %");       // Line 21
  Serial.print(" and Temperature:");
  Serial.print(t);
  Serial.println("C");

}              
