/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/ITunnelModeEnabledListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/ITunnelModeEnabledListener.aidl ./out ./out/android/gui/ITunnelModeEnabledListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <utils/StrongPointer.h>

namespace android {
namespace gui {
class ITunnelModeEnabledListenerDelegator;

class ITunnelModeEnabledListener : public ::android::IInterface {
public:
  typedef ITunnelModeEnabledListenerDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(TunnelModeEnabledListener)
  virtual ::android::binder::Status onTunnelModeEnabledChanged(bool enabled) = 0;
};  // class ITunnelModeEnabledListener

class ITunnelModeEnabledListenerDefault : public ITunnelModeEnabledListener {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status onTunnelModeEnabledChanged(bool /*enabled*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class ITunnelModeEnabledListenerDefault
}  // namespace gui
}  // namespace android
