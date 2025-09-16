/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IRegionSamplingListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IRegionSamplingListener.aidl ./out ./out/android/gui/IRegionSamplingListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <utils/StrongPointer.h>

namespace android {
namespace gui {
class IRegionSamplingListenerDelegator;

class IRegionSamplingListener : public ::android::IInterface {
public:
  typedef IRegionSamplingListenerDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(RegionSamplingListener)
  virtual ::android::binder::Status onSampleCollected(float medianLuma) = 0;
};  // class IRegionSamplingListener

class IRegionSamplingListenerDefault : public IRegionSamplingListener {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status onSampleCollected(float /*medianLuma*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IRegionSamplingListenerDefault
}  // namespace gui
}  // namespace android
