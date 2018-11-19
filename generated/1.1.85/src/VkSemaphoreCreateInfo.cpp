/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkSemaphoreCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkSemaphoreCreateInfo::constructor;

_VkSemaphoreCreateInfo::_VkSemaphoreCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
}

_VkSemaphoreCreateInfo::~_VkSemaphoreCreateInfo() {
  //printf("VkSemaphoreCreateInfo deconstructed!!\n");
}

void _VkSemaphoreCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSemaphoreCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSemaphoreCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  Nan::Set(target, Nan::New("VkSemaphoreCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSemaphoreCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkSemaphoreCreateInfo* self = new _VkSemaphoreCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSemaphoreCreateInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkSemaphoreCreateInfo::flush) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
  
}

// sType
NAN_GETTER(_VkSemaphoreCreateInfo::GetsType) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkSemaphoreCreateInfo::SetsType) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSemaphoreCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkSemaphoreCreateInfo::GetpNext) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
}NAN_SETTER(_VkSemaphoreCreateInfo::SetpNext) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkSemaphoreCreateInfo::Getflags) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkSemaphoreCreateInfo::Setflags) {
  _VkSemaphoreCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkSemaphoreCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkSemaphoreCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkSemaphoreCreateInfo.flags'");
  }
}