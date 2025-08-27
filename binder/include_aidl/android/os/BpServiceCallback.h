/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out/android/os/IServiceCallback.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/binder/aidl/ frameworks/native/libs/binder/aidl/android/os/IServiceCallback.aidl out/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out out/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out/android/os/IServiceCallback.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/os/IServiceCallback.h>

namespace android {
namespace os {
class BpServiceCallback : public ::android::BpInterface<IServiceCallback> {
public:
  explicit BpServiceCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpServiceCallback() = default;
  ::android::binder::Status onRegistration(const ::std::string& name, const ::android::sp<::android::IBinder>& binder) override;
};  // class BpServiceCallback
}  // namespace os
}  // namespace android
