/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IDisplayEventConnection.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IDisplayEventConnection.aidl ./out ./out/android/gui/IDisplayEventConnection.cpp
 */
#pragma once

#include <android/gui/SchedulingPolicy.h>
#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <gui/VsyncEventData.h>
#include <private/gui/BitTube.h>
#include <utils/StrongPointer.h>

namespace android::gui {
class SchedulingPolicy;
}  // namespace android::gui
namespace android {
namespace gui {
class IDisplayEventConnectionDelegator;

class IDisplayEventConnection : public ::android::IInterface {
public:
  typedef IDisplayEventConnectionDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(DisplayEventConnection)
  virtual ::android::binder::Status stealReceiveChannel(::android::gui::BitTube* outChannel) = 0;
  virtual ::android::binder::Status setVsyncRate(int32_t count) = 0;
  virtual ::android::binder::Status requestNextVsync() = 0;
  virtual ::android::binder::Status getLatestVsyncEventData(::android::gui::ParcelableVsyncEventData* _aidl_return) = 0;
  virtual ::android::binder::Status getSchedulingPolicy(::android::gui::SchedulingPolicy* _aidl_return) = 0;
};  // class IDisplayEventConnection

class IDisplayEventConnectionDefault : public IDisplayEventConnection {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
  ::android::binder::Status stealReceiveChannel(::android::gui::BitTube* /*outChannel*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status setVsyncRate(int32_t /*count*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status requestNextVsync() override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getLatestVsyncEventData(::android::gui::ParcelableVsyncEventData* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
  ::android::binder::Status getSchedulingPolicy(::android::gui::SchedulingPolicy* /*_aidl_return*/) override {
    return ::android::binder::Status::fromStatusT(::android::UNKNOWN_TRANSACTION);
  }
};  // class IDisplayEventConnectionDefault
}  // namespace gui
}  // namespace android
