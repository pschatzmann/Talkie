

#include "AudioTools.h"
#include "Talkie.h"
#include "Vocab_US_Large.h"

CsvOutput<int32_t> out(Serial, 2);
Talkie voice(out, 2);

void setup() {
  Serial.begin(115200);
  Serial.println("Starting...");
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