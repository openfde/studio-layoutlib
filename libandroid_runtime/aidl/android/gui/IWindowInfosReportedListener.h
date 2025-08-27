/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosReportedListener.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/IWindowInfosReportedListener.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosReportedListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <utils/StrongPointer.h>

namespace android {
namespace gui {
class IWindowInfosReportedListenerDelegator;

class IWindowInfosReportedListener : public ::android::IInterface {
public:
  typedef IWindowInfosReportedListenerDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(WindowInfosReportedListener)
  virtual ::android::binder::Status onWindowInfosReported() = 0;
};  // class IWindowInfosReportedListener

class IWindowInfosReportedListenerDefault : public IWindowInfosReportedListener {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status onWindowInfosReported() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IWindowInfosReportedListenerDefault
}  // namespace gui
}  // namespace android
