#include <jni.h>
#include <string>

#include "AudioEngine.h"

AudioEngine engine;

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_lowlatencyaudio_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */
        )
{
    std::string hello = "Hello from C++ LowLatencyAudio\nusing oboe!";
    return env->NewStringUTF(hello.c_str());
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_lowlatencyaudio_MainActivity_startEngine(
        JNIEnv *env,
        jobject /* this */
        )
{

    engine.start();
    // TODO
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_lowlatencyaudio_MainActivity_tap(
        JNIEnv *env,
        jobject /* this */,
        jboolean b
        )
{
    engine.tap(b);
}

extern "C" JNIEXPORT void JNICALL
Java_com_example_lowlatencyaudio_MainActivity_setFrequency(
        JNIEnv *env,
        jobject /* this */,
        jfloat frequency
        )
{
    // TODO
}
