/***
 * @brief Standard Arduino integration: we can can use Serial as output, but we need to
 * make sure that the data is converted to text.
 *
 * @author Phil Schatzmann
 */

#include "TalkiePCM.h"
#include "Vocab_US_Large.h"

const int channels = 2;
TalkiePCM voice(Serial, channels);

void setup() {
  Serial.begin(115200);
  voice.setOutputAsText(true);
  // generate numbers as text (instead of the default binary output)
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