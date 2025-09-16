/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/DisplayStatInfo.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/DisplayStatInfo.aidl ./out ./out/android/gui/DisplayStatInfo.cpp
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
class DisplayStatInfo : public ::android::Parcelable {
public:
  int64_t vsyncTime = 0L;
  int64_t vsyncPeriod = 0L;
  inline bool operator==(const DisplayStatInfo& _rhs) const {
    return std::tie(vsyncTime, vsyncPeriod) == std::tie(_rhs.vsyncTime, _rhs.vsyncPeriod);
  }
  inline bool operator<(const DisplayStatInfo& _rhs) const {
    return std::tie(vsyncTime, vsyncPeriod) < std::tie(_rhs.vsyncTime, _rhs.vsyncPeriod);
  }
  inline bool operator!=(const DisplayStatInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DisplayStatInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DisplayStatInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DisplayStatInfo& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayStatInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DisplayStatInfo{";
    _aidl_os << "vsyncTime: " << ::android::internal::ToString(vsyncTime);
    _aidl_os << ", vsyncPeriod: " << ::android::internal::ToString(vsyncPeriod);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class DisplayStatInfo
}  // namespace gui
}  // namespace android
