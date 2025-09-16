/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/PullAtomData.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/PullAtomData.aidl ./out ./out/android/gui/PullAtomData.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android {
namespace gui {
class PullAtomData : public ::android::Parcelable {
public:
  ::std::vector<uint8_t> data;
  bool success = false;
  inline bool operator==(const PullAtomData& _rhs) const {
    return std::tie(data, success) == std::tie(_rhs.data, _rhs.success);
  }
  inline bool operator<(const PullAtomData& _rhs) const {
    return std::tie(data, success) < std::tie(_rhs.data, _rhs.success);
  }
  inline bool operator!=(const PullAtomData& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const PullAtomData& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const PullAtomData& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const PullAtomData& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.PullAtomData");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "PullAtomData{";
    _aidl_os << "data: " << ::android::internal::ToString(data);
    _aidl_os << ", success: " << ::android::internal::ToString(success);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class PullAtomData
}  // namespace gui
}  // namespace android
