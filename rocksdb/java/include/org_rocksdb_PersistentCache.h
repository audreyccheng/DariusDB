/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_PersistentCache */

#ifndef _Included_org_rocksdb_PersistentCache
#define _Included_org_rocksdb_PersistentCache
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_rocksdb_PersistentCache
 * Method:    newPersistentCache
 * Signature: (JLjava/lang/String;JJZ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_PersistentCache_newPersistentCache
  (JNIEnv *, jclass, jlong, jstring, jlong, jlong, jboolean);

/*
 * Class:     org_rocksdb_PersistentCache
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_PersistentCache_disposeInternal
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
