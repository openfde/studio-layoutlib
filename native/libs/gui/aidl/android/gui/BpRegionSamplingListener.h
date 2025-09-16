/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IRegionSamplingListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IRegionSamplingListener.aidl ./out ./out/android/gui/IRegionSamplingListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/IRegionSamplingListener.h>

namespace android {
namespace gui {
class BpRegionSamplingListener : public ::android::BpInterface<IRegionSamplingListener> {
public:
  explicit BpRegionSamplingListener(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpRegionSamplingListener() = default;
  ::android::binder::Status onSampleCollected(float medianLuma) override;
};  // class BpRegionSamplingListener
}  // namespace gui
}  // namespace android
