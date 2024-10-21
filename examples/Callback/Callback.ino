

/***
 * @brief Output of samples via callback method
 *
 * @author Phil Schatzmann
 */
#include "TalkiePCM.h"
#include "Vocab_US_Large.h"

TalkiePCM voice;

// output data as csv
void csvCallback(int16_t* data, int len) {
  for (int j = 0; j < len; j++) {
    if (j > 0) Serial.print(", ");
    Serial.print(data[j]);
  }
  Serial.println();
}

void setup() {
  Serial.begin(115200);

  voice.setDataCallback(csvCallback);
  voice.setChannels(2);

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