/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_SstFileReaderIterator */

#ifndef _Included_org_rocksdb_SstFileReaderIterator
#define _Included_org_rocksdb_SstFileReaderIterator
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    isValid0
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_rocksdb_SstFileReaderIterator_isValid0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekToFirst0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_seekToFirst0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekToLast0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_seekToLast0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    next0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_next0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    prev0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_prev0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    refresh0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_refresh0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seek0
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_seek0
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekForPrev0
 * Signature: (J[BI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_seekForPrev0
  (JNIEnv *, jobject, jlong, jbyteArray, jint);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    status0
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_status0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_seekDirect0
  (JNIEnv *, jobject, jlong, jobject, jint, jint);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekForPrevDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_seekForPrevDirect0
  (JNIEnv *, jobject, jlong, jobject, jint, jint);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekByteArray0
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_seekByteArray0
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    seekForPrevByteArray0
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_SstFileReaderIterator_seekForPrevByteArray0
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    key0
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_SstFileReaderIterator_key0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    value0
 * Signature: (J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_rocksdb_SstFileReaderIterator_value0
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    keyDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_SstFileReaderIterator_keyDirect0
  (JNIEnv *, jobject, jlong, jobject, jint, jint);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    keyByteArray0
 * Signature: (J[BII)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_SstFileReaderIterator_keyByteArray0
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    valueDirect0
 * Signature: (JLjava/nio/ByteBuffer;II)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_SstFileReaderIterator_valueDirect0
  (JNIEnv *, jobject, jlong, jobject, jint, jint);

/*
 * Class:     org_rocksdb_SstFileReaderIterator
 * Method:    valueByteArray0
 * Signature: (J[BII)I
 */
JNIEXPORT jint JNICALL Java_org_rocksdb_SstFileReaderIterator_valueByteArray0
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

#ifdef __cplusplus
}
#endif
#endif