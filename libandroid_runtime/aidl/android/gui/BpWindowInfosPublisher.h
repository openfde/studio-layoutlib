/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosPublisher.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/IWindowInfosPublisher.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosPublisher.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/IWindowInfosPublisher.h>

namespace android {
namespace gui {
class BpWindowInfosPublisher : public ::android::BpInterface<IWindowInfosPublisher> {
public:
  explicit BpWindowInfosPublisher(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpWindowInfosPublisher() = default;
  ::android::binder::Status ackWindowInfosReceived(int64_t vsyncId, int64_t listenerId) override;
};  // class BpWindowInfosPublisher
}  // namespace gui
}  // namespace android
