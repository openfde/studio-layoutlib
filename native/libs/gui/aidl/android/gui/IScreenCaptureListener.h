/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IScreenCaptureListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IScreenCaptureListener.aidl ./out ./out/android/gui/IScreenCaptureListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <gui/ScreenCaptureResults.h>
#include <utils/StrongPointer.h>

namespace android {
namespace gui {
class IScreenCaptureListenerDelegator;

class IScreenCaptureListener : public ::android::IInterface {
public:
  typedef IScreenCaptureListenerDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(ScreenCaptureListener)
  virtual ::android::binder::Status onScreenCaptureCompleted(const ::android::gui::ScreenCaptureResults& captureResults) = 0;
};  // class IScreenCaptureListener

class IScreenCaptureListenerDefault : public IScreenCaptureListener {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status onScreenCaptureCompleted(const ::android::gui::ScreenCaptureResults& /*captureResults*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IScreenCaptureListenerDefault
}  // namespace gui
}  // namespace android
