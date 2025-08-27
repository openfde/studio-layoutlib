/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosPublisher.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/IWindowInfosPublisher.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosPublisher.cpp
 */
#pragma once

#include <binder/IInterface.h>
#include <android/gui/IWindowInfosPublisher.h>
#include <android/gui/BnWindowInfosPublisher.h>
#include <binder/Delegate.h>


namespace android {
namespace gui {
class BnWindowInfosPublisher : public ::android::BnInterface<IWindowInfosPublisher> {
public:
  static constexpr uint32_t TRANSACTION_ackWindowInfosReceived = ::android::IBinder::FIRST_CALL_TRANSACTION + 0;
  explicit BnWindowInfosPublisher();
  ::android::status_t onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) override;
};  // class BnWindowInfosPublisher

class IWindowInfosPublisherDelegator : public BnWindowInfosPublisher {
public:
  explicit IWindowInfosPublisherDelegator(const ::android::sp<IWindowInfosPublisher> &impl) : _aidl_delegate(impl) {}

  ::android::sp<IWindowInfosPublisher> getImpl() { return _aidl_delegate; }
  ::android::binder::Status ackWindowInfosReceived(int64_t vsyncId, int64_t listenerId) override {
    return _aidl_delegate->ackWindowInfosReceived(vsyncId, listenerId);
  }
private:
  ::android::sp<IWindowInfosPublisher> _aidl_delegate;
};  // class IWindowInfosPublisherDelegator
}  // namespace gui
}  // namespace android
