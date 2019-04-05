/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.3.6
 */
#ifndef __UTILS__
#define __UTILS__

#define NAPI_EXPERIMENTAL
#include <napi.h>
#include "source.h"

#define VULKAN_ASSERT(func) { VkResult res = func; TRAP(res >= VK_SUCCESS); }

inline std::string getV8ValueDetails(Napi::Value value) {
  return value.ToString().Utf8Value();
};

template<typename T> inline std::vector<T> createArrayOfV8Numbers(Napi::Value value) {
  Napi::Array array = value.As<Napi::Array>();
  std::vector<T> data(array.Length());
  for (unsigned int ii = 0; ii < array.Length(); ++ii) {
    Napi::Value item = array.Get(ii);
    T num = static_cast<T>(item.As<Napi::Number>().DoubleValue());
    data[ii] = num;
  };
  return data;
};

inline char* copyV8String(Napi::Value value) {
  std::string utf8 = value.ToString().Utf8Value();
  int len = utf8.length() + 1;
  char *str = new char[len];
  strncpy(str, utf8.c_str(), len);
  return str;
};

#ifdef _WIN32
inline wchar_t* s2wcs(const std::string& s) {
  int len;
  int slength = (int)s.length() + 1;
  len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0); 
  wchar_t* buf = new wchar_t[len];
  MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
  return buf;
};
#endif

template<typename T> inline T* getTypedArrayData(Napi::Value value, int *len = nullptr) {
  T *data = nullptr;
  if (len) *len = 0;
  if (!value.IsTypedArray()) {
    Napi::Env env = value.Env();
    Napi::Error::New(env, "Argument must be an ArrayBufferView").ThrowAsJavaScriptException();
    return data;
  }
  Napi::TypedArray arr = value.As<Napi::TypedArray>();
  Napi::ArrayBuffer buffer = arr.ArrayBuffer();
  if (len) *len = buffer.ByteLength() / sizeof(T);
  data = reinterpret_cast<T*>(buffer.Data());
  return data;
};

inline void NapiObjectTypeError(
  Napi::Value value,
  std::string memberName,
  std::string expectedType
) {
  Napi::Env env = value.Env();
  std::string details = getV8ValueDetails(value);
  if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
  std::string msg = "Expected '" + expectedType + "' for '" + memberName + "' but got '" + details + "'";
  Napi::TypeError::New(env, msg.c_str()).ThrowAsJavaScriptException();
}

#endif
