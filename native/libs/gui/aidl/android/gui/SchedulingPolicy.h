/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/SchedulingPolicy.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/SchedulingPolicy.aidl ./out ./out/android/gui/SchedulingPolicy.cpp
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
class SchedulingPolicy : public ::android::Parcelable {
public:
  int32_t policy = 0;
  int32_t priority = 0;
  inline bool operator==(const SchedulingPolicy& _rhs) const {
    return std::tie(policy, priority) == std::tie(_rhs.policy, _rhs.priority);
  }
  inline bool operator<(const SchedulingPolicy& _rhs) const {
    return std::tie(policy, priority) < std::tie(_rhs.policy, _rhs.priority);
  }
  inline bool operator!=(const SchedulingPolicy& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const SchedulingPolicy& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const SchedulingPolicy& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const SchedulingPolicy& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.SchedulingPolicy");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "SchedulingPolicy{";
    _aidl_os << "policy: " << ::android::internal::ToString(policy);
    _aidl_os << ", priority: " << ::android::internal::ToString(priority);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class SchedulingPolicy
}  // namespace gui
}  // namespace android
