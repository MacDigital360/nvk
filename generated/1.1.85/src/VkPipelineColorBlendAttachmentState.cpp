/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineColorBlendAttachmentState.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineColorBlendAttachmentState::constructor;

_VkPipelineColorBlendAttachmentState::_VkPipelineColorBlendAttachmentState() {
  
}

_VkPipelineColorBlendAttachmentState::~_VkPipelineColorBlendAttachmentState() {
  //printf("VkPipelineColorBlendAttachmentState deconstructed!!\n");
}

void _VkPipelineColorBlendAttachmentState::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineColorBlendAttachmentState::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineColorBlendAttachmentState").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("blendEnable").ToLocalChecked(), GetblendEnable, SetblendEnable, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcColorBlendFactor").ToLocalChecked(), GetsrcColorBlendFactor, SetsrcColorBlendFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstColorBlendFactor").ToLocalChecked(), GetdstColorBlendFactor, SetdstColorBlendFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("colorBlendOp").ToLocalChecked(), GetcolorBlendOp, SetcolorBlendOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcAlphaBlendFactor").ToLocalChecked(), GetsrcAlphaBlendFactor, SetsrcAlphaBlendFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstAlphaBlendFactor").ToLocalChecked(), GetdstAlphaBlendFactor, SetdstAlphaBlendFactor, ctor);
  SetPrototypeAccessor(proto, Nan::New("alphaBlendOp").ToLocalChecked(), GetalphaBlendOp, SetalphaBlendOp, ctor);
  SetPrototypeAccessor(proto, Nan::New("colorWriteMask").ToLocalChecked(), GetcolorWriteMask, SetcolorWriteMask, ctor);
  Nan::Set(target, Nan::New("VkPipelineColorBlendAttachmentState").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkPipelineColorBlendAttachmentState::New) {
  if (info.IsConstructCall()) {
    _VkPipelineColorBlendAttachmentState* self = new _VkPipelineColorBlendAttachmentState();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      if (obj->Has(self->sAccess3)) info.This()->Set(self->sAccess3, obj->Get(self->sAccess3));
      if (obj->Has(self->sAccess4)) info.This()->Set(self->sAccess4, obj->Get(self->sAccess4));
      if (obj->Has(self->sAccess5)) info.This()->Set(self->sAccess5, obj->Get(self->sAccess5));
      if (obj->Has(self->sAccess6)) info.This()->Set(self->sAccess6, obj->Get(self->sAccess6));
      if (obj->Has(self->sAccess7)) info.This()->Set(self->sAccess7, obj->Get(self->sAccess7));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineColorBlendAttachmentState constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkPipelineColorBlendAttachmentState::flush) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  
}

// blendEnable
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetblendEnable) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.blendEnable));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetblendEnable) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.blendEnable = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendAttachmentState.blendEnable'");
  }
}// srcColorBlendFactor
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetsrcColorBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcColorBlendFactor));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetsrcColorBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  if (value->IsNumber()) {
    self->instance.srcColorBlendFactor = static_cast<VkBlendFactor>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendAttachmentState.srcColorBlendFactor'");
  }
}// dstColorBlendFactor
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetdstColorBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstColorBlendFactor));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetdstColorBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  if (value->IsNumber()) {
    self->instance.dstColorBlendFactor = static_cast<VkBlendFactor>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendAttachmentState.dstColorBlendFactor'");
  }
}// colorBlendOp
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetcolorBlendOp) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.colorBlendOp));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetcolorBlendOp) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  if (value->IsNumber()) {
    self->instance.colorBlendOp = static_cast<VkBlendOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendAttachmentState.colorBlendOp'");
  }
}// srcAlphaBlendFactor
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetsrcAlphaBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcAlphaBlendFactor));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetsrcAlphaBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  if (value->IsNumber()) {
    self->instance.srcAlphaBlendFactor = static_cast<VkBlendFactor>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendAttachmentState.srcAlphaBlendFactor'");
  }
}// dstAlphaBlendFactor
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetdstAlphaBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstAlphaBlendFactor));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetdstAlphaBlendFactor) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  if (value->IsNumber()) {
    self->instance.dstAlphaBlendFactor = static_cast<VkBlendFactor>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendAttachmentState.dstAlphaBlendFactor'");
  }
}// alphaBlendOp
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetalphaBlendOp) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.alphaBlendOp));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetalphaBlendOp) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  if (value->IsNumber()) {
    self->instance.alphaBlendOp = static_cast<VkBlendOp>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendAttachmentState.alphaBlendOp'");
  }
}// colorWriteMask
NAN_GETTER(_VkPipelineColorBlendAttachmentState::GetcolorWriteMask) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.colorWriteMask));
}NAN_SETTER(_VkPipelineColorBlendAttachmentState::SetcolorWriteMask) {
  _VkPipelineColorBlendAttachmentState *self = Nan::ObjectWrap::Unwrap<_VkPipelineColorBlendAttachmentState>(info.This());
  if (value->IsNumber()) {
    self->instance.colorWriteMask = static_cast<VkColorComponentFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkPipelineColorBlendAttachmentState.colorWriteMask'");
  }
}