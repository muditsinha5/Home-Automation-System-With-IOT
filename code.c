
// Template ID, Device Name and Auth Token are provided by the Blynk.Cloud
// See the Device Info tab, or Template settings
#define BLYNK_TEMPLATE_ID           "TMPLh80UidkE"
#define BLYNK_DEVICE_NAME           "Quickstart Device"
#define BLYNK_AUTH_TOKEN            "0eChh7TzEwSvF3hq8bNnPjOyj13uD4Yg"


// Comment this out to disable prints and save space
#define BLYNK_PRINT Serial


#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char auth[] = BLYNK_AUTH_TOKEN;

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "xxxx"; //write the name of your wifi network 
char pass[] = "xxxx"; //write the password of your wifi network

BLYNK_WRITE(V0){
  int value=param.asInt();
  Serial.println(value);
  if(value==1)
  {
    Serial.println("ON");
    digitalWrite(D7,HIGH);
  }
  else
  {
    Serial.println("OFF");
    digitalWrite(D7,LOW);
  }
}

void setup()
{
  // Debug console
  Serial.begin(115200);

  Blynk.begin(auth, ssid, pass);
  pinMode(D7,OUTPUT);
  
}

void loop()
{
  Blynk.run();
 
}
