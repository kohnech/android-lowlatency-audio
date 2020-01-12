
#ifndef LOWLATENCYAUDIO_AUDIOENGINE_H
#define LOWLATENCYAUDIO_AUDIOENGINE_H

#include <oboe/Oboe.h>
#include "Oscillator.h"

class AudioEngine : public oboe::AudioStreamCallback{
public:
    void start();
    void tap(bool b);

    // Callback
    oboe::DataCallbackResult
    onAudioReady(oboe::AudioStream *oboeStream, void *audioData, int32_t numFrames) override;

    oboe::AudioStream* stream;
    Oscillator oscillator;
};


#endif //LOWLATENCYAUDIO_AUDIOENGINE_H
