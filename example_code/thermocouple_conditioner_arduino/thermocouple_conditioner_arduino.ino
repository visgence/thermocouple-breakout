/*
    Visgence, Inc. Thermocouple Conditioner Example
    
    This example code is in the public domain.
 */

int sensorPin = A0;
int alarmPin = 2;
int ledPin = 13;
int sensorValue = 0;
bool alarmState = 0;

float c, f;

float adc_to_celsius(int x){
    return ((float) x / 2.046);
}

float adc_to_farhenheight(int x){
    return (((float) x / 2.046 * 9.0 / 5.0) + 32.0);
}

void setup() {
    pinMode(ledPin, OUTPUT);  
    Serial.begin(9600);
}

void loop() {
    // turn the ledPin on
    digitalWrite(ledPin, HIGH);
    
    //is the probe plugged in?
    alarmState = digitalRead(alarmPin);

    if(alarmState){
        Serial.println("PROBE UNPLUGGED!");
    }

    else{
        // read the value from the sensor:
        sensorValue = analogRead(sensorPin);    

        c = adc_to_celsius(sensorValue);
        f = adc_to_farhenheight(sensorValue);

        Serial.print("ADC: ");
        Serial.print(sensorValue);
        Serial.print(" | ");
        Serial.print(c);
        Serial.print(" C ");
        Serial.print(" | ");
        Serial.print(f);
        Serial.print(" F ");
        Serial.println("");
    }

    // turn the ledPin off: 
    digitalWrite(ledPin, LOW);
    
    delay(1000);                  
}

