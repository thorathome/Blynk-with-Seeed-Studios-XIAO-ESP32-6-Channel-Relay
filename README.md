# Blynk-with-Seeed-Studios-XIAO-ESP32-6-Channel-Relay
Simplified demo code for Running Blynk on Seeed Studio's XIAO 6-Channel Relay


Blynkers. 
My target ESP32 Arduino and Blynk platforms of choice are Adafruit’s ESP32V2, with its high quality and Neopixel LED on the board, and Seeed Studio’s XIAO ESP32C6: tiny footprint, great with batteries. 

This is not an advertisement, not a promotion, but an opportunity for me to return value to the Blynk community with an extremely useful product and my supporting code. 

Seeed Studio’s XIAO 6-Channel Wi-Fi 5V DC Relay combines this XIAO ESP32C6 with 6 relays, indicator lights, and easy Blynk programmability in a surprisingly affordable package. I’ve built one project already with this product. 

https://www.seeedstudio.com/6-Channel-Wi-Fi-5V-DC-Relay-p-6373.html

The six relays are heavy-duty, all completely isolated from each other and from the ESP32. Specs say the relays work with AC and DC and are rated to 15A at 120VAC. I am replacing a bunch of Shelly 1s with this, and may replace some, too. Nice compact package. 

Here’s bare-bones Blynk code to demonstrate this device. Compiling to ESP32C6 and using default partitions, this sketch needs your Blynk and WiFi credentials to demo this device. 

I hope this is useful to someone in the Community.  

Code: sketch with two #include files – one for WiFi credentials, the other for Blynk credentials. 

All thoughts welcome. 
