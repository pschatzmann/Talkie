

/***
 * @brief Standard Arduino integration: we can just define the output to which the
 * binary data will be written.
 * You need to install:
 * - https://github.com/pschatzmann/arduino-audio-tools
 * - https://github.com/pschatzmann/arduino-audio-driver
 * @author Phil Schatzmann
 */
#include "AudioTools.h" // https://github.com/pschatzmann/arduino-audio-tools
#include "TalkiePCM.h"
#include "Vocab_US_Large.h"

const int channels = 2;
CsvOutput<int16_t> out(Serial, channels);
TalkiePCM voice(out, channels);

void setup() {
  Serial.begin(115200);
  Serial.println("Talking...");
}

void loop() {
  voice.say(sp2_DANGER);
  voice.say(sp2_DANGER);
  voice.say(sp2_RED);
  voice.say(sp2_ALERT);
  voice.say(sp2_MOTOR);
  voice.say(sp2_IS);
  voice.say(sp2_ON);
  voice.say(sp2_FIRE);
  delay(1000);
}