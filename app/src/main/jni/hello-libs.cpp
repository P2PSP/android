
#include "peer_dbs.h"
#include <jni.h>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_hellolibs_MainActivity_initMethod(JNIEnv *env, jobject instance) {
    // TODO

   // ip::udp::endpoint node&;
    ip::tcp::endpoint local(
            ip::address::from_string("127.0.0.1"),
            123
    );
    SayHello(local);
    return env->NewStringUTF("Android Peer Intialised");

}