/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/os/InputEventInjectionResult.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/input/ frameworks/native/libs/input/android/os/InputEventInjectionResult.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/os/InputEventInjectionResult.cpp
 */
#pragma once

#include <array>
#include <binder/Enums.h>
#include <cstdint>
#include <string>

namespace android {
namespace os {
enum class InputEventInjectionResult : int32_t {
  PENDING = -1,
  SUCCEEDED = 0,
  TARGET_MISMATCH = 1,
  FAILED = 2,
  TIMED_OUT = 3,
  ftl_first = -1,
  ftl_last = 3,
};
}  // namespace os
}  // namespace android
namespace android {
namespace os {
[[nodiscard]] static inline std::string toString(InputEventInjectionResult val) {
  switch(val) {
  case InputEventInjectionResult::PENDING:
    return "PENDING";
  case InputEventInjectionResult::SUCCEEDED:
    return "SUCCEEDED";
  case InputEventInjectionResult::TARGET_MISMATCH:
    return "TARGET_MISMATCH";
  case InputEventInjectionResult::FAILED:
    return "FAILED";
  case InputEventInjectionResult::TIMED_OUT:
    return "TIMED_OUT";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace os
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::os::InputEventInjectionResult, 7> enum_values<::android::os::InputEventInjectionResult> = {
  ::android::os::InputEventInjectionResult::PENDING,
  ::android::os::InputEventInjectionResult::SUCCEEDED,
  ::android::os::InputEventInjectionResult::TARGET_MISMATCH,
  ::android::os::InputEventInjectionResult::FAILED,
  ::android::os::InputEventInjectionResult::TIMED_OUT,
  ::android::os::InputEventInjectionResult::ftl_first,
  ::android::os::InputEventInjectionResult::ftl_last,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
