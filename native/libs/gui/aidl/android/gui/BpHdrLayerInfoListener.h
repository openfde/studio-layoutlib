/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IHdrLayerInfoListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IHdrLayerInfoListener.aidl ./out ./out/android/gui/IHdrLayerInfoListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/IHdrLayerInfoListener.h>

namespace android {
namespace gui {
class BpHdrLayerInfoListener : public ::android::BpInterface<IHdrLayerInfoListener> {
public:
  explicit BpHdrLayerInfoListener(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpHdrLayerInfoListener() = default;
  ::android::binder::Status onHdrLayerInfoChanged(int32_t numberOfHdrLayers, int32_t maxW, int32_t maxH, int32_t flags, float maxDesiredHdrSdrRatio) override;
};  // class BpHdrLayerInfoListener
}  // namespace gui
}  // namespace android
