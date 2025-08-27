/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/os/IInputConstants.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/input/ frameworks/native/libs/input/android/os/IInputConstants.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/os/IInputConstants.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/os/IInputConstants.h>

namespace android {
namespace os {
class BpInputConstants : public ::android::BpInterface<IInputConstants> {
public:
  explicit BpInputConstants(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpInputConstants() = default;
};  // class BpInputConstants
}  // namespace os
}  // namespace android
