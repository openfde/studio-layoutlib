/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/os/IInputConstants.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/input/ frameworks/native/libs/input/android/os/IInputConstants.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/os/IInputConstants.cpp
 */
#pragma once

#include <binder/IInterface.h>
#include <android/os/IInputConstants.h>
#include <android/os/BnInputConstants.h>
#include <binder/Delegate.h>


namespace android {
namespace os {
class BnInputConstants : public ::android::BnInterface<IInputConstants> {
public:
  explicit BnInputConstants();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnInputConstants

class IInputConstantsDelegator : public BnInputConstants {
public:
  explicit IInputConstantsDelegator(const ::android::sp<IInputConstants> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IInputConstants> getImpl() { return _aidl_delegate; }
private:
  ::android::sp<IInputConstants> _aidl_delegate;
};  // class IInputConstantsDelegator
}  // namespace os
}  // namespace android
