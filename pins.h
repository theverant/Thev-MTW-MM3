#ifndef PINS_H
#define PINS_H

#define X_MS1_PIN -1
#define X_MS2_PIN -1
#define Y_MS1_PIN -1
#define Y_MS2_PIN -1
#define Z_MS1_PIN -1
#define Z_MS2_PIN -1
#define E0_MS1_PIN -1
#define E0_MS2_PIN -1
#define E1_MS1_PIN -1
#define E1_MS2_PIN -1
#define DIGIPOTSS_PIN -1

#if MOTHERBOARD == 301
#define KNOWN_BOARD
/*****************************************************************
* Rambo Pin Assignments
******************************************************************/

#ifndef __AVR_ATmega2560__
#error Oops!  Make sure you have 'Arduino Mega 2560' selected from the 'Tools -> Boards' menu.
#endif

#define LARGE_FLASH true

#define X_STEP_PIN 37
#define X_DIR_PIN 48
#define X_MIN_PIN 12
#define X_MAX_PIN 24
#define X_ENABLE_PIN 29
#define X_MS1_PIN 40
#define X_MS2_PIN 41

#define Y_STEP_PIN 36
#define Y_DIR_PIN 49
#define Y_MIN_PIN 11
#define Y_MAX_PIN 23
#define Y_ENABLE_PIN 28
#define Y_MS1_PIN 69
#define Y_MS2_PIN 39

#define Z_STEP_PIN 35
#define Z_DIR_PIN 47
#define Z_MIN_PIN 10
#define Z_MAX_PIN 30
#define Z_ENABLE_PIN 27
#define Z_MS1_PIN 68
#define Z_MS2_PIN 67

#define HEATER_BED_PIN 3
#define TEMP_BED_PIN 2

#define HEATER_0_PIN  7 //9 //Thev MTW Stock dual setup
#define TEMP_0_PIN 1 //10 //Thev MTW Stock dual setup

#define HEATER_1_PIN 9 //7 //Thev MTW Stock dual setup
#define TEMP_1_PIN 0 //1 //Thev MTW Stock dual setup

#ifdef BARICUDA
#define HEATER_2_PIN 6
#else
#define HEATER_2_PIN -1
#endif
#define TEMP_2_PIN -1

#define E0_STEP_PIN       33 // 34 //Thev MTW Stock dual setup
#define E0_DIR_PIN        42 // 43 //Thev MTW Stock dual setup
#define E0_ENABLE_PIN     25 // 26 //Thev MTW Stock dual setup
#define E0_MS1_PIN        63 // 65 //Thev MTW Stock dual setup
#define E0_MS2_PIN        64 // 66 //Thev MTW Stock dual setup

#define E1_STEP_PIN       34 // 33 //Thev MTW Stock dual setup
#define E1_DIR_PIN        43 // 42 //Thev MTW Stock dual setup
#define E1_ENABLE_PIN     26 // 25 //Thev MTW Stock dual setup
#define E1_MS1_PIN        65 // 63 //Thev MTW Stock dual setup
#define E1_MS2_PIN        66 // 64 //Thev MTW Stock dual setup

#define DIGIPOTSS_PIN 38
#define DIGIPOT_CHANNELS {4,5,3,0,1} // X Y Z E0 E1 digipot channels to stepper driver mapping

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            13
#define FAN_PIN            8
#define PS_ON_PIN          4
#define KILL_PIN           -1 //80 with Smart Controller LCD
#define SUICIDE_PIN        -1  //PIN that has to be turned on right after start, to keep power flowing.

#ifdef ULTRA_LCD
  #define KILL_PIN 80
  #ifdef NEWPANEL
   //arduino pin which triggers an piezzo beeper
    #define BEEPER -1 //79      // Nawp
    #define LCD_PINS_RS 70
    #define LCD_PINS_ENABLE 71
    #define LCD_PINS_D4 72
    #define LCD_PINS_D5 73
    #define LCD_PINS_D6 74
    #define LCD_PINS_D7 75

    //buttons are directly attached using AUX-2
    #define BTN_EN1 76
    #define BTN_EN2 77
    #define BTN_ENC 78  //the click

    #define BLEN_C 2
    #define BLEN_B 1
    #define BLEN_A 0

    #define SDCARDDETECT 81    // Ramps does not use this port

    //encoder rotation values
    #define encrot0 0
    #define encrot1 2
    #define encrot2 3
    #define encrot3 1
  #else //old style panel with shift register
    //arduino pin witch triggers an piezzo beeper
    #define BEEPER 33    No Beeper added
    //buttons are attached to a shift register
    // Not wired this yet
    // #define SHIFT_CLK 38
    // #define SHIFT_LD 42
    // #define SHIFT_OUT 40
    // #define SHIFT_EN 17

    #define LCD_PINS_RS 75
    #define LCD_PINS_ENABLE 17
    #define LCD_PINS_D4 23
    #define LCD_PINS_D5 25
    #define LCD_PINS_D6 27
    #define LCD_PINS_D7 29

    //encoder rotation values
    #define encrot0 0
    #define encrot1 2
    #define encrot2 3
    #define encrot3 1

    //bits in the shift register that carry the buttons for:
    // left up center down right red
    #define BL_LE 7
    #define BL_UP 6
    #define BL_MI 5
    #define BL_DW 4
    #define BL_RI 3
    #define BL_ST 2
    #define BLEN_B 1
    #define BLEN_A 0
  #endif
#endif //ULTRA_LCD


#endif

/****************************************************************************************
* MegaTronics
*
****************************************************************************************/
#if MOTHERBOARD == 70
#define KNOWN_BOARD 1


 #ifndef __AVR_ATmega2560__
 #error Oops!  Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
 #endif


#define LARGE_FLASH        true

#define X_STEP_PIN         26
#define X_DIR_PIN          28
#define X_ENABLE_PIN       24
#define X_MIN_PIN          41
#define X_MAX_PIN          37

#define Y_STEP_PIN         60 // A6
#define Y_DIR_PIN          61 // A7
#define Y_ENABLE_PIN       22
#define Y_MIN_PIN          14
#define Y_MAX_PIN          15

#define Z_STEP_PIN         54 // A0
#define Z_DIR_PIN          55 // A1
#define Z_ENABLE_PIN       56 // A2
#define Z_MIN_PIN          18
#define Z_MAX_PIN          19

#define E0_STEP_PIN        31
#define E0_DIR_PIN         32
#define E0_ENABLE_PIN      38

#define E1_STEP_PIN        34
#define E1_DIR_PIN         36
#define E1_ENABLE_PIN      30

#define SDPOWER            -1
#define SDSS               53
#define LED_PIN            13


#define FAN_PIN            7 // IO pin. Buffer needed
#define PS_ON_PIN          12
#define KILL_PIN           -1

#define HEATER_0_PIN       9    // EXTRUDER 1
#define HEATER_1_PIN       8    // EXTRUDER 2 (FAN On Sprinter)
#define HEATER_2_PIN       -1

#if TEMP_SENSOR_0 == -1
#define TEMP_0_PIN         8   // ANALOG NUMBERING
#else
#define TEMP_0_PIN         13   // ANALOG NUMBERING

#endif

#define TEMP_1_PIN         15   // ANALOG NUMBERING
#define TEMP_2_PIN         -1   // ANALOG NUMBERING
#define HEATER_BED_PIN     10   // BED
#define TEMP_BED_PIN       14   // ANALOG NUMBERING

#define BEEPER 33     // Beeper on AUX-4


#ifdef ULTRA_LCD

  #ifdef NEWPANEL
  //arduino pin which triggers an piezzo beeper

    #define LCD_PINS_RS 16
    #define LCD_PINS_ENABLE 17
    #define LCD_PINS_D4 23
    #define LCD_PINS_D5 25
    #define LCD_PINS_D6 27
    #define LCD_PINS_D7 29

    //buttons are directly attached using AUX-2
    #define BTN_EN1 59
    #define BTN_EN2 64
    #define BTN_ENC 43  //the click

    #define BLEN_C 2
    #define BLEN_B 1
    #define BLEN_A 0

    #define SDCARDDETECT -1		// Ramps does not use this port

      //encoder rotation values
    #define encrot0 0
    #define encrot1 2
    #define encrot2 3
    #define encrot3 1
#endif
#endif //ULTRA_LCD

#endif

/****************************************************************************************
* MegaTronics v2.0
*
****************************************************************************************/
#if MOTHERBOARD == 701
 #define KNOWN_BOARD 1


 #ifndef __AVR_ATmega2560__
 #error Oops! Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
 #endif

 #define LARGE_FLASH        true

 #define X_STEP_PIN 26
 #define X_DIR_PIN 27
 #define X_ENABLE_PIN 25
 #define X_MIN_PIN 37
 #define X_MAX_PIN 40 //2 //Max endstops default to disabled "-1", set to commented value to enable.

 #define Y_STEP_PIN 4 // A6
 #define Y_DIR_PIN 54 // A0
 #define Y_ENABLE_PIN 5
 #define Y_MIN_PIN 41
 #define Y_MAX_PIN 38 //15

 #define Z_STEP_PIN 56 // A2
 #define Z_DIR_PIN 60 // A6
 #define Z_ENABLE_PIN 55 // A1
 #define Z_MIN_PIN 18
 #define Z_MAX_PIN 19

 #define E0_STEP_PIN 35
 #define E0_DIR_PIN 36
 #define E0_ENABLE_PIN 34

 #define E1_STEP_PIN 29
 #define E1_DIR_PIN 39
 #define E1_ENABLE_PIN 28

 #define E2_STEP_PIN 23
 #define E2_DIR_PIN 24
 #define E2_ENABLE_PIN 22

 #define SDPOWER -1
 #define SDSS 53
 #define LED_PIN 13

 #define FAN_PIN 7
 #define FAN2_PIN 6
 #define PS_ON_PIN 12
 #define KILL_PIN -1

 #define HEATER_0_PIN 9 // EXTRUDER 1
 #define HEATER_1_PIN 8 // EXTRUDER 2
 #define HEATER_2_PIN -1

 #if TEMP_SENSOR_0 == -1
   #define TEMP_0_PIN 4 // ANALOG NUMBERING
 #else
   #define TEMP_0_PIN 13 // ANALOG NUMBERING
 #endif


 #if TEMP_SENSOR_1 == -1
   #define TEMP_1_PIN 8 // ANALOG NUMBERING
 #else
   #define TEMP_1_PIN 15 // ANALOG NUMBERING
 #endif

 #define TEMP_2_PIN -1 // ANALOG NUMBERING

 #define HEATER_BED_PIN 10 // BED

 #if TEMP_SENSOR_BED == -1
   #define TEMP_BED_PIN 8 // ANALOG NUMBERING
 #else
   #define TEMP_BED_PIN 14 // ANALOG NUMBERING
 #endif

 #define BEEPER 64


 #define LCD_PINS_RS 14
 #define LCD_PINS_ENABLE 15
 #define LCD_PINS_D4 30
 #define LCD_PINS_D5 31
 #define LCD_PINS_D6 32
 #define LCD_PINS_D7 33


 //buttons are directly attached using keypad
 #define BTN_EN1 61
 #define BTN_EN2 59
 #define BTN_ENC 43 //the click

 #define BLEN_C 2
 #define BLEN_B 1
 #define BLEN_A 0

 #define SDCARDDETECT -1	// Megatronics does not use this port

   //encoder rotation values
 #define encrot0 0
 #define encrot1 2
 #define encrot2 3
 #define encrot3 1

#endif


/****************************************************************************************
* Minitronics v1.0
*
****************************************************************************************/
#if MOTHERBOARD == 702
 #define KNOWN_BOARD 1


 #ifndef __AVR_ATmega1281__
 #error Oops! Make sure you have 'Minitronics ' selected from the 'Tools -> Boards' menu.
 #endif

 #define LARGE_FLASH        true

 #define X_STEP_PIN 48
 #define X_DIR_PIN 47
 #define X_ENABLE_PIN 49
 #define X_MIN_PIN 5
 #define X_MAX_PIN -1 //2 //Max endstops default to disabled "-1", set to commented value to enable.

 #define Y_STEP_PIN 39 // A6
 #define Y_DIR_PIN 40 // A0
 #define Y_ENABLE_PIN 38
 #define Y_MIN_PIN 2
 #define Y_MAX_PIN -1 //15

 #define Z_STEP_PIN 42 // A2
 #define Z_DIR_PIN 43 // A6
 #define Z_ENABLE_PIN 41 // A1
 #define Z_MIN_PIN 6
 #define Z_MAX_PIN -1

 #define E0_STEP_PIN 45
 #define E0_DIR_PIN 44
 #define E0_ENABLE_PIN 27

 #define E1_STEP_PIN 36
 #define E1_DIR_PIN 35
 #define E1_ENABLE_PIN 37

 #define E2_STEP_PIN -1
 #define E2_DIR_PIN -1
 #define E2_ENABLE_PIN -1

 #define SDPOWER -1
 #define SDSS 16
 #define LED_PIN 46

 #define FAN_PIN 9
 #define FAN2_PIN -1
 #define PS_ON_PIN -1
 #define KILL_PIN -1

 #define HEATER_0_PIN 7 // EXTRUDER 1
 #define HEATER_1_PIN 8 // EXTRUDER 2
 #define HEATER_2_PIN -1


 #define TEMP_0_PIN 7 // ANALOG NUMBERING
 #define TEMP_1_PIN 6 // ANALOG NUMBERING
 #define TEMP_2_PIN -1 // ANALOG NUMBERING

 #define HEATER_BED_PIN 3 // BED
 #define TEMP_BED_PIN 6 // ANALOG NUMBERING

 #define BEEPER -1


 #define LCD_PINS_RS -1
 #define LCD_PINS_ENABLE -1
 #define LCD_PINS_D4 -1
 #define LCD_PINS_D5 -1
 #define LCD_PINS_D6 -1
 #define LCD_PINS_D7 -1


 //buttons are directly attached using keypad
 #define BTN_EN1 -1
 #define BTN_EN2 -1
 #define BTN_ENC -1 //the click

 #define BLEN_C 2
 #define BLEN_B 1
 #define BLEN_A 0

 #define SDCARDDETECT -1	// Megatronics does not use this port

   //encoder rotation values
 #define encrot0 0
 #define encrot1 2
 #define encrot2 3
 #define encrot3 1

#endif

/****************************************************************************************
* Cheaptronic v1.0
*
****************************************************************************************/
#if MOTHERBOARD == 2
 #define KNOWN_BOARD 1

 #ifndef __AVR_ATmega2560__
 #error Oops! Make sure you have 'Arduino Mega' selected from the 'Tools -> Boards' menu.
 #endif

 #define LARGE_FLASH        true

 //X motor stepper
 #define X_STEP_PIN 14
 #define X_DIR_PIN 15
 #define X_ENABLE_PIN 24

 //X endstop
 #define X_MIN_PIN 3
 #define X_MAX_PIN -1

 //Y motor stepper
 #define Y_STEP_PIN 35
 #define Y_DIR_PIN 36
 #define Y_ENABLE_PIN 31

 //Y endstop
 #define Y_MIN_PIN 2
 #define Y_MAX_PIN -1

 //Z motor stepper
 #define Z_STEP_PIN 40
 #define Z_DIR_PIN 41
 #define Z_ENABLE_PIN 37

 //Z endstop
 #define Z_MIN_PIN 5
 #define Z_MAX_PIN -1

 //Extruder 0 stepper
 #define E0_STEP_PIN 26
 #define E0_DIR_PIN 28
 #define E0_ENABLE_PIN 25

 //Extruder 1 stepper
 #define E1_STEP_PIN 33
 #define E1_DIR_PIN 34
 #define E1_ENABLE_PIN 30

 #define SDPOWER -1
 #define SDSS -1
 #define LED_PIN -1

 //FAN
 #define FAN_PIN -1

 #define PS_ON_PIN -1
 #define KILL_PIN -1

 #define HEATER_0_PIN 19 // EXTRUDER 1
 #define HEATER_1_PIN 23 // EXTRUDER 2
 //HeatedBad
 #define HEATER_BED_PIN 22
 //Cheaptronic v1.0 hasent EXTRUDER 3
 #define HEATER_2_PIN -1

 //Temperature sensors
 #define TEMP_0_PIN 15
 #define TEMP_1_PIN 14
 #define TEMP_2_PIN -1
 #define TEMP_BED_PIN 13

 //Cheaptronic v1.0 dont support LCD
 #define LCD_PINS_RS -1
 #define LCD_PINS_ENABLE -1
 #define LCD_PINS_D4 -1
 #define LCD_PINS_D5 -1
 #define LCD_PINS_D6 -1
 #define LCD_PINS_D7 -1

 //Cheaptronic v1.0 dont support keypad
 #define BTN_EN1 -1
 #define BTN_EN2 -1
 #define BTN_ENC -1

 #define BLEN_C 2
 #define BLEN_B 1
 #define BLEN_A 0

 //Cheaptronic v1.0 does not use this port
 #define SDCARDDETECT -1

 //encoder rotation values
 #define encrot0 0
 #define encrot1 2
 #define encrot2 3
 #define encrot3 1

#endif



#ifndef KNOWN_BOARD
#error Unknown MOTHERBOARD value in configuration.h
#endif

//List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!
#define _E0_PINS E0_STEP_PIN, E0_DIR_PIN, E0_ENABLE_PIN, HEATER_0_PIN,
#if EXTRUDERS > 1
  #define _E1_PINS E1_STEP_PIN, E1_DIR_PIN, E1_ENABLE_PIN, HEATER_1_PIN,
#else
  #define _E1_PINS
#endif
#if EXTRUDERS > 2
  #define _E2_PINS E2_STEP_PIN, E2_DIR_PIN, E2_ENABLE_PIN, HEATER_2_PIN,
#else
  #define _E2_PINS
#endif

#ifdef X_STOP_PIN
  #if X_HOME_DIR < 0
    #define X_MIN_PIN X_STOP_PIN
    #define X_MAX_PIN -1
  #else
    #define X_MIN_PIN -1
    #define X_MAX_PIN X_STOP_PIN
  #endif
#endif

#ifdef Y_STOP_PIN
  #if Y_HOME_DIR < 0
    #define Y_MIN_PIN Y_STOP_PIN
    #define Y_MAX_PIN -1
  #else
    #define Y_MIN_PIN -1
    #define Y_MAX_PIN Y_STOP_PIN
  #endif
#endif

#ifdef Z_STOP_PIN
  #if Z_HOME_DIR < 0
    #define Z_MIN_PIN Z_STOP_PIN
    #define Z_MAX_PIN -1
  #else
    #define Z_MIN_PIN -1
    #define Z_MAX_PIN Z_STOP_PIN
  #endif
#endif

#ifdef DISABLE_MAX_ENDSTOPS
#define X_MAX_PIN          -1
#define Y_MAX_PIN          -1
#define Z_MAX_PIN          -1
#endif

#ifdef DISABLE_MIN_ENDSTOPS
#define X_MIN_PIN          -1
#define Y_MIN_PIN          -1
#define Z_MIN_PIN          -1
#endif

#define SENSITIVE_PINS {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, PS_ON_PIN, \
                        HEATER_BED_PIN, FAN_PIN,                  \
                        _E0_PINS _E1_PINS _E2_PINS             \
                        analogInputToDigitalPin(TEMP_0_PIN), analogInputToDigitalPin(TEMP_1_PIN), analogInputToDigitalPin(TEMP_2_PIN), analogInputToDigitalPin(TEMP_BED_PIN) }
#endif
