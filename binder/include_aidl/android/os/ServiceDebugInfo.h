/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out/android/os/ServiceDebugInfo.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/binder/aidl/ frameworks/native/libs/binder/aidl/android/os/ServiceDebugInfo.aidl out/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out out/soong/.temp/sbox/1f6956de5f7a5a7cacfdfbecd1ceb0599423bd18/out/android/os/ServiceDebugInfo.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace os {
class ServiceDebugInfo : public ::android::Parcelable {
public:
  ::std::string name;
  int32_t debugPid = 0;
  inline bool operator==(const ServiceDebugInfo& _rhs) const {
    return std::tie(name, debugPid) == std::tie(_rhs.name, _rhs.debugPid);
  }
  inline bool operator<(const ServiceDebugInfo& _rhs) const {
    return std::tie(name, debugPid) < std::tie(_rhs.name, _rhs.debugPid);
  }
  inline bool operator!=(const ServiceDebugInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const ServiceDebugInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const ServiceDebugInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const ServiceDebugInfo& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.os.ServiceDebugInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "ServiceDebugInfo{";
    _aidl_os << "name: " << ::android::internal::ToString(name);
    _aidl_os << ", debugPid: " << ::android::internal::ToString(debugPid);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class ServiceDebugInfo
}  // namespace os
}  // namespace android
