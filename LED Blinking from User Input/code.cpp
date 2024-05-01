void setup(){
    pinMode(13,OUTPUT);
    pinMode(12,OUTPUT);
    pinMode(11,OUTPUT);
    Serial.begin(9600);
}

void loop(){
    if (Serial.available()>0){
        char letter = Serial.readString();
        int animationSpeed = 100;
        if (letter == 'r'){
            digitalWrite(13,HIGH);
            delay(animationSpeed);
            digitalWrite(13,LOW);
            delay(animationSpeed);
        }

        else if (letter == 'g'){
            digitalWrite(12,HIGH);
            delay(animationSpeed);
            digitalWrite(12,LOW);
            delay(animationSpeed)
        }
        else if(letter == ' b'){
            digitalWrite(11,HIGH);
            delay(animationSpeed);
            digitalWrite(11,LOW);
            delay(animationSpeed);
        }
    }
}