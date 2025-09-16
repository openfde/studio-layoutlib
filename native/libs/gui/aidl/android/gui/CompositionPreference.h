/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/CompositionPreference.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/CompositionPreference.aidl ./out ./out/android/gui/CompositionPreference.cpp
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
class CompositionPreference : public ::android::Parcelable {
public:
  int32_t defaultDataspace = 0;
  int32_t defaultPixelFormat = 0;
  int32_t wideColorGamutDataspace = 0;
  int32_t wideColorGamutPixelFormat = 0;
  inline bool operator==(const CompositionPreference& _rhs) const {
    return std::tie(defaultDataspace, defaultPixelFormat, wideColorGamutDataspace, wideColorGamutPixelFormat) == std::tie(_rhs.defaultDataspace, _rhs.defaultPixelFormat, _rhs.wideColorGamutDataspace, _rhs.wideColorGamutPixelFormat);
  }
  inline bool operator<(const CompositionPreference& _rhs) const {
    return std::tie(defaultDataspace, defaultPixelFormat, wideColorGamutDataspace, wideColorGamutPixelFormat) < std::tie(_rhs.defaultDataspace, _rhs.defaultPixelFormat, _rhs.wideColorGamutDataspace, _rhs.wideColorGamutPixelFormat);
  }
  inline bool operator!=(const CompositionPreference& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const CompositionPreference& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const CompositionPreference& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const CompositionPreference& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.CompositionPreference");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "CompositionPreference{";
    _aidl_os << "defaultDataspace: " << ::android::internal::ToString(defaultDataspace);
    _aidl_os << ", defaultPixelFormat: " << ::android::internal::ToString(defaultPixelFormat);
    _aidl_os << ", wideColorGamutDataspace: " << ::android::internal::ToString(wideColorGamutDataspace);
    _aidl_os << ", wideColorGamutPixelFormat: " << ::android::internal::ToString(wideColorGamutPixelFormat);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class CompositionPreference
}  // namespace gui
}  // namespace android
