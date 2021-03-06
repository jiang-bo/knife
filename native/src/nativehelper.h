
#include <jni.h>
#ifndef _Included_com_chenjw_knife_agent_util_NativeHelper
#define _Included_com_chenjw_knife_agent_util_NativeHelper
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    findInstancesByClass
 * Signature: (Ljava/lang/Class;)[Ljava/lang/Object;
 */
JNIEXPORT jobjectArray JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_findInstancesByClass0
  (JNIEnv *, jclass, jclass);


/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    findReferrerByObject0
 * Signature: (Ljava/lang/Object;)[Ljava/lang/Object;
 */
JNIEXPORT jobjectArray JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_findReferrerByObject0
  (JNIEnv *, jclass, jobject);



/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getFieldValue0
  (JNIEnv *, jclass, jobject, jclass, jstring, jclass);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    startClassFileLoadHook0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_startClassFileLoadHook0
  (JNIEnv *, jclass);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    stopClassFileLoadHook0
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_stopClassFileLoadHook0
  (JNIEnv *, jclass);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    retransformClasses
 * Signature: ([Ljava/lang/Class;)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_retransformClasses0
  (JNIEnv *, jclass, jobjectArray);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    redefineClass0
 * Signature: (Ljava/lang/Class;[B)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_redefineClass0
  (JNIEnv *, jclass, jclass, jbyteArray);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setObjectFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setObjectFieldValue0
  (JNIEnv *, jclass, jobject, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setBooleanFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;Z)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setBooleanFieldValue0
  (JNIEnv *, jclass, jobject, jobject, jboolean);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setByteFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;B)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setByteFieldValue0
  (JNIEnv *, jclass, jobject, jobject, jbyte);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setCharFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;C)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setCharFieldValue0
  (JNIEnv *, jclass, jobject, jobject, jchar);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setShortFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;S)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setShortFieldValue0
  (JNIEnv *, jclass, jobject, jobject, jshort);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setIntFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;I)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setIntFieldValue0
  (JNIEnv *, jclass, jobject, jobject, jint);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setLongFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;J)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setLongFieldValue0
  (JNIEnv *, jclass, jobject, jobject, jlong);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setFloatFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;F)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setFloatFieldValue0
  (JNIEnv *, jclass, jobject, jobject, jfloat);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setDoubleFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;D)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setDoubleFieldValue0
  (JNIEnv *, jclass, jobject, jobject, jdouble);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setStaticObjectFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setStaticObjectFieldValue0
  (JNIEnv *, jclass, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setStaticBooleanFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;Z)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setStaticBooleanFieldValue0
  (JNIEnv *, jclass, jclass, jobject, jboolean);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setStaticByteFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;B)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setStaticByteFieldValue0
  (JNIEnv *, jclass, jclass, jobject, jbyte);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setStaticCharFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;C)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setStaticCharFieldValue0
  (JNIEnv *, jclass, jclass, jobject, jchar);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setStaticShortFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;S)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setStaticShortFieldValue0
  (JNIEnv *, jclass, jclass, jobject, jshort);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setStaticIntFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;I)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setStaticIntFieldValue0
  (JNIEnv *, jclass, jclass, jobject, jint);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setStaticLongFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;J)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setStaticLongFieldValue0
  (JNIEnv *, jclass, jclass, jobject, jlong);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setStaticFloatFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;F)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setStaticFloatFieldValue0
  (JNIEnv *, jclass, jclass, jobject, jfloat);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    setStaticDoubleFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;D)V
 */
JNIEXPORT void JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_setStaticDoubleFieldValue0
  (JNIEnv *, jclass, jclass, jobject, jdouble);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getObjectFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getObjectFieldValue0
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getBooleanFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getBooleanFieldValue0
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getByteFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;)B
 */
JNIEXPORT jbyte JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getByteFieldValue0
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getCharFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;)C
 */
JNIEXPORT jchar JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getCharFieldValue0
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getShortFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;)S
 */
JNIEXPORT jshort JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getShortFieldValue0
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getIntFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;)I
 */
JNIEXPORT jint JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getIntFieldValue0
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getLongFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;)J
 */
JNIEXPORT jlong JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getLongFieldValue0
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getFloatFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;)F
 */
JNIEXPORT jfloat JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getFloatFieldValue0
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getDoubleFieldValue0
 * Signature: (Ljava/lang/Object;Ljava/lang/reflect/Field;)D
 */
JNIEXPORT jdouble JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getDoubleFieldValue0
  (JNIEnv *, jclass, jobject, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getStaticObjectFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getStaticObjectFieldValue0
  (JNIEnv *, jclass, jclass, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getStaticBooleanFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getStaticBooleanFieldValue0
  (JNIEnv *, jclass, jclass, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getStaticByteFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;)B
 */
JNIEXPORT jbyte JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getStaticByteFieldValue0
  (JNIEnv *, jclass, jclass, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getStaticCharFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;)C
 */
JNIEXPORT jchar JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getStaticCharFieldValue0
  (JNIEnv *, jclass, jclass, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getStaticShortFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;)S
 */
JNIEXPORT jshort JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getStaticShortFieldValue0
  (JNIEnv *, jclass, jclass, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getStaticIntFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;)I
 */
JNIEXPORT jint JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getStaticIntFieldValue0
  (JNIEnv *, jclass, jclass, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getStaticLongFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;)J
 */
JNIEXPORT jlong JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getStaticLongFieldValue0
  (JNIEnv *, jclass, jclass, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getStaticFloatFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;)F
 */
JNIEXPORT jfloat JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getStaticFloatFieldValue0
  (JNIEnv *, jclass, jclass, jobject);

/*
 * Class:     com_chenjw_knife_agent_util_NativeHelper
 * Method:    getStaticDoubleFieldValue0
 * Signature: (Ljava/lang/Class;Ljava/lang/reflect/Field;)D
 */
JNIEXPORT jdouble JNICALL Java_com_chenjw_knife_agent_util_NativeHelper_getStaticDoubleFieldValue0
  (JNIEnv *, jclass, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif

