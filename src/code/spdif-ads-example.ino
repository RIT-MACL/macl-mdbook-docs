#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// ADS1298 (an SPI analog front-end):

// GUItool: begin automatically generated code
AsyncAudioInputSPDIF3    spdif_async1;   //xy=100.19999694824219,278.20001220703125
AudioOutputUSB           usb1;           //xy=466.1999969482422,260.1999969482422
AudioConnection          patchCord1(spdif_async1, 0, usb1, 0);
AudioConnection          patchCord2(spdif_async1, 1, usb1, 1);
// GUItool: end automatically generated code

