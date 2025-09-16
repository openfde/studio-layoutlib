/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/DisplayDecorationSupport.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/DisplayDecorationSupport.aidl ./out ./out/android/gui/DisplayDecorationSupport.cpp
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
class DisplayDecorationSupport : public ::android::Parcelable {
public:
  int32_t format = 0;
  int32_t alphaInterpretation = 0;
  inline bool operator==(const DisplayDecorationSupport& _rhs) const {
    return std::tie(format, alphaInterpretation) == std::tie(_rhs.format, _rhs.alphaInterpretation);
  }
  inline bool operator<(const DisplayDecorationSupport& _rhs) const {
    return std::tie(format, alphaInterpretation) < std::tie(_rhs.format, _rhs.alphaInterpretation);
  }
  inline bool operator!=(const DisplayDecorationSupport& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DisplayDecorationSupport& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DisplayDecorationSupport& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DisplayDecorationSupport& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayDecorationSupport");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DisplayDecorationSupport{";
    _aidl_os << "format: " << ::android::internal::ToString(format);
    _aidl_os << ", alphaInterpretation: " << ::android::internal::ToString(alphaInterpretation);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class DisplayDecorationSupport
}  // namespace gui
}  // namespace android
