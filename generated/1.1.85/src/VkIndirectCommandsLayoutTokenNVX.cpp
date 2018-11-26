/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkIndirectCommandsLayoutTokenNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkIndirectCommandsLayoutTokenNVX::constructor;

_VkIndirectCommandsLayoutTokenNVX::_VkIndirectCommandsLayoutTokenNVX() {
  
  
}

_VkIndirectCommandsLayoutTokenNVX::~_VkIndirectCommandsLayoutTokenNVX() {
  //printf("VkIndirectCommandsLayoutTokenNVX deconstructed!!\n");
  
  
  
  
  
}

void _VkIndirectCommandsLayoutTokenNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkIndirectCommandsLayoutTokenNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkIndirectCommandsLayoutTokenNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("tokenType").ToLocalChecked(), GettokenType, SettokenType, ctor);
  SetPrototypeAccessor(proto, Nan::New("bindingUnit").ToLocalChecked(), GetbindingUnit, SetbindingUnit, ctor);
  SetPrototypeAccessor(proto, Nan::New("dynamicCount").ToLocalChecked(), GetdynamicCount, SetdynamicCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("divisor").ToLocalChecked(), Getdivisor, Setdivisor, ctor);
  Nan::Set(target, Nan::New("VkIndirectCommandsLayoutTokenNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkIndirectCommandsLayoutTokenNVX::flush() {
  _VkIndirectCommandsLayoutTokenNVX *self = this;
  
  return true;
}

NAN_METHOD(_VkIndirectCommandsLayoutTokenNVX::New) {
  if (info.IsConstructCall()) {
    _VkIndirectCommandsLayoutTokenNVX* self = new _VkIndirectCommandsLayoutTokenNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("tokenType").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("bindingUnit").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("dynamicCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("divisor").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkIndirectCommandsLayoutTokenNVX constructor cannot be invoked without 'new'");
  }
};

// tokenType
NAN_GETTER(_VkIndirectCommandsLayoutTokenNVX::GettokenType) {
  _VkIndirectCommandsLayoutTokenNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutTokenNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.tokenType));
}NAN_SETTER(_VkIndirectCommandsLayoutTokenNVX::SettokenType) {
  _VkIndirectCommandsLayoutTokenNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutTokenNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.tokenType = static_cast<VkIndirectCommandsTokenTypeNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkIndirectCommandsLayoutTokenNVX.tokenType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// bindingUnit
NAN_GETTER(_VkIndirectCommandsLayoutTokenNVX::GetbindingUnit) {
  _VkIndirectCommandsLayoutTokenNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutTokenNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.bindingUnit));
}NAN_SETTER(_VkIndirectCommandsLayoutTokenNVX::SetbindingUnit) {
  _VkIndirectCommandsLayoutTokenNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutTokenNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.bindingUnit = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkIndirectCommandsLayoutTokenNVX.bindingUnit' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// dynamicCount
NAN_GETTER(_VkIndirectCommandsLayoutTokenNVX::GetdynamicCount) {
  _VkIndirectCommandsLayoutTokenNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutTokenNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dynamicCount));
}NAN_SETTER(_VkIndirectCommandsLayoutTokenNVX::SetdynamicCount) {
  _VkIndirectCommandsLayoutTokenNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutTokenNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.dynamicCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkIndirectCommandsLayoutTokenNVX.dynamicCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// divisor
NAN_GETTER(_VkIndirectCommandsLayoutTokenNVX::Getdivisor) {
  _VkIndirectCommandsLayoutTokenNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutTokenNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.divisor));
}NAN_SETTER(_VkIndirectCommandsLayoutTokenNVX::Setdivisor) {
  _VkIndirectCommandsLayoutTokenNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutTokenNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.divisor = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkIndirectCommandsLayoutTokenNVX.divisor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}