/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out/android/os/IClientCallback.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/binder/aidl/ frameworks/native/libs/binder/aidl/android/os/IClientCallback.aidl out/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out out/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out/android/os/IClientCallback.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <utils/StrongPointer.h>

namespace android {
namespace os {
class IClientCallbackDelegator;

class IClientCallback : public ::android::IInterface {
public:
  typedef IClientCallbackDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(ClientCallback)
  virtual ::android::binder::Status onClients(const ::android::sp<::android::IBinder>& registered, bool hasClients) = 0;
};  // class IClientCallback

class IClientCallbackDefault : public IClientCallback {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status onClients(const ::android::sp<::android::IBinder>& /*registered*/, bool /*hasClients*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IClientCallbackDefault
}  // namespace os
}  // namespace android
