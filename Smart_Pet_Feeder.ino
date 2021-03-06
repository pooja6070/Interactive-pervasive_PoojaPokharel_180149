#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

Servo servo;

char auth[] = "mEI2wil_cH1YGsyJNJ0ih_t8UipqBwTg";
char ssid[] = "pooja";
char pass[] = "12345678";
void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  

  servo.attach(15); // NodeMCU D8 pin
  
 }
  
void loop()
{
  
  Blynk.run();
  
}
BLYNK_WRITE(V2)

{

   servo.write(param.asInt());

}

BLYNK_WRITE(V1)
{
servo.write(0);  
delay(2500);       
servo.write(90);
delay(30);
}
