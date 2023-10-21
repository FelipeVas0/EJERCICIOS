#include <Arduino.h>
#include <iostream>

using namespace std;
void setup()
{
  Serial.begin(115200);
  int i = 1;

  while (i <= 10) {
    Serial.begin(115200);
    Serial.println(i);
    i++;
  }
  
}


void loop(){

}