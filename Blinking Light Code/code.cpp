int LED = 12; // pin number

void setup(){
    pinMode(LED,OUTPUT);
}

void loop(){
    digitalWrite(LED,HIGHT);
    delay(1000);
    digitalWrite(LED,LOW);
    delay(1000);
}