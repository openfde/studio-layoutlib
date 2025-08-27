/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosReportedListener.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/IWindowInfosReportedListener.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosReportedListener.cpp
 */
#pragma once

#include <binder/IInterface.h>
#include <android/gui/IWindowInfosReportedListener.h>
#include <android/gui/BnWindowInfosReportedListener.h>
#include <binder/Delegate.h>


namespace android {
namespace gui {
class BnWindowInfosReportedListener : public ::android::BnInterface<IWindowInfosReportedListener> {
public:
  static constexpr uint32_t TRANSACTION_onWindowInfosReported = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  explicit BnWindowInfosReportedListener();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnWindowInfosReportedListener

class IWindowInfosReportedListenerDelegator : public BnWindowInfosReportedListener {
public:
  explicit IWindowInfosReportedListenerDelegator(const ::android::sp<IWindowInfosReportedListener> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IWindowInfosReportedListener> getImpl() { return _aidl_delegate; }
  ::android::binder::Status onWindowInfosReported() override {
    return _aidl_delegate->onWindowInfosReported();
  }
private:
  ::android::sp<IWindowInfosReportedListener> _aidl_delegate;
};  // class IWindowInfosReportedListenerDelegator
}  // namespace gui
}  // namespace android
