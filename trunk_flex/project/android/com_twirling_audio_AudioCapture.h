/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_twirling_audio_AudioCapture */

#ifndef _Included_com_twirling_audio_AudioCapture
#define _Included_com_twirling_audio_AudioCapture
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    micArrayInit
 * Signature: (IIIIFII)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_micArrayInit
  (JNIEnv *, jobject, jint, jint, jint, jint, jfloat, jint, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    micArrayProcess
 * Signature: (J[F[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_micArrayProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    micArrayRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_micArrayRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    micArraySetStatus
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_micArraySetStatus
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    micArraySetAec
 * Signature: (JZFZFZFFF)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_micArraySetAec
  (JNIEnv *, jobject, jlong, jboolean, jfloat, jboolean, jfloat, jboolean, jfloat, jfloat, jfloat);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    micArraySetBeamforming
 * Signature: (JIFFFFFI)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_micArraySetBeamforming
  (JNIEnv *, jobject, jlong, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    micArrayGetCurrentDoa
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_com_twirling_audio_AudioCapture_micArrayGetCurrentDoa
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    micArraySetTargetDoa
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_micArraySetTargetDoa
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    captureInit
 * Signature: (IIIIZ)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_captureInit
  (JNIEnv *, jobject, jint, jint, jint, jint, jboolean);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    captureSet
 * Signature: (JZFI)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_captureSet
  (JNIEnv *, jobject, jlong, jboolean, jfloat, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    captureProcess
 * Signature: (JFFF[F[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_captureProcess
  (JNIEnv *, jobject, jlong, jfloat, jfloat, jfloat, jfloatArray, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    captureRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_captureRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    captureStereoInit
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_captureStereoInit
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    captureStereoSet
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_captureStereoSet
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    captureStereoProcess
 * Signature: (J[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_captureStereoProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    captureStereoRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_captureStereoRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    vadInit
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_vadInit
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    vadProcess
 * Signature: (J[F)F
 */
JNIEXPORT jfloat JNICALL Java_com_twirling_audio_AudioCapture_vadProcess
  (JNIEnv *, jobject, jlong, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    vadGetState
 * Signature: (J[F)I
 */
JNIEXPORT jint JNICALL Java_com_twirling_audio_AudioCapture_vadGetState
  (JNIEnv *, jobject, jlong, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    vadRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_vadRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    doaInit
 * Signature: (IIIIFZ)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_doaInit
  (JNIEnv *, jobject, jint, jint, jint, jint, jfloat, jboolean);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    doaSet
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_doaSet
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    doaProcess
 * Signature: (J[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_doaProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    doaRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_doaRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    beamformingInit
 * Signature: (IIIIFZ)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_beamformingInit
  (JNIEnv *, jobject, jint, jint, jint, jint, jfloat, jboolean);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    beamformingSet
 * Signature: (JIFFFFFI)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_beamformingSet
  (JNIEnv *, jobject, jlong, jint, jfloat, jfloat, jfloat, jfloat, jfloat, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    beamformingProcess
 * Signature: (J[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_beamformingProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    beamformingRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_beamformingRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    ansInit
 * Signature: (IIIFZ)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_ansInit
  (JNIEnv *, jobject, jint, jint, jint, jfloat, jboolean);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    ansSet
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_ansSet
  (JNIEnv *, jobject, jlong, jfloat);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    ansProcess
 * Signature: (J[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_ansProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    ansRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_ansRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    eqInit
 * Signature: (IIIZ)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_eqInit
  (JNIEnv *, jobject, jint, jint, jint, jboolean);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    eqProcess
 * Signature: (J[F[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_eqProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    eqRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_eqRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    aecInit
 * Signature: (IIIIIIZ)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_aecInit
  (JNIEnv *, jobject, jint, jint, jint, jint, jint, jint, jboolean);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    aecSet
 * Signature: (JZFZFZFFF)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_aecSet
  (JNIEnv *, jobject, jlong, jboolean, jfloat, jboolean, jfloat, jboolean, jfloat, jfloat, jfloat);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    aecProcess
 * Signature: (J[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_aecProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    aecRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_aecRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    resamplerInit
 * Signature: (III)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_resamplerInit
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    resamplerSet
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_resamplerSet
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    resamplerProcess
 * Signature: (J[F[FIII)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_resamplerProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray, jint, jint, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    resamplerRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_resamplerRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    agcInit
 * Signature: (IIIF)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_agcInit
  (JNIEnv *, jobject, jint, jint, jint, jfloat);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    agcSet
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_agcSet
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    agcProcess
 * Signature: (J[F[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_agcProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    agcRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_agcRelease
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    bssInit
 * Signature: (IIIZ)J
 */
JNIEXPORT jlong JNICALL Java_com_twirling_audio_AudioCapture_bssInit
  (JNIEnv *, jobject, jint, jint, jint, jboolean);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    bssSet
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_bssSet
  (JNIEnv *, jobject, jlong, jint);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    bssProcess
 * Signature: (J[F[F)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_bssProcess
  (JNIEnv *, jobject, jlong, jfloatArray, jfloatArray);

/*
 * Class:     com_twirling_audio_AudioCapture
 * Method:    bssRelease
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_twirling_audio_AudioCapture_bssRelease
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
