/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/ITunnelModeEnabledListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/ITunnelModeEnabledListener.aidl ./out ./out/android/gui/ITunnelModeEnabledListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/ITunnelModeEnabledListener.h>

namespace android {
namespace gui {
class BpTunnelModeEnabledListener : public ::android::BpInterface<ITunnelModeEnabledListener> {
public:
  explicit BpTunnelModeEnabledListener(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpTunnelModeEnabledListener() = default;
  ::android::binder::Status onTunnelModeEnabledChanged(bool enabled) override;
};  // class BpTunnelModeEnabledListener
}  // namespace gui
}  // namespace android
