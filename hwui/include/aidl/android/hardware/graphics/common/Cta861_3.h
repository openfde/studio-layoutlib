/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl --lang=ndk --structured --version 5 --hash 2ffe8da1136972e9b6bed7903f0d5aca289005a9 --stability vintf --min_sdk_version 29 -pout/soong/.intermediates/hardware/interfaces/common/aidl/android.hardware.common_interface/2/preprocessed.aidl --ninja -d out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/staging/android/hardware/graphics/common/Cta861_3.cpp.d -h out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/include/staging -o out/soong/.intermediates/hardware/interfaces/graphics/common/aidl/android.hardware.graphics.common-V5-ndk-source/gen/staging -Nhardware/interfaces/graphics/common/aidl/aidl_api/android.hardware.graphics.common/5 hardware/interfaces/graphics/common/aidl/aidl_api/android.hardware.graphics.common/5/android/hardware/graphics/common/Cta861_3.aidl
 */
#pragma once

#include <cstdint>
#include <memory>
#include <optional>
#include <string>
#include <vector>
#include <android/binder_interface_utils.h>
#include <android/binder_parcelable_utils.h>
#include <android/binder_to_string.h>
#ifdef BINDER_STABILITY_SUPPORT
#include <android/binder_stability.h>
#endif  // BINDER_STABILITY_SUPPORT

namespace aidl {
namespace android {
namespace hardware {
namespace graphics {
namespace common {
class Cta861_3 {
public:
  typedef std::false_type fixed_size;
  static const char* descriptor;

  float maxContentLightLevel = 0.000000f;
  float maxFrameAverageLightLevel = 0.000000f;

  binder_status_t readFromParcel(const AParcel* parcel);
  binder_status_t writeToParcel(AParcel* parcel) const;

  inline bool operator==(const Cta861_3& _rhs) const {
    return std::tie(maxContentLightLevel, maxFrameAverageLightLevel) == std::tie(_rhs.maxContentLightLevel, _rhs.maxFrameAverageLightLevel);
  }
  inline bool operator<(const Cta861_3& _rhs) const {
    return std::tie(maxContentLightLevel, maxFrameAverageLightLevel) < std::tie(_rhs.maxContentLightLevel, _rhs.maxFrameAverageLightLevel);
  }
  inline bool operator!=(const Cta861_3& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Cta861_3& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Cta861_3& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Cta861_3& _rhs) const {
    return !(_rhs < *this);
  }

  static const ::ndk::parcelable_stability_t _aidl_stability = ::ndk::STABILITY_VINTF;
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Cta861_3{";
    _aidl_os << "maxContentLightLevel: " << ::android::internal::ToString(maxContentLightLevel);
    _aidl_os << ", maxFrameAverageLightLevel: " << ::android::internal::ToString(maxFrameAverageLightLevel);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};
}  // namespace common
}  // namespace graphics
}  // namespace hardware
}  // namespace android
}  // namespace aidl
