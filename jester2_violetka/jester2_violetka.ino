/*
Name:        lightBot.ino
Created:     17/01/2018
Author:      Stefano Ledda <shurillu@tiscalinet.it>
Description: a simple example that do:
             1) parse incoming messages
             2) if "LIGHT ON" message is received, turn on the onboard LED
             3) if "LIGHT OFF" message is received, turn off the onboard LED
             4) otherwise, reply to sender with a welcome message

Telegram - příkazy:
dopredu - Dopředu
dozadu - Dozadu
stop - STOP
doprava - Doprava
doleva - Doleva
rychle - Rychle
         

*/
#include "CTBot.h"
CTBot myBot;

String ssid = "Motorola";     // REPLACE mySSID WITH YOUR WIFI SSID
String pass = "23132313"; // REPLACE myPassword YOUR WIFI PASSWORD, IF ANY
String token = "5719463965:AAFeT-tr9nvrCWh_twVF1n9rAvedNrd0O7E";   // REPLACE myToken WITH YOUR TELEGRAM BOT TOKEN
//uint8_t led = BUILTIN_LED;            // the onboard ESP8266 LED.  

int PIN_FORW = D1;
int PIN_BACK = D2;
int PIN_RIGH = D3;
int PIN_LEFT = D4;
int PIN_RUN = D7;
          

void setup() {
  // initialize the Serial
  Serial.begin(115200);
  delay(100);
  Serial.println("Starting TelegramBot...");

  // connect the ESP8266 to the desired access point
  myBot.wifiConnect(ssid, pass);

  // set the telegram bot token
  myBot.setTelegramToken(token);

  // check if all things are ok
  if (myBot.testConnection())
    Serial.println("\ntestConnection OK");
  else
    Serial.println("\ntestConnection NOK");

  // set the pin connected to the LED to act as output pin
  pinMode(PIN_FORW, OUTPUT);
  pinMode(PIN_BACK, OUTPUT);
  pinMode(PIN_RIGH, OUTPUT);
  pinMode(PIN_LEFT, OUTPUT);
  pinMode(PIN_RUN, OUTPUT);
  
  digitalWrite(PIN_FORW, HIGH); 
  digitalWrite(PIN_BACK, HIGH); 
  digitalWrite(PIN_RIGH, HIGH); 
  digitalWrite(PIN_LEFT, HIGH); 
  digitalWrite(PIN_RUN, HIGH); 
}

void loop() {
  // a variable to store telegram message data
  TBMessage msg;

  // if there is an incoming message...
  if (myBot.getNewMessage(msg)) {

    if (msg.text.equalsIgnoreCase("/dopredu")) {              // if the received message is "dopredu"...
      f_stop();  
      digitalWrite(PIN_FORW, LOW);                            // Forward
      myBot.sendMessage(msg.sender.id, "Jdu dopředu ");       // notify the sender
     
    }
    else if (msg.text.equalsIgnoreCase("/dozadu")) {        
      f_stop();
      digitalWrite(PIN_BACK, LOW);                              
      myBot.sendMessage(msg.sender.id, "Jdu dozadu "); 
     
    }
    else if (msg.text.equalsIgnoreCase("/stop")) {        // if the received message is "stop"
      f_stop();                        
      myBot.sendMessage(msg.sender.id, "Stojím :)");      // notify the sender
      
    }
    else if (msg.text.equalsIgnoreCase("/doprava")) {        // if the received message is "LIGHT OFF"...
      f_stop();
      digitalWrite(PIN_RIGH, LOW);                              // turn off the led (inverted logic!)
      myBot.sendMessage(msg.sender.id, "Otáčím se doprava"); // notify the sender
 
    }
    else if (msg.text.equalsIgnoreCase("/doleva")) {        // if the received message is "LIGHT OFF"...
      f_stop();
      digitalWrite(PIN_LEFT, LOW);                              // turn off the led (inverted logic!)
      myBot.sendMessage(msg.sender.id, "Otáčím se doleva"); // notify the sender

    }
    else if (msg.text.equalsIgnoreCase("/rychle")) {        // if the received message is "LIGHT OFF"...
      f_stop();
      digitalWrite(PIN_RUN, LOW);                              // turn off the led (inverted logic!)
      myBot.sendMessage(msg.sender.id, "Běžím"); // notify the sender
    
    }
    else {                                                    // otherwise...
      // generate the message for the sender
      String reply;
      reply = (String)"Welcome " + msg.sender.username + (String)"Neznámy příkaz";
      myBot.sendMessage(msg.sender.id, reply);             // and send it
    }
  }
  // wait 500 milliseconds
  delay(500);
}


//zastaví předchozí pohyb
void f_stop(){
      digitalWrite(PIN_FORW, HIGH);
      digitalWrite(PIN_BACK, HIGH); 
      digitalWrite(PIN_RIGH, HIGH);  
      digitalWrite(PIN_LEFT, HIGH);   
      digitalWrite(PIN_RUN, HIGH);   
}
