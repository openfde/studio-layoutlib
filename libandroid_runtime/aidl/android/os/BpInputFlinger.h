/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out/android/os/IInputFlinger.cpp.d --ninja -Iframeworks/native/libs/input -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis -Iframeworks/native/libs/input/ frameworks/native/libs/input/android/os/IInputFlinger.aidl out/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out out/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out/android/os/IInputFlinger.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/os/IInputFlinger.h>

namespace android {
namespace os {
class BpInputFlinger : public ::android::BpInterface<IInputFlinger> {
public:
  explicit BpInputFlinger(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpInputFlinger() = default;
  ::android::binder::Status createInputChannel(const ::std::string& name, ::android::os::InputChannelCore* _aidl_return) override;
  ::android::binder::Status removeInputChannel(const ::android::sp<::android::IBinder>& connectionToken) override;
  ::android::binder::Status setFocusedWindow(const ::android::gui::FocusRequest& request) override;
};  // class BpInputFlinger
}  // namespace os
}  // namespace android
