
# Talkie: Platform Independent Speech library 

I converted the original [Talkie TTS library](https://github.com/going-digital/Talkie) into a platform independed header only library by removing all platform dependent code. I am just generating __PCM data__ for an indicated __Arduino Print__ output (for Arduino) or platform independed callback.

In the constructor you can define, how many channels to generate. The bits per sample
is 16 and the sample rate is 8000 samples per second.

It is a software implementation of the Texas Instruments speech synthesis architecture (Linear Predictive Coding) from the late 1970s / early 1980s, as used on several popular applications:

- Texas Instruments Speak & Spell family of educational products
- Texas Instruments TI-99/4A Speech System expansion
- Acorn BBC Micro Speech Synthesiser expansion
- Atari arcade games (eg. Star Wars series, Indiana Jones, Gauntlet)
- Apple Echo 2
- IBM PS/2 Speech Adapter

## Words

Talkie comes with over 1000 words of speech data that can be included in your projects. Most words only take a fraction of a KB, so you can add plenty.

- [Vocab_AstroBlaster](src/Vocab_AstroBlaster.h)
- [Vocab_Soundbites](src/Vocab_Soundbites.h)
- [Vocab_Special](src/Vocab_Special.h)
- [Vocab_Toms_Diner](src/Vocab_Toms_Diner.h)
- [Vocab_US_Acorn](src/Vocab_US_Acorn.h)
- [Vocab_US_Clock](src/Vocab_US_Clock.h)
- [Vocab_US_Large](src/Vocab_US_Large.h)
- [Vocab_US_TI99](src/Vocab_US_TI99.h)

## Output Libraries

You can e.g. write the data directly to a File or to I2S if your processor is supporting a corresponding API. 

You have most options however by using the [Arduino Audio Tools](https://github.com/pschatzmann/arduino-audio-tools), where you can reprocess the audio data or output it via different means.

## Class Documentaion

- [Talkie](https://pschatzmann.github.io/TalkiePCM/html/classTalkiePCM.html)


## Installation

You can download the library as zip and call include Library -> zip library. Or you can git clone this project into the Arduino libraries folder e.g. with

```
cd  ~/Documents/Arduino/libraries
git clone https://github.com/pschatzmann/TalkiePCM.git
```

I recommend to use git because you can easily update to the latest version just by executing the git pull command in the project folder. If you want to use the library on other patforms, you can find further information in the Wiki.



