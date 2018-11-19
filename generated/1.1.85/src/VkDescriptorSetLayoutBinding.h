/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#ifndef __VK_VKDESCRIPTORSETLAYOUTBINDING_H__
#define __VK_VKDESCRIPTORSETLAYOUTBINDING_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorSetLayoutBinding: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    static NAN_METHOD(flush);
    // #accessors
    static NAN_GETTER(Getbinding);
    static NAN_SETTER(Setbinding);
    
    static NAN_GETTER(GetdescriptorType);
    static NAN_SETTER(SetdescriptorType);
    
    static NAN_GETTER(GetdescriptorCount);
    static NAN_SETTER(SetdescriptorCount);
    
    static NAN_GETTER(GetstageFlags);
    static NAN_SETTER(SetstageFlags);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pImmutableSamplers;
    static NAN_GETTER(GetpImmutableSamplers);
    static NAN_SETTER(SetpImmutableSamplers);
    

    // real instance
    VkDescriptorSetLayoutBinding instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    v8::Local<v8::String> sAccess0 = Nan::New("binding").ToLocalChecked();
    v8::Local<v8::String> sAccess1 = Nan::New("descriptorType").ToLocalChecked();
    v8::Local<v8::String> sAccess2 = Nan::New("descriptorCount").ToLocalChecked();
    v8::Local<v8::String> sAccess3 = Nan::New("stageFlags").ToLocalChecked();
    v8::Local<v8::String> sAccess4 = Nan::New("pImmutableSamplers").ToLocalChecked();

    _VkDescriptorSetLayoutBinding();
    ~_VkDescriptorSetLayoutBinding();

};

#endif