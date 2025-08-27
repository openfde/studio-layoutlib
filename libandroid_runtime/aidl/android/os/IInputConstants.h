/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/os/IInputConstants.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/input/ frameworks/native/libs/input/android/os/IInputConstants.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/os/IInputConstants.cpp
 */
#pragma once

#include <binder/IBinder.h>
#include <binder/IInterface.h>
#include <binder/Status.h>
#include <binder/Trace.h>
#include <cstdint>
#include <utils/StrongPointer.h>

namespace android {
namespace os {
class IInputConstantsDelegator;

class IInputConstants : public ::android::IInterface {
public:
  typedef IInputConstantsDelegator DefaultDelegator;
  DECLARE_META_INTERFACE(InputConstants)
  enum : int32_t { UNMULTIPLIED_DEFAULT_DISPATCHING_TIMEOUT_MILLIS = 5000 };
  enum : int32_t { INVALID_BATTERY_CAPACITY = -1 };
  enum : int32_t { INVALID_INPUT_EVENT_ID = 0 };
  enum : int32_t { INVALID_INPUT_DEVICE_ID = -2 };
  enum : int32_t { POLICY_FLAG_INJECTED_FROM_ACCESSIBILITY = 131072 };
  enum : int32_t { INPUT_EVENT_FLAG_IS_ACCESSIBILITY_EVENT = 2048 };
  enum : int32_t { DEFAULT_POINTER_ACCELERATION = 3 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_DEFAULT = -1 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_IMPULSE = 0 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_LSQ1 = 1 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_LSQ2 = 2 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_LSQ3 = 3 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_WLSQ2_DELTA = 4 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_WLSQ2_CENTRAL = 5 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_WLSQ2_RECENT = 6 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_INT1 = 7 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_INT2 = 8 };
  enum : int32_t { VELOCITY_TRACKER_STRATEGY_LEGACY = 9 };
};  // class IInputConstants

class IInputConstantsDefault : public IInputConstants {
public:
  ::android::IBinder* onAsBinder() override {
    return nullptr;
  }
};  // class IInputConstantsDefault
}  // namespace os
}  // namespace android
