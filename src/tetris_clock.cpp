#include <Arduino.h>

#include <Ticker.h>
#include <PxMatrix.h>
#include <TimeLib.h>
#include <NtpClientLib.h>
#include <ESP8266WiFi.h>

#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>

#include "definitions.h"
#include "colors.h"
#include "numbers.h"
#include "drawing.h"
#include "ntp_time.h"

#define PATTERN4 

Ticker display_ticker;          // Ticker that triggers redraw of the screen
Ticker timer_ticker;            // Ticker that triggers one revolution in the falling animation
WiFiManager wifiManager;
PxMATRIX display(32, 16, P_LAT, P_OE, P_A, P_B, P_C);

uint8_t init_state = 0;         // Hold the current state of the initialization process
String str_display_time = "0000"; // Holds the currently displayed time as string
bool seconds_odd = false;       // True when the seconds are currently odd

void setup()
{
  Serial.begin(115200);

  display.begin(4);
  display.setFastUpdate(true);

  display.clearDisplay();

  drawIntro();

  wifiManager.setTimeout(AP_TIMEOUT);
  if (!wifiManager.autoConnect(AP_NAME, AP_PASS))
  {
    Serial.println("Failed to connect and hit timeout");
    delay(3000);

    ESP.reset();
    delay(5000);
  }

  init_state = 1;

  display_ticker.attach(0.001, display_updater);
  yield();
  delay(2000);

}

void loop()
{


  if (init_state == 1)
  {
    NTP.begin("pool.ntp.org", timeZone, true, minutesTimeZone);
    NTP.setInterval(63);
    init_state = 2;
  }



  if (init_state == 2)
  {
    timer_ticker.attach(0.1, number_updater);


    Serial.print(NTP.getTimeDateString());
    Serial.print(" ");
    Serial.print(NTP.isSummerTime() ? "Summer Time. " : "Winter Time. ");
    Serial.print("WiFi is ");
    Serial.print(WiFi.isConnected() ? "connected" : "not connected");
    Serial.print(". ");
    Serial.print("Uptime: ");
    Serial.print(NTP.getUptimeString());
    Serial.print(" since ");
    Serial.println(NTP.getTimeDateString(NTP.getFirstSync()).c_str());
    init_state = 3;
  }



  if (init_state == 3)
  {
    String str_current_time = getTimeAsString();


    if (str_display_time != str_current_time)
    {
      Serial.print("Time changed: ");
      Serial.println(str_current_time);
      updateTime(str_current_time);
      str_display_time = str_current_time;
    }
  }
}