/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_fuhu_galileocv_MyMotionTracer */

#ifndef _Included_com_fuhu_galileocv_MyMotionTracer
#define _Included_com_fuhu_galileocv_MyMotionTracer
#ifdef __cplusplus
extern "C" {
#endif

/*
 * Class:     org_opencv_samples_fd_MyMotionTracer
 * Method:    nativeCreateObject
 * Signature: (Ljava/lang/String;F)J
 */
JNIEXPORT jlong JNICALL Java_com_fuhu_galileocv_MyMotionTracer_nativeCreateObject
        (JNIEnv *, jclass, jstring, jint);

/*
 * Class:     org_opencv_samples_fd_MyMotionTracer
 * Method:    nativeDestroyObject
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_fuhu_galileocv_MyMotionTracer_nativeDestroyObject
        (JNIEnv *, jclass, jlong);

/*
 * Class:     org_opencv_samples_fd_MyMotionTracer
 * Method:    nativeStart
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_fuhu_galileocv_MyMotionTracer_nativeStart
        (JNIEnv *, jclass, jlong);

/*
 * Class:     org_opencv_samples_fd_MyMotionTracer
 * Method:    nativeStop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_fuhu_galileocv_MyMotionTracer_nativeStop
        (JNIEnv *, jclass, jlong);

/*
 * Class:     org_opencv_samples_fd_MyMotionTracer
 * Method:    nativeDetect
 * Signature: (JJJ)V
 */
JNIEXPORT void JNICALL Java_com_fuhu_galileocv_MyMotionTracer_nativeDetect
        (JNIEnv *, jclass, jlong, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
