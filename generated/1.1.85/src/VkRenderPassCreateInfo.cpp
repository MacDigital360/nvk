/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.6
 */
#include "utils.h"
#include "index.h"
#include "VkRenderPassCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkRenderPassCreateInfo::constructor;

_VkRenderPassCreateInfo::_VkRenderPassCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
}

_VkRenderPassCreateInfo::~_VkRenderPassCreateInfo() {
  //printf("VkRenderPassCreateInfo deconstructed!!\n");
}

void _VkRenderPassCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRenderPassCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRenderPassCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  Nan::SetPrototypeMethod(ctor, "flush", flush);
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pNext").ToLocalChecked(), GetpNext, SetpNext, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("attachmentCount").ToLocalChecked(), GetattachmentCount, SetattachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAttachments").ToLocalChecked(), GetpAttachments, SetpAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("subpassCount").ToLocalChecked(), GetsubpassCount, SetsubpassCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSubpasses").ToLocalChecked(), GetpSubpasses, SetpSubpasses, ctor);
  SetPrototypeAccessor(proto, Nan::New("dependencyCount").ToLocalChecked(), GetdependencyCount, SetdependencyCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDependencies").ToLocalChecked(), GetpDependencies, SetpDependencies, ctor);
  Nan::Set(target, Nan::New("VkRenderPassCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkRenderPassCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkRenderPassCreateInfo* self = new _VkRenderPassCreateInfo();
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
      if (obj->Has(self->sAccess8)) info.This()->Set(self->sAccess8, obj->Get(self->sAccess8));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRenderPassCreateInfo constructor cannot be invoked without 'new'");
  }
};

NAN_METHOD(_VkRenderPassCreateInfo::flush) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  
  info.This()->Set(self->sAccess4, info.This()->Get(self->sAccess4));
  info.This()->Set(self->sAccess6, info.This()->Get(self->sAccess6));
  info.This()->Set(self->sAccess8, info.This()->Get(self->sAccess8));
}

// sType
NAN_GETTER(_VkRenderPassCreateInfo::GetsType) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkRenderPassCreateInfo::SetsType) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkRenderPassCreateInfo.sType'");
  }
}// pNext
NAN_GETTER(_VkRenderPassCreateInfo::GetpNext) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
}NAN_SETTER(_VkRenderPassCreateInfo::SetpNext) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
}// flags
NAN_GETTER(_VkRenderPassCreateInfo::Getflags) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkRenderPassCreateInfo::Setflags) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkRenderPassCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkRenderPassCreateInfo.flags'");
  }
}// attachmentCount
NAN_GETTER(_VkRenderPassCreateInfo::GetattachmentCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.attachmentCount));
}NAN_SETTER(_VkRenderPassCreateInfo::SetattachmentCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.attachmentCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkRenderPassCreateInfo.attachmentCount'");
  }
}// pAttachments
NAN_GETTER(_VkRenderPassCreateInfo::GetpAttachments) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (self->pAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo::SetpAttachments) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pAttachments.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pAttachments.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkAttachmentDescription]' for 'VkRenderPassCreateInfo.pAttachments'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pAttachments = copyArrayOfV8Objects<VkAttachmentDescription, _VkAttachmentDescription>(value);
  } else if (value->IsNull()) {
    self->instance.pAttachments = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkAttachmentDescription]' for 'VkRenderPassCreateInfo.pAttachments'");
  }
}// subpassCount
NAN_GETTER(_VkRenderPassCreateInfo::GetsubpassCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.subpassCount));
}NAN_SETTER(_VkRenderPassCreateInfo::SetsubpassCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.subpassCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkRenderPassCreateInfo.subpassCount'");
  }
}// pSubpasses
NAN_GETTER(_VkRenderPassCreateInfo::GetpSubpasses) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (self->pSubpasses.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSubpasses);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo::SetpSubpasses) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pSubpasses.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pSubpasses.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkSubpassDescription]' for 'VkRenderPassCreateInfo.pSubpasses'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pSubpasses = copyArrayOfV8Objects<VkSubpassDescription, _VkSubpassDescription>(value);
  } else if (value->IsNull()) {
    self->instance.pSubpasses = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkSubpassDescription]' for 'VkRenderPassCreateInfo.pSubpasses'");
  }
}// dependencyCount
NAN_GETTER(_VkRenderPassCreateInfo::GetdependencyCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dependencyCount));
}NAN_SETTER(_VkRenderPassCreateInfo::SetdependencyCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.dependencyCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    return Nan::ThrowTypeError("Expected 'Number' for 'VkRenderPassCreateInfo.dependencyCount'");
  }
}// pDependencies
NAN_GETTER(_VkRenderPassCreateInfo::GetpDependencies) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (self->pDependencies.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDependencies);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo::SetpDependencies) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pDependencies.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pDependencies.Reset();
    } else {
      return Nan::ThrowTypeError("Expected 'Object [VkSubpassDependency]' for 'VkRenderPassCreateInfo.pDependencies'");
    }
  
  // vulkan
  if (value->IsArray()) {
    self->instance.pDependencies = copyArrayOfV8Objects<VkSubpassDependency, _VkSubpassDependency>(value);
  } else if (value->IsNull()) {
    self->instance.pDependencies = nullptr;
  } else {
    return Nan::ThrowTypeError("Expected 'Object [VkSubpassDependency]' for 'VkRenderPassCreateInfo.pDependencies'");
  }
}