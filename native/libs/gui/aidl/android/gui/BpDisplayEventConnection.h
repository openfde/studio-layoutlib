/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IDisplayEventConnection.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IDisplayEventConnection.aidl ./out ./out/android/gui/IDisplayEventConnection.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/IDisplayEventConnection.h>

namespace android {
namespace gui {
class BpDisplayEventConnection : public ::android::BpInterface<IDisplayEventConnection> {
public:
  explicit BpDisplayEventConnection(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpDisplayEventConnection() = default;
  ::android::binder::Status stealReceiveChannel(::android::gui::BitTube* outChannel) override;
  ::android::binder::Status setVsyncRate(int32_t count) override;
  ::android::binder::Status requestNextVsync() override;
  ::android::binder::Status getLatestVsyncEventData(::android::gui::ParcelableVsyncEventData* _aidl_return) override;
  ::android::binder::Status getSchedulingPolicy(::android::gui::SchedulingPolicy* _aidl_return) override;
};  // class BpDisplayEventConnection
}  // namespace gui
}  // namespace android
