#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_cn_cfanr_jnisample_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++, see the log for other test.";
    return env->NewStringUTF(hello.c_str());
}

//std::string 是c++标准库里面其中一个，封装了对字符串的操作
//http://blog.csdn.net/u010023457/article/details/41855007