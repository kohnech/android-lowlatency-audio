# Android Low Latency Audio

This repo is the example made by [Android Dev Summit](https://www.youtube.com/watch?v=8vOf_fDtur4)
using the oboe [library](https://github.com/google/oboe) demonstrating how low-latency audio can be achieved.

## Usage
Clone this repo with the oboe dependency (git submodule) using this command:

    git clone git clone --recurse-submodules https://github.com/kohnech/android-lowlatency-audio.git

and open it in android studio. Run it with AVD or an Android device and by tapping on the app screen you will hear a 50 Hz square wave with low latency output.

## Resources
* [Low-Latency Playback](https://stackoverflow.com/questions/14842803/low-latency-audio-playback-on-android?rq=1)
* [Oboe hello-world](https://github.com/google/oboe/tree/master/samples/hello-oboe)

## TODOs:
Add suport for audio input (mic) echoing to output.