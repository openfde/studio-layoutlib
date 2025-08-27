/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/InputApplicationInfo.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/InputApplicationInfo.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/InputApplicationInfo.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/IBinder.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <string>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace gui {
class InputApplicationInfo : public ::android::Parcelable {
public:
  ::android::sp<::android::IBinder> token;
  ::std::string name;
  int64_t dispatchingTimeoutMillis = 0L;
  inline bool operator==(const InputApplicationInfo& _rhs) const {
    return std::tie(token, name, dispatchingTimeoutMillis) == std::tie(_rhs.token, _rhs.name, _rhs.dispatchingTimeoutMillis);
  }
  inline bool operator<(const InputApplicationInfo& _rhs) const {
    return std::tie(token, name, dispatchingTimeoutMillis) < std::tie(_rhs.token, _rhs.name, _rhs.dispatchingTimeoutMillis);
  }
  inline bool operator!=(const InputApplicationInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const InputApplicationInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const InputApplicationInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const InputApplicationInfo& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.InputApplicationInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "InputApplicationInfo{";
    _aidl_os << "token: " << ::android::internal::ToString(token);
    _aidl_os << ", name: " << ::android::internal::ToString(name);
    _aidl_os << ", dispatchingTimeoutMillis: " << ::android::internal::ToString(dispatchingTimeoutMillis);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class InputApplicationInfo
}  // namespace gui
}  // namespace android
