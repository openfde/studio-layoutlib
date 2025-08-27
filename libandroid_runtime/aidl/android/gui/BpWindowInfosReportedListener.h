/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosReportedListener.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/IWindowInfosReportedListener.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosReportedListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/IWindowInfosReportedListener.h>

namespace android {
namespace gui {
class BpWindowInfosReportedListener : public ::android::BpInterface<IWindowInfosReportedListener> {
public:
  explicit BpWindowInfosReportedListener(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpWindowInfosReportedListener() = default;
  ::android::binder::Status onWindowInfosReported() override;
};  // class BpWindowInfosReportedListener
}  // namespace gui
}  // namespace android
