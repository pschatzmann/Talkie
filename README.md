
# Talkie: Platform Independent Speech library for Arduino

I converted the original [Talkie TTS library](https://github.com/going-digital/Talkie) into a platform independed header only library by removing all platform dependent code. I am just generating __PCM data__ for an indicated __Arduino Print__ output.

In the constructor you can define, how many channels to generate. The bits per sample
is 16 and the sample rate is 8000 samples per second.

Talkie is simulating the Texas Instruments LPC Speech Chip TMS5220. A good explanation of the TMS5220 operation and the LPC frame format can be found [here](https://github.com/mamedev/mame/blob/master/src/devices/sound/tms5220.txt).

## Output Libraries

You can e.g. write the data directly to a File or to I2S if your processor is supporting a corresponding API. 

You have most options however by using the [Arduino Audio Tools](https://github.com/pschatzmann/arduino-audio-tools), where you can reprocess the audio data or output it via different means.

## Installation

You can download the library as zip and call include Library -> zip library. Or you can git clone this project into the Arduino libraries folder e.g. with

```
cd  ~/Documents/Arduino/libraries
git clone https://github.com/pschatzmann/talkie.git
```

I recommend to use git because you can easily update to the latest version just by executing the git pull command in the project folder. If you want to use the library on other patforms, you can find further information in the Wiki.



