/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKCOPYDESCRIPTORSET_H__
#define __VK_VKCOPYDESCRIPTORSET_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkCopyDescriptorSet: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pNext;
    static NAN_GETTER(GetpNext);
    static NAN_SETTER(SetpNext);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> srcSet;
      static NAN_GETTER(GetsrcSet);
    static NAN_SETTER(SetsrcSet);
    
    static NAN_GETTER(GetsrcBinding);
    static NAN_SETTER(SetsrcBinding);
    
    static NAN_GETTER(GetsrcArrayElement);
    static NAN_SETTER(SetsrcArrayElement);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> dstSet;
      static NAN_GETTER(GetdstSet);
    static NAN_SETTER(SetdstSet);
    
    static NAN_GETTER(GetdstBinding);
    static NAN_SETTER(SetdstBinding);
    
    static NAN_GETTER(GetdstArrayElement);
    static NAN_SETTER(SetdstArrayElement);
    
    static NAN_GETTER(GetdescriptorCount);
    static NAN_SETTER(SetdescriptorCount);
    

    // real instance
    VkCopyDescriptorSet instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("srcSet").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("srcBinding").ToLocalChecked();
    v8::Local<v8::String> sAccess4 = Nan::New("srcArrayElement").ToLocalChecked();
    v8::Local<v8::String> sAccess5 = Nan::New("dstSet").ToLocalChecked();
    v8::Local<v8::String> sAccess6 = Nan::New("dstBinding").ToLocalChecked();
    v8::Local<v8::String> sAccess7 = Nan::New("dstArrayElement").ToLocalChecked();
    v8::Local<v8::String> sAccess8 = Nan::New("descriptorCount").ToLocalChecked();

    _VkCopyDescriptorSet();
    ~_VkCopyDescriptorSet();

};

#endif