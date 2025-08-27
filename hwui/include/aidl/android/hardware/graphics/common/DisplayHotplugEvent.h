/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 5 --hash 2ffe8da1136972e9b6bed7903f0d5aca289005a9 --stability vintf --min_sdk_version 29 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/staging/android/hardware/graphics/common/DisplayHotplugEvent.cpp.d -h out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/staging -Nhardware/interfaces/graphics/common/aidl/aidl_api/android.hardware.graphics.common/5 hardware/interfaces/graphics/common/aidl/aidl_api/android.hardware.graphics.common/5/android/hardware/graphics/common/DisplayHotplugEvent.aidl
 */
#pragma once

#include <array>
#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_enums.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace graphics {
namespace common {
enum class DisplayHotplugEvent : int32_t {
  CONNECTED = 0,
  DISCONNECTED = 1,
  ERROR_UNKNOWN = -1,
  ERROR_INCOMPATIBLE_CABLE = -2,
  ERROR_TOO_MANY_DISPLAYS = -3,
};

}  // namespace common
}  // namespace graphics
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace aidl {
namespace android {
namespace hardware {
namespace graphics {
namespace common {
[[nodiscard]] static inline std::string toString(DisplayHotplugEvent val) {
  switch(val) {
  case DisplayHotplugEvent::CONNECTED:
    return "CONNECTED";
  case DisplayHotplugEvent::DISCONNECTED:
    return "DISCONNECTED";
  case DisplayHotplugEvent::ERROR_UNKNOWN:
    return "ERROR_UNKNOWN";
  case DisplayHotplugEvent::ERROR_INCOMPATIBLE_CABLE:
    return "ERROR_INCOMPATIBLE_CABLE";
  case DisplayHotplugEvent::ERROR_TOO_MANY_DISPLAYS:
    return "ERROR_TOO_MANY_DISPLAYS";
  default:
    return std::to_string(static_cast<int32_t>(val));
  }
}
}  // namespace common
}  // namespace graphics
}  // namespace hardware
}  // namespace android
}  // namespace aidl
namespace ndk {
namespace internal {
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++17-extensions"
template <>
constexpr inline std::array<aidl::android::hardware::graphics::common::DisplayHotplugEvent, 5> enum_values<aidl::android::hardware::graphics::common::DisplayHotplugEvent> = {
  aidl::android::hardware::graphics::common::DisplayHotplugEvent::CONNECTED,
  aidl::android::hardware::graphics::common::DisplayHotplugEvent::DISCONNECTED,
  aidl::android::hardware::graphics::common::DisplayHotplugEvent::ERROR_UNKNOWN,
  aidl::android::hardware::graphics::common::DisplayHotplugEvent::ERROR_INCOMPATIBLE_CABLE,
  aidl::android::hardware::graphics::common::DisplayHotplugEvent::ERROR_TOO_MANY_DISPLAYS,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
