/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKSTENCILOPSTATE_H__
#define __VK_VKSTENCILOPSTATE_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkStencilOpState: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
    static NAN_GETTER(GetfailOp);
    static NAN_SETTER(SetfailOp);
    
    static NAN_GETTER(GetpassOp);
    static NAN_SETTER(SetpassOp);
    
    static NAN_GETTER(GetdepthFailOp);
    static NAN_SETTER(SetdepthFailOp);
    
    static NAN_GETTER(GetcompareOp);
    static NAN_SETTER(SetcompareOp);
    
    static NAN_GETTER(GetcompareMask);
    static NAN_SETTER(SetcompareMask);
    
    static NAN_GETTER(GetwriteMask);
    static NAN_SETTER(SetwriteMask);
    
    static NAN_GETTER(Getreference);
    static NAN_SETTER(Setreference);
    

    // real instance
    VkStencilOpState instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("failOp").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("passOp").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("depthFailOp").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("compareOp").ToLocalChecked();
    v8::Local<v8::String> sAccess4 = Nan::New("compareMask").ToLocalChecked();
    v8::Local<v8::String> sAccess5 = Nan::New("writeMask").ToLocalChecked();
    v8::Local<v8::String> sAccess6 = Nan::New("reference").ToLocalChecked();

    _VkStencilOpState();
    ~_VkStencilOpState();

};

#endif