/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/ISurfaceComposerClient.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/ISurfaceComposerClient.aidl ./out ./out/android/gui/ISurfaceComposerClient.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/ISurfaceComposerClient.h>

namespace android {
namespace gui {
class BpSurfaceComposerClient : public ::android::BpInterface<ISurfaceComposerClient> {
public:
  explicit BpSurfaceComposerClient(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpSurfaceComposerClient() = default;
  ::android::binder::Status createSurface(const ::std::string& name, int32_t flags, const ::android::sp<::android::IBinder>& parent, const ::android::gui::LayerMetadata& metadata, ::android::gui::CreateSurfaceResult* _aidl_return) override;
  ::android::binder::Status clearLayerFrameStats(const ::android::sp<::android::IBinder>& handle) override;
  ::android::binder::Status getLayerFrameStats(const ::android::sp<::android::IBinder>& handle, ::android::gui::FrameStats* _aidl_return) override;
  ::android::binder::Status mirrorSurface(const ::android::sp<::android::IBinder>& mirrorFromHandle, ::android::gui::CreateSurfaceResult* _aidl_return) override;
  ::android::binder::Status mirrorDisplay(int64_t displayId, ::android::gui::CreateSurfaceResult* _aidl_return) override;
  ::android::binder::Status getSchedulingPolicy(::android::gui::SchedulingPolicy* _aidl_return) override;
};  // class BpSurfaceComposerClient
}  // namespace gui
}  // namespace android
