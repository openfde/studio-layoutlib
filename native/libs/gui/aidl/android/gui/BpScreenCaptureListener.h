/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IScreenCaptureListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IScreenCaptureListener.aidl ./out ./out/android/gui/IScreenCaptureListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/IScreenCaptureListener.h>

namespace android {
namespace gui {
class BpScreenCaptureListener : public ::android::BpInterface<IScreenCaptureListener> {
public:
  explicit BpScreenCaptureListener(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpScreenCaptureListener() = default;
  ::android::binder::Status onScreenCaptureCompleted(const ::android::gui::ScreenCaptureResults& captureResults) override;
};  // class BpScreenCaptureListener
}  // namespace gui
}  // namespace android
