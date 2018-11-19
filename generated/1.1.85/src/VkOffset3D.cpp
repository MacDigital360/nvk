/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkOffset3D.h"

Nan::Persistent<v8::FunctionTemplate> _VkOffset3D::constructor;

_VkOffset3D::_VkOffset3D() {
  
}

_VkOffset3D::~_VkOffset3D() {
  //printf("VkOffset3D deconstructed!!\n");
}

void _VkOffset3D::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkOffset3D::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkOffset3D").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("x").ToLocalChecked(), Getx, Setx, ctor);
  SetPrototypeAccessor(proto, Nan::New("y").ToLocalChecked(), Gety, Sety, ctor);
  SetPrototypeAccessor(proto, Nan::New("z").ToLocalChecked(), Getz, Setz, ctor);
  Nan::Set(target, Nan::New("VkOffset3D").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkOffset3D::New) {
  if (info.IsConstructCall()) {
    _VkOffset3D* self = new _VkOffset3D();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      if (obj->Has(self->sAccess0)) info.This()->Set(self->sAccess0, obj->Get(self->sAccess0));
      if (obj->Has(self->sAccess1)) info.This()->Set(self->sAccess1, obj->Get(self->sAccess1));
      if (obj->Has(self->sAccess2)) info.This()->Set(self->sAccess2, obj->Get(self->sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkOffset3D constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkOffset3D::flush) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  
}

// x
NAN_GETTER(_VkOffset3D::Getx) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.x));
}NAN_SETTER(_VkOffset3D::Setx) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  if (value->IsNumber()) {
    self->instance.x = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkOffset3D.x'");
  }
}// y
NAN_GETTER(_VkOffset3D::Gety) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.y));
}NAN_SETTER(_VkOffset3D::Sety) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  if (value->IsNumber()) {
    self->instance.y = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkOffset3D.y'");
  }
}// z
NAN_GETTER(_VkOffset3D::Getz) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.z));
}NAN_SETTER(_VkOffset3D::Setz) {
  _VkOffset3D *self = Nan::ObjectWrap::Unwrap<_VkOffset3D>(info.This());
  if (value->IsNumber()) {
    self->instance.z = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkOffset3D.z'");
  }
}