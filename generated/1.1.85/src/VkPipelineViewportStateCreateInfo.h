/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKPIPELINEVIEWPORTSTATECREATEINFO_H__
#define __VK_VKPIPELINEVIEWPORTSTATECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineViewportStateCreateInfo: public Nan::ObjectWrap {

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
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetviewportCount);
    static NAN_SETTER(SetviewportCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pViewports;
    static NAN_GETTER(GetpViewports);
    static NAN_SETTER(SetpViewports);
    
    static NAN_GETTER(GetscissorCount);
    static NAN_SETTER(SetscissorCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pScissors;
    static NAN_GETTER(GetpScissors);
    static NAN_SETTER(SetpScissors);
    

    // real instance
    VkPipelineViewportStateCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("pNext").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("viewportCount").ToLocalChecked();
    v8::Local<v8::String> sAccess4 = Nan::New("pViewports").ToLocalChecked();
    v8::Local<v8::String> sAccess5 = Nan::New("scissorCount").ToLocalChecked();
    v8::Local<v8::String> sAccess6 = Nan::New("pScissors").ToLocalChecked();

    _VkPipelineViewportStateCreateInfo();
    ~_VkPipelineViewportStateCreateInfo();

};

#endif