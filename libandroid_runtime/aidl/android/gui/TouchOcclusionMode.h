/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/TouchOcclusionMode.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/TouchOcclusionMode.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/TouchOcclusionMode.cpp
 */
#pragma once

#include <array>
#include <binder/Enums.h>
#include <cstdint>
#include <string>

namespace android {
namespace gui {
enum class TouchOcclusionMode : int32_t {
  BLOCK_UNTRUSTED = 0,
  USE_OPACITY = 1,
  ALLOW = 2,
  ftl_last = 2,
};
}  // namespace gui
}  // namespace android
namespace android {
namespace gui {
[[nodiscard]] static inline std::string toString(TouchOcclusionMode val) {
  switch(val) {
  case TouchOcclusionMode::BLOCK_UNTRUSTED:
    return "BLOCK_UNTRUSTED";
  case TouchOcclusionMode::USE_OPACITY:
    return "USE_OPACITY";
  case TouchOcclusionMode::ALLOW:
    return "ALLOW";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace gui
}  // namespace android
namespace android {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<::android::gui::TouchOcclusionMode, 4> enum_values<::android::gui::TouchOcclusionMode> = {
  ::android::gui::TouchOcclusionMode::BLOCK_UNTRUSTED,
  ::android::gui::TouchOcclusionMode::USE_OPACITY,
  ::android::gui::TouchOcclusionMode::ALLOW,
  ::android::gui::TouchOcclusionMode::ftl_last,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace android
