/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out/android/os/IClientCallback.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/binder/aidl/ frameworks/native/libs/binder/aidl/android/os/IClientCallback.aidl out/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out out/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out/android/os/IClientCallback.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/os/IClientCallback.h>

namespace android {
namespace os {
class BpClientCallback : public ::android::BpInterface<IClientCallback> {
public:
  explicit BpClientCallback(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpClientCallback() = default;
  ::android::binder::Status onClients(const ::android::sp<::android::IBinder>& registered, bool hasClients) override;
};  // class BpClientCallback
}  // namespace os
}  // namespace android
