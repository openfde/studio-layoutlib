/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IHdrConversionConstants.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IHdrConversionConstants.aidl ./out ./out/android/gui/IHdrConversionConstants.cpp
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
class IHdrConversionConstantsDelegator;

class IHdrConversionConstants : public ::android::IInterface {
public:
  typedef IHdrConversionConstantsDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(HdrConversionConstants)
  enum : int32_t { HdrConversionModePassthrough = 1 };
  enum : int32_t { HdrConversionModeAuto = 2 };
  enum : int32_t { HdrConversionModeForce = 3 };
};  // class IHdrConversionConstants

class IHdrConversionConstantsDefault : public IHdrConversionConstants {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
};  // class IHdrConversionConstantsDefault
}  // namespace gui
}  // namespace android
