#define sensorePin A1;

void setup(){
    Serial.begin(9600);
}

void loop(){

    int reading = analogRead(sensorePin);

    float voltage = reading * (5.9/102.4);

    float tempC = voltage * 100;

    Serial.print("Temp");
    Serial.print(tempC);
    Serial.print("\xC2\xB0");
    Serial.print("C |");

    delay(1000);
}