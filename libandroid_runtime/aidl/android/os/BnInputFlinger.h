/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out/android/os/IInputFlinger.cpp.d --ninja -Iframeworks/native/libs/input -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis -Iframeworks/native/libs/input/ frameworks/native/libs/input/android/os/IInputFlinger.aidl out/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out out/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out/android/os/IInputFlinger.cpp
 */
#pragma once

#include <binder/IInterface.h>
#include <android/os/IInputFlinger.h>
#include <android/os/BnInputFlinger.h>
#include <binder/Delegate.h>


namespace android {
namespace os {
class BnInputFlinger : public ::android::BnInterface<IInputFlinger> {
public:
  static constexpr uint32_t TRANSACTION_createInputChannel = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  static constexpr uint32_t TRANSACTION_removeInputChannel = ::android::IBinder::FIRST_CALL_TRANSACTION + 1;
  static constexpr uint32_t TRANSACTION_setFocusedWindow = ::android::IBinder::FIRST_CALL_TRANSACTION + 2;
  explicit BnInputFlinger();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnInputFlinger

class IInputFlingerDelegator : public BnInputFlinger {
public:
  explicit IInputFlingerDelegator(const ::android::sp<IInputFlinger> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IInputFlinger> getImpl() { return _aidl_delegate; }
  ::android::binder::Status createInputChannel(const ::std::string& name, ::android::os::InputChannelCore* _aidl_return) override {
    return _aidl_delegate->createInputChannel(name, _aidl_return);
  }
  ::android::binder::Status removeInputChannel(const ::android::sp<::android::IBinder>& connectionToken) override {
    return _aidl_delegate->removeInputChannel(connectionToken);
  }
  ::android::binder::Status setFocusedWindow(const ::android::gui::FocusRequest& request) override {
    return _aidl_delegate->setFocusedWindow(request);
  }
private:
  ::android::sp<IInputFlinger> _aidl_delegate;
};  // class IInputFlingerDelegator
}  // namespace os
}  // namespace android
