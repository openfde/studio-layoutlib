/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/ContentSamplingAttributes.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/ContentSamplingAttributes.aidl ./out ./out/android/gui/ContentSamplingAttributes.cpp
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
class ContentSamplingAttributes : public ::android::Parcelable {
public:
  int32_t format = 0;
  int32_t dataspace = 0;
  int8_t componentMask = 0;
  inline bool operator==(const ContentSamplingAttributes& _rhs) const {
    return std::tie(format, dataspace, componentMask) == std::tie(_rhs.format, _rhs.dataspace, _rhs.componentMask);
  }
  inline bool operator<(const ContentSamplingAttributes& _rhs) const {
    return std::tie(format, dataspace, componentMask) < std::tie(_rhs.format, _rhs.dataspace, _rhs.componentMask);
  }
  inline bool operator!=(const ContentSamplingAttributes& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ContentSamplingAttributes& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ContentSamplingAttributes& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ContentSamplingAttributes& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.ContentSamplingAttributes");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ContentSamplingAttributes{";
    _aidl_os << "format: " << ::android::internal::ToString(format);
    _aidl_os << ", dataspace: " << ::android::internal::ToString(dataspace);
    _aidl_os << ", componentMask: " << ::android::internal::ToString(componentMask);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class ContentSamplingAttributes
}  // namespace gui
}  // namespace android
