/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out/android/os/InputChannelCore.cpp.d --ninja -Iframeworks/native/libs/input -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis -Iframeworks/native/libs/input/ frameworks/native/libs/input/android/os/InputChannelCore.aidl out/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out out/soong/.temp/sbox/6254f2ba1cae6e2cfe00402c66d143c33d729668/out/android/os/InputChannelCore.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/IBinder.h>
#include <binder/Parcel.h>
#include <binder/ParcelFileDescriptor.h>
#include <binder/Status.h>
#include <string>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace os {
class InputChannelCore : public ::android::Parcelable {
public:
  ::std::string name;
  ::android::os::ParcelFileDescriptor fd;
  ::android::sp<::android::IBinder> token;
  inline bool operator==(const InputChannelCore& _rhs) const {
    return std::tie(name, fd, token) == std::tie(_rhs.name, _rhs.fd, _rhs.token);
  }
  inline bool operator<(const InputChannelCore& _rhs) const {
    return std::tie(name, fd, token) < std::tie(_rhs.name, _rhs.fd, _rhs.token);
  }
  inline bool operator!=(const InputChannelCore& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const InputChannelCore& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const InputChannelCore& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const InputChannelCore& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.os.InputChannelCore");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "InputChannelCore{";
    _aidl_os << "name: " << ::android::internal::ToString(name);
    _aidl_os << ", fd: " << ::android::internal::ToString(fd);
    _aidl_os << ", token: " << ::android::internal::ToString(token);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class InputChannelCore
}  // namespace os
}  // namespace android
