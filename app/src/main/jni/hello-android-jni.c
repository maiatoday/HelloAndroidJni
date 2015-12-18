#include <jni.h>

JNIEXPORT jstring JNICALL
Java_net_maiatoday_helloandroidjni_MainActivity_getMsgFromJni(JNIEnv *env, jobject instance) {


    return (*env)->NewStringUTF(env, "Hello From Jni");
}

JNIEXPORT jstring JNICALL
Java_net_maiatoday_helloandroidjni_MainActivity_getMsgFromJni2(JNIEnv *env, jobject instance) {

    // TODO


    return (*env)->NewStringUTF(env, "Hello From Jni2");
}