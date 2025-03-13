#include <jni.h>
#include "react-native-music-utils.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_musicutils_MusicUtilsModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return musicutils::multiply(a, b);
}
