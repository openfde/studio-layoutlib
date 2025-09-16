/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/Color.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/Color.aidl ./out ./out/android/gui/Color.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace gui {
class Color : public ::android::Parcelable {
public:
  float r = 0.000000f;
  float g = 0.000000f;
  float b = 0.000000f;
  float a = 0.000000f;
  inline bool operator==(const Color& _rhs) const {
    return std::tie(r, g, b, a) == std::tie(_rhs.r, _rhs.g, _rhs.b, _rhs.a);
  }
  inline bool operator<(const Color& _rhs) const {
    return std::tie(r, g, b, a) < std::tie(_rhs.r, _rhs.g, _rhs.b, _rhs.a);
  }
  inline bool operator!=(const Color& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Color& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Color& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Color& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.Color");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Color{";
    _aidl_os << "r: " << ::android::internal::ToString(r);
    _aidl_os << ", g: " << ::android::internal::ToString(g);
    _aidl_os << ", b: " << ::android::internal::ToString(b);
    _aidl_os << ", a: " << ::android::internal::ToString(a);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class Color
}  // namespace gui
}  // namespace android
