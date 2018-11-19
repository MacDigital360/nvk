/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKPUSHCONSTANTRANGE_H__
#define __VK_VKPUSHCONSTANTRANGE_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPushConstantRange: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
    static NAN_GETTER(GetstageFlags);
    static NAN_SETTER(SetstageFlags);
    
    static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    
    static NAN_GETTER(Getsize);
    static NAN_SETTER(Setsize);
    

    // real instance
    VkPushConstantRange instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("stageFlags").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("offset").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("size").ToLocalChecked();

    _VkPushConstantRange();
    ~_VkPushConstantRange();

};

#endif