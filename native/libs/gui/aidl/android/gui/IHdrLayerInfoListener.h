/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IHdrLayerInfoListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IHdrLayerInfoListener.aidl ./out ./out/android/gui/IHdrLayerInfoListener.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {
namespace gui {
class IHdrLayerInfoListenerDelegator;

class IHdrLayerInfoListener : public ::android::IInterface {
public:
  typedef IHdrLayerInfoListenerDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(HdrLayerInfoListener)
  virtual ::android::binder::Status onHdrLayerInfoChanged(int32_t numberOfHdrLayers, int32_t maxW, int32_t maxH, int32_t flags, float maxDesiredHdrSdrRatio) = 0;
};  // class IHdrLayerInfoListener

class IHdrLayerInfoListenerDefault : public IHdrLayerInfoListener {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status onHdrLayerInfoChanged(int32_t /*numberOfHdrLayers*/, int32_t /*maxW*/, int32_t /*maxH*/, int32_t /*flags*/, float /*maxDesiredHdrSdrRatio*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IHdrLayerInfoListenerDefault
}  // namespace gui
}  // namespace android
