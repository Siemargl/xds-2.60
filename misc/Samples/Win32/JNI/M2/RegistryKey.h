/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class RegistryKey */

#ifndef _Included_RegistryKey
#define _Included_RegistryKey
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: HKEY_CLASSES_ROOT */
/* Inaccessible static: HKEY_CURRENT_USER */
/* Inaccessible static: HKEY_LOCAL_MACHINE */
/* Inaccessible static: HKEY_USERS */
/* Inaccessible static: HKEY_PERFORMANCE_DATA */
/* Inaccessible static: HKEY_CURRENT_CONFIG */
/* Inaccessible static: HKEY_DYN_DATA */
/* Inaccessible static: REG_NONE */
/* Inaccessible static: REG_SZ */
/* Inaccessible static: REG_EXPAND_SZ */
/* Inaccessible static: REG_BINARY */
/* Inaccessible static: REG_DWORD_LITTLE_ENDIAN */
/* Inaccessible static: REG_DWORD_BIG_ENDIAN */
/* Inaccessible static: REG_LINK */
/* Inaccessible static: REG_MULTI_SZ */
/* Inaccessible static: REG_RESOURCE_LIST */
/* Inaccessible static: REG_FULL_RESOURCE_DESCRIPTOR */
/* Inaccessible static: REG_RESOURCE_REQUIREMENTS_LIST */
/* Inaccessible static: REG_DWORD */
/*
 * Class:     RegistryKey
 * Method:    RegCloseKey
 * Signature: (LHKEY;)V
 */
JNIEXPORT void JNICALL Java_RegistryKey_RegCloseKey
  (JNIEnv *, jclass, jobject);

/*
 * Class:     RegistryKey
 * Method:    RegCreateKey
 * Signature: (LHKEY;Ljava/lang/String;LHKEY;)I
 */
JNIEXPORT jint JNICALL Java_RegistryKey_RegCreateKey
  (JNIEnv *, jclass, jobject, jstring, jobject);

/*
 * Class:     RegistryKey
 * Method:    RegGetValue
 * Signature: (LHKEY;Ljava/lang/String;LREG_TYPE;LDATA;)V
 */
JNIEXPORT void JNICALL Java_RegistryKey_RegGetValue
  (JNIEnv *, jclass, jobject, jstring, jobject, jobject);

/*
 * Class:     RegistryKey
 * Method:    RegOpenKey
 * Signature: (LHKEY;Ljava/lang/String;LHKEY;)I
 */
JNIEXPORT jint JNICALL Java_RegistryKey_RegOpenKey
  (JNIEnv *, jclass, jobject, jstring, jobject);

/*
 * Class:     RegistryKey
 * Method:    RegSetValue
 * Signature: (LHKEY;Ljava/lang/String;LREG_TYPE;LDATA;)V
 */
JNIEXPORT void JNICALL Java_RegistryKey_RegSetValue
  (JNIEnv *, jclass, jobject, jstring, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
