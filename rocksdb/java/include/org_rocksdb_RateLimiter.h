/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_RateLimiter */

#ifndef _Included_org_rocksdb_RateLimiter
#define _Included_org_rocksdb_RateLimiter
#ifdef __cplusplus
extern "C" {
#endif
#undef org_rocksdb_RateLimiter_DEFAULT_REFILL_PERIOD_MICROS
#define org_rocksdb_RateLimiter_DEFAULT_REFILL_PERIOD_MICROS 100000LL
#undef org_rocksdb_RateLimiter_DEFAULT_FAIRNESS
#define org_rocksdb_RateLimiter_DEFAULT_FAIRNESS 10L
#undef org_rocksdb_RateLimiter_DEFAULT_AUTOTUNE
#define org_rocksdb_RateLimiter_DEFAULT_AUTOTUNE 0L
/*
 * Class:     org_rocksdb_RateLimiter
 * Method:    newRateLimiterHandle
 * Signature: (JJIBZ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RateLimiter_newRateLimiterHandle
  (JNIEnv *, jclass, jlong, jlong, jint, jbyte, jboolean);

/*
 * Class:     org_rocksdb_RateLimiter
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RateLimiter_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RateLimiter
 * Method:    setBytesPerSecond
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RateLimiter_setBytesPerSecond
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RateLimiter
 * Method:    getBytesPerSecond
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RateLimiter_getBytesPerSecond
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RateLimiter
 * Method:    request
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_RateLimiter_request
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_RateLimiter
 * Method:    getSingleBurstBytes
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RateLimiter_getSingleBurstBytes
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RateLimiter
 * Method:    getTotalBytesThrough
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RateLimiter_getTotalBytesThrough
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_RateLimiter
 * Method:    getTotalRequests
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_RateLimiter_getTotalRequests
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif