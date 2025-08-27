/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out/android/os/IInputFlinger.cpp.d --ninja -Iframeworks/native/libs/input -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis -Iframeworks/native/libs/input/ frameworks/native/libs/input/android/os/IInputFlinger.aidl out/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out out/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out/android/os/IInputFlinger.cpp
 */
#pragma once

#include <android/gui/FocusRequest.h>
#include <android/os/InputChannelCore.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <string>
#include <utils/StrongPointer.h>

namespace android::gui {
class FocusRequest;
}  // namespace android::gui
namespace android::os {
class InputChannelCore;
}  // namespace android::os
namespace android {
namespace os {
class IInputFlingerDelegator;

class IInputFlinger : public ::android::IInterface {
public:
  typedef IInputFlingerDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(InputFlinger)
  virtual ::android::binder::Status createInputChannel(const ::std::string& name, ::android::os::InputChannelCore* _aidl_return) = 0;
  virtual ::android::binder::Status removeInputChannel(const ::android::sp<::android::IBinder>& connectionToken) = 0;
  virtual ::android::binder::Status setFocusedWindow(const ::android::gui::FocusRequest& request) = 0;
};  // class IInputFlinger

class IInputFlingerDefault : public IInputFlinger {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status createInputChannel(const ::std::string& /*name*/, ::android::os::InputChannelCore* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status removeInputChannel(const ::android::sp<::android::IBinder>& /*connectionToken*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setFocusedWindow(const ::android::gui::FocusRequest& /*request*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IInputFlingerDefault
}  // namespace os
}  // namespace android
