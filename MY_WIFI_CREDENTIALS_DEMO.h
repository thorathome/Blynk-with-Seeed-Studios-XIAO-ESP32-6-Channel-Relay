// #include "MY_WIFI_CREDENTIALS.h"   // #defines MY_WIFI_SSID AND MY_WIFI_PASSWORD



#define MY_WIFI_SSID      "myPrimarySSID"                // network SSID (name)
#define MY_WIFI_PASSWORD  "myPassword"                   // network password

// Use as a backup SSID if #1 fails so I can use my phone to reconnect, reprogram when needed
#define MY_WIFI_SSID2     "myNextSSID"                   // network SSID (name)
#define MY_WIFI_PASSWORD2 "AnotherPSWD"                  // network password

//  Can add a 3rd SSID and password here... (but must have 3 in total)
#define MY_WIFI_SSID3      ""                            // network SSID (name)
#define MY_WIFI_PASSWORD3  "passowordo"                  // network password


// for diagnostic and heartbeat use
// WiFi.status ( return codes )  
const char *myWiFiStatus[8] = { "0-WL_IDLE_STATUS", "1-WL_NO_SSID_AVAIL",  "2-UNKNOWN", 
  /* for use in heartbeat*/     "3-WL_CONNECTED",   "4-WL_CONNECT_FAILED", "5-UNKNOWN",
                                "6-WL_CONNECT_WRONG_PASSWORD", 
                                "7-WL_DISCONNECTED" };
/*
0 : WL_IDLE_STATUS when Wi-Fi is in process of changing between statuses
1 : WL_NO_SSID_AVAILin case configured SSID cannot be reached
3 : WL_CONNECTED after successful connection is established
4 : WL_CONNECT_FAILED if connection failed
6 : WL_CONNECT_WRONG_PASSWORD if password is incorrect
7 : WL_DISCONNECTED if module is not configured in station mode 

Useful commands
WiFi.printdiag ( Serial ); lots of stuff, (not RSSI)
*/
