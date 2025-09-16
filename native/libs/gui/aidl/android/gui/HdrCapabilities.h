/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/HdrCapabilities.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/HdrCapabilities.aidl ./out ./out/android/gui/HdrCapabilities.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android {
namespace gui {
class HdrCapabilities : public ::android::Parcelable {
public:
  ::std::vector<int32_t> supportedHdrTypes;
  float maxLuminance = 0.000000f;
  float maxAverageLuminance = 0.000000f;
  float minLuminance = 0.000000f;
  inline bool operator==(const HdrCapabilities& _rhs) const {
    return std::tie(supportedHdrTypes, maxLuminance, maxAverageLuminance, minLuminance) == std::tie(_rhs.supportedHdrTypes, _rhs.maxLuminance, _rhs.maxAverageLuminance, _rhs.minLuminance);
  }
  inline bool operator<(const HdrCapabilities& _rhs) const {
    return std::tie(supportedHdrTypes, maxLuminance, maxAverageLuminance, minLuminance) < std::tie(_rhs.supportedHdrTypes, _rhs.maxLuminance, _rhs.maxAverageLuminance, _rhs.minLuminance);
  }
  inline bool operator!=(const HdrCapabilities& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const HdrCapabilities& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const HdrCapabilities& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const HdrCapabilities& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.HdrCapabilities");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "HdrCapabilities{";
    _aidl_os << "supportedHdrTypes: " << ::android::internal::ToString(supportedHdrTypes);
    _aidl_os << ", maxLuminance: " << ::android::internal::ToString(maxLuminance);
    _aidl_os << ", maxAverageLuminance: " << ::android::internal::ToString(maxAverageLuminance);
    _aidl_os << ", minLuminance: " << ::android::internal::ToString(minLuminance);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class HdrCapabilities
}  // namespace gui
}  // namespace android
