#include <Arduino.h>
int n=13;

void mifuncion(){
   
    n++;
    return;

}

void setup() {
    // put your setup code here, to run once:
    pinMode(DD1,INPUT_PULLUP);
    digitalWrite(DD1,HIGH);
    
}

void loop() {
    // put your main code here, to run repeatedly:
    int k=0;
    while( k<1000){k++;delay(1000);}
    mifuncion();
    //esto corresponde a la rama prueba de concepto
}

