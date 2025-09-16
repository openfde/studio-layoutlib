/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/DisplayBrightness.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/DisplayBrightness.aidl ./out ./out/android/gui/DisplayBrightness.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace gui {
class DisplayBrightness : public ::android::Parcelable {
public:
  float sdrWhitePoint = 0.000000f;
  float sdrWhitePointNits = -1.000000f;
  float displayBrightness = 0.000000f;
  float displayBrightnessNits = -1.000000f;
  inline bool operator==(const DisplayBrightness& _rhs) const {
    return std::tie(sdrWhitePoint, sdrWhitePointNits, displayBrightness, displayBrightnessNits) == std::tie(_rhs.sdrWhitePoint, _rhs.sdrWhitePointNits, _rhs.displayBrightness, _rhs.displayBrightnessNits);
  }
  inline bool operator<(const DisplayBrightness& _rhs) const {
    return std::tie(sdrWhitePoint, sdrWhitePointNits, displayBrightness, displayBrightnessNits) < std::tie(_rhs.sdrWhitePoint, _rhs.sdrWhitePointNits, _rhs.displayBrightness, _rhs.displayBrightnessNits);
  }
  inline bool operator!=(const DisplayBrightness& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DisplayBrightness& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DisplayBrightness& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DisplayBrightness& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayBrightness");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DisplayBrightness{";
    _aidl_os << "sdrWhitePoint: " << ::android::internal::ToString(sdrWhitePoint);
    _aidl_os << ", sdrWhitePointNits: " << ::android::internal::ToString(sdrWhitePointNits);
    _aidl_os << ", displayBrightness: " << ::android::internal::ToString(displayBrightness);
    _aidl_os << ", displayBrightnessNits: " << ::android::internal::ToString(displayBrightnessNits);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class DisplayBrightness
}  // namespace gui
}  // namespace android
