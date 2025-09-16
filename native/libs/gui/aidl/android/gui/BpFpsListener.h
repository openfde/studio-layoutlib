/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IFpsListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IFpsListener.aidl ./out ./out/android/gui/IFpsListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/IFpsListener.h>

namespace android {
namespace gui {
class BpFpsListener : public ::android::BpInterface<IFpsListener> {
public:
  explicit BpFpsListener(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpFpsListener() = default;
  ::android::binder::Status onFpsReported(float fps) override;
};  // class BpFpsListener
}  // namespace gui
}  // namespace android
