
#include "AudioEngine.h"

#include <oboe/Oboe.h>
#include <cstdint>

void AudioEngine::start() {
    oboe::AudioStreamBuilder b;
    b.setFormat(oboe::AudioFormat::Float);
    b.setChannelCount(1);
    b.setPerformanceMode(oboe::PerformanceMode::LowLatency); // This is important to achieve Low Latency!
    b.setSharingMode(oboe::SharingMode::Exclusive); // Do not mix with other audio on the system!

    b.setCallback(this);

    b.openStream(&stream);
    oscillator.setAmplitude(0.5);
    oscillator.setFrequency(50.0);
    oscillator.setSampleRate(stream->getSampleRate());
    stream->setBufferSizeInFrames(stream->getFramesPerBurst() * 2);
    stream->requestStart();
}

oboe::DataCallbackResult
AudioEngine::onAudioReady(oboe::AudioStream *oboeStream, void *audioData, int32_t numFrames) {
    oscillator.renderAudio(static_cast<float*>(audioData), numFrames);
    return oboe::DataCallbackResult::Continue;
}

void AudioEngine::tap(bool b) {
    oscillator.setWaveOn(b);
}