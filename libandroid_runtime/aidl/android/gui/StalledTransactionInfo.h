/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/StalledTransactionInfo.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/StalledTransactionInfo.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/StalledTransactionInfo.cpp
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
class StalledTransactionInfo : public ::android::Parcelable {
public:
  ::android::String16 layerName;
  int64_t bufferId = 0L;
  int64_t frameNumber = 0L;
  inline bool operator==(const StalledTransactionInfo& _rhs) const {
    return std::tie(layerName, bufferId, frameNumber) == std::tie(_rhs.layerName, _rhs.bufferId, _rhs.frameNumber);
  }
  inline bool operator<(const StalledTransactionInfo& _rhs) const {
    return std::tie(layerName, bufferId, frameNumber) < std::tie(_rhs.layerName, _rhs.bufferId, _rhs.frameNumber);
  }
  inline bool operator!=(const StalledTransactionInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const StalledTransactionInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const StalledTransactionInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const StalledTransactionInfo& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.StalledTransactionInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "StalledTransactionInfo{";
    _aidl_os << "layerName: " << ::android::internal::ToString(layerName);
    _aidl_os << ", bufferId: " << ::android::internal::ToString(bufferId);
    _aidl_os << ", frameNumber: " << ::android::internal::ToString(frameNumber);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class StalledTransactionInfo
}  // namespace gui
}  // namespace android
