/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IHdrConversionConstants.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IHdrConversionConstants.aidl ./out ./out/android/gui/IHdrConversionConstants.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <utils/Errors.h>
#include <android/gui/IHdrConversionConstants.h>

namespace android {
namespace gui {
class BpHdrConversionConstants : public ::android::BpInterface<IHdrConversionConstants> {
public:
  explicit BpHdrConversionConstants(const ::android::sp<::android::IBinder>& _aidl_impl);
  virtual ~BpHdrConversionConstants() = default;
};  // class BpHdrConversionConstants
}  // namespace gui
}  // namespace android
