/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosListener.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/IWindowInfosListener.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/IWindowInfosListener.h>

namespace android {
namespace gui {
class BpWindowInfosListener : public ::android::BpInterface<IWindowInfosListener> {
public:
  explicit BpWindowInfosListener(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpWindowInfosListener() = default;
  ::android::binder::Status onWindowInfosChanged(const ::android::gui::WindowInfosUpdate& update) override;
};  // class BpWindowInfosListener
}  // namespace gui
}  // namespace android
