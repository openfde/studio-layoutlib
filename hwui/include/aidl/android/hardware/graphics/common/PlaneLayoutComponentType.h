/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 5 --hash 2ffe8da1136972e9b6bed7903f0d5aca289005a9 --stability vintf --min_sdk_version 29 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/staging/android/hardware/graphics/common/PlaneLayoutComponentType.cpp.d -h out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/staging -Nhardware/interfaces/graphics/common/aidl/aidl_api/android.hardware.graphics.common/5 hardware/interfaces/graphics/common/aidl/aidl_api/android.hardware.graphics.common/5/android/hardware/graphics/common/PlaneLayoutComponentType.aidl
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
enum class PlaneLayoutComponentType : int64_t {
  Y = 1L,
  CB = 2L,
  CR = 4L,
  R = 1024L,
  G = 2048L,
  B = 4096L,
  RAW = 1048576L,
  A = 1073741824L,
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
[[nodiscard]] static inline std::string toString(PlaneLayoutComponentType val) {
  switch(val) {
  case PlaneLayoutComponentType::Y:
    return "Y";
  case PlaneLayoutComponentType::CB:
    return "CB";
  case PlaneLayoutComponentType::CR:
    return "CR";
  case PlaneLayoutComponentType::R:
    return "R";
  case PlaneLayoutComponentType::G:
    return "G";
  case PlaneLayoutComponentType::B:
    return "B";
  case PlaneLayoutComponentType::RAW:
    return "RAW";
  case PlaneLayoutComponentType::A:
    return "A";
  default:
    return std::to_string(static_cast<int64_t>(val));
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
constexpr inline std::array<aidl::android::hardware::graphics::common::PlaneLayoutComponentType, 8> enum_values<aidl::android::hardware::graphics::common::PlaneLayoutComponentType> = {
  aidl::android::hardware::graphics::common::PlaneLayoutComponentType::Y,
  aidl::android::hardware::graphics::common::PlaneLayoutComponentType::CB,
  aidl::android::hardware::graphics::common::PlaneLayoutComponentType::CR,
  aidl::android::hardware::graphics::common::PlaneLayoutComponentType::R,
  aidl::android::hardware::graphics::common::PlaneLayoutComponentType::G,
  aidl::android::hardware::graphics::common::PlaneLayoutComponentType::B,
  aidl::android::hardware::graphics::common::PlaneLayoutComponentType::RAW,
  aidl::android::hardware::graphics::common::PlaneLayoutComponentType::A,
};
#pragma clang diagnostic pop
}  // namespace internal
}  // namespace ndk
