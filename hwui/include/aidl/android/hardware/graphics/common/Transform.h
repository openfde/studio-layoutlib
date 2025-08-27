/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 5 --hash 2ffe8da1136972e9b6bed7903f0d5aca289005a9 --stability vintf --min_sdk_version 29 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/staging/android/hardware/graphics/common/Transform.cpp.d -h out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/staging -Nhardware/interfaces/graphics/common/aidl/aidl_api/android.hardware.graphics.common/5 hardware/interfaces/graphics/common/aidl/aidl_api/android.hardware.graphics.common/5/android/hardware/graphics/common/Transform.aidl
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
enum class Transform : int32_t {
  NONE = 0,
  FLIP_H = 1,
  FLIP_V = 2,
  ROT_90 = 4,
  ROT_180 = 3,
  ROT_270 = 7,
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
[[nodiscard]] static inline std::string toString(Transform val) {
  switch(val) {
  case Transform::NONE:
    return "NONE";
  case Transform::FLIP_H:
    return "FLIP_H";
  case Transform::FLIP_V:
    return "FLIP_V";
  case Transform::ROT_90:
    return "ROT_90";
  case Transform::ROT_180:
    return "ROT_180";
  case Transform::ROT_270:
    return "ROT_270";
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
constexpr inline std::array<aidl::android::hardware::graphics::common::Transform, 6> enum_values<aidl::android::hardware::graphics::common::Transform> = {
  aidl::android::hardware::graphics::common::Transform::NONE,
  aidl::android::hardware::graphics::common::Transform::FLIP_H,
  aidl::android::hardware::graphics::common::Transform::FLIP_V,
  aidl::android::hardware::graphics::common::Transform::ROT_90,
  aidl::android::hardware::graphics::common::Transform::ROT_180,
  aidl::android::hardware::graphics::common::Transform::ROT_270,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
