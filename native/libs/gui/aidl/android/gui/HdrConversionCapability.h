/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/HdrConversionCapability.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/HdrConversionCapability.aidl ./out ./out/android/gui/HdrConversionCapability.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace gui {
class HdrConversionCapability : public ::android::Parcelable {
public:
  int32_t sourceType = 0;
  int32_t outputType = 0;
  bool addsLatency = false;
  inline bool operator==(const HdrConversionCapability& _rhs) const {
    return std::tie(sourceType, outputType, addsLatency) == std::tie(_rhs.sourceType, _rhs.outputType, _rhs.addsLatency);
  }
  inline bool operator<(const HdrConversionCapability& _rhs) const {
    return std::tie(sourceType, outputType, addsLatency) < std::tie(_rhs.sourceType, _rhs.outputType, _rhs.addsLatency);
  }
  inline bool operator!=(const HdrConversionCapability& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const HdrConversionCapability& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const HdrConversionCapability& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const HdrConversionCapability& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.HdrConversionCapability");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "HdrConversionCapability{";
    _aidl_os << "sourceType: " << ::android::internal::ToString(sourceType);
    _aidl_os << ", outputType: " << ::android::internal::ToString(outputType);
    _aidl_os << ", addsLatency: " << ::android::internal::ToString(addsLatency);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class HdrConversionCapability
}  // namespace gui
}  // namespace android
