/***
 * @brief Standard Arduino integration: We use an AudioKit as output device
 * You need to install:
 * - https://github.com/pschatzmann/arduino-audio-tools
 * @author Phil Schatzmann
 */
#include "AudioTools.h"
#include "TalkiePCM.h"
#include "Vocab_US_Large.h"

const AudioInfo info(8000, 2, 16);
I2SStream out;  // Audio sink
TalkiePCM voice(out, info.channels);

void setup() {
  Serial.begin(115200);
  AudioLogger::instance().begin(Serial, AudioLogger::Info);
  // setup AudioKit
  auto cfg = out.defaultConfig();
  cfg.copyFrom(info);
  out.begin(cfg);
  
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
  voice.silence(1000);
}