/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/ARect.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/ARect.aidl ./out ./out/android/gui/ARect.cpp
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
class ARect : public ::android::Parcelable {
public:
  int32_t left = 0;
  int32_t top = 0;
  int32_t right = 0;
  int32_t bottom = 0;
  inline bool operator==(const ARect& _rhs) const {
    return std::tie(left, top, right, bottom) == std::tie(_rhs.left, _rhs.top, _rhs.right, _rhs.bottom);
  }
  inline bool operator<(const ARect& _rhs) const {
    return std::tie(left, top, right, bottom) < std::tie(_rhs.left, _rhs.top, _rhs.right, _rhs.bottom);
  }
  inline bool operator!=(const ARect& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ARect& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ARect& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ARect& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.ARect");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ARect{";
    _aidl_os << "left: " << ::android::internal::ToString(left);
    _aidl_os << ", top: " << ::android::internal::ToString(top);
    _aidl_os << ", right: " << ::android::internal::ToString(right);
    _aidl_os << ", bottom: " << ::android::internal::ToString(bottom);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class ARect
}  // namespace gui
}  // namespace android
