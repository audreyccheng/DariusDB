/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_rocksdb_TransactionDB */

#ifndef _Included_org_rocksdb_TransactionDB
#define _Included_org_rocksdb_TransactionDB
#ifdef __cplusplus
extern "C" {
#endif
#undef org_rocksdb_TransactionDB_NOT_FOUND
#define org_rocksdb_TransactionDB_NOT_FOUND -1L
/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    disposeInternal
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TransactionDB_disposeInternal
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    open
 * Signature: (JJLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDB_open__JJLjava_lang_String_2
  (JNIEnv *, jclass, jlong, jlong, jstring);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    open
 * Signature: (JJLjava/lang/String;[[B[J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_TransactionDB_open__JJLjava_lang_String_2_3_3B_3J
  (JNIEnv *, jclass, jlong, jlong, jstring, jobjectArray, jlongArray);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    closeDatabase
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TransactionDB_closeDatabase
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    beginTransaction
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDB_beginTransaction__JJ
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    beginTransaction
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDB_beginTransaction__JJJ
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    beginTransaction_withOld
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDB_beginTransaction_1withOld__JJJ
  (JNIEnv *, jobject, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    beginTransaction_withOld
 * Signature: (JJJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDB_beginTransaction_1withOld__JJJJ
  (JNIEnv *, jobject, jlong, jlong, jlong, jlong);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    getTransactionByName
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_rocksdb_TransactionDB_getTransactionByName
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    getAllPreparedTransactions
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_rocksdb_TransactionDB_getAllPreparedTransactions
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    getLockStatusData
 * Signature: (J)Ljava/util/Map;
 */
JNIEXPORT jobject JNICALL Java_org_rocksdb_TransactionDB_getLockStatusData
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    getDeadlockInfoBuffer
 * Signature: (J)[Lorg/rocksdb/TransactionDB/DeadlockPath;
 */
JNIEXPORT jobjectArray JNICALL Java_org_rocksdb_TransactionDB_getDeadlockInfoBuffer
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_rocksdb_TransactionDB
 * Method:    setDeadlockInfoBufferSize
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_org_rocksdb_TransactionDB_setDeadlockInfoBufferSize
  (JNIEnv *, jobject, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
