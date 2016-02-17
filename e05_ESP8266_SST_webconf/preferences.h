#include <Arduino.h>

//LAYOUT
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define LAYOUT_LINEAR 1
#define LAYOUT1_CIRCULAR 0

//LOCAL CRONO FUNCTION
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define CRONO 0
#define CRONOLEARN 0

//CLOCK
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define CLOCK 1

//DISPLAY BRIGHT
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define BRIGHT_MAX 100         
#define BRIGHT_MIN_DEFAULT 15  
#define BRIGHT_STEP_FADE_IN 20 
#define BRIGHT_STEP_FADE_OUT 1

//OTA Name
#define HOST_NAME_INSKETCH
#define HOST_NAME "Souliss-Termostato-Piano-Terra"

//WIFI CONNECTION
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define DYNAMIC_CONNECTION 0


// **** Define the WiFi name and password ****
//Only for DYNAMIC_CONNECTION = 0
#define WIFICONF_INSKETCH
#define WiFi_SSID               "mywifi"
#define WiFi_Password           "mypassword"  

// Define the network configuration according to your router settingsuration according to your router settings
// and the other on the wireless oneless one
//Only for DYNAMIC_CONNECTION = 0
#define peer_address  0xAB20
#define myvNet_subnet 0xFF00
#define wifi_bridge_address    0xAB10 //gateway


