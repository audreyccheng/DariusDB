/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_LRUCache */

#ifndef _Included_org_rocksdb_LRUCache
#define _Included_org_rocksdb_LRUCache
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_LRUCache
 * Method:    newLRUCache
 * Signature: (JIZDD)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_LRUCache_newLRUCache
  (JNIEnv *, jclass, jlong, jint, jboolean, jdouble, jdouble);

/*
 * Class:     org_rocksdb_LRUCache
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_LRUCache_disposeInternal
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
