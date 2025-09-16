/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/Size.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/Size.aidl ./out ./out/android/gui/Size.cpp
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
class Size : public ::android::Parcelable {
public:
  int32_t width = -1;
  int32_t height = -1;
  inline bool operator==(const Size& _rhs) const {
    return std::tie(width, height) == std::tie(_rhs.width, _rhs.height);
  }
  inline bool operator<(const Size& _rhs) const {
    return std::tie(width, height) < std::tie(_rhs.width, _rhs.height);
  }
  inline bool operator!=(const Size& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const Size& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const Size& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const Size& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.Size");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "Size{";
    _aidl_os << "width: " << ::android::internal::ToString(width);
    _aidl_os << ", height: " << ::android::internal::ToString(height);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class Size
}  // namespace gui
}  // namespace android
