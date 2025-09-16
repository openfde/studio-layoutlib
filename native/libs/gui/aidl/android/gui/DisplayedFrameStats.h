/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/DisplayedFrameStats.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/DisplayedFrameStats.aidl ./out ./out/android/gui/DisplayedFrameStats.cpp
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
class DisplayedFrameStats : public ::android::Parcelable {
public:
  int64_t numFrames = 0L;
  ::std::vector<int64_t> component_0_sample;
  ::std::vector<int64_t> component_1_sample;
  ::std::vector<int64_t> component_2_sample;
  ::std::vector<int64_t> component_3_sample;
  inline bool operator==(const DisplayedFrameStats& _rhs) const {
    return std::tie(numFrames, component_0_sample, component_1_sample, component_2_sample, component_3_sample) == std::tie(_rhs.numFrames, _rhs.component_0_sample, _rhs.component_1_sample, _rhs.component_2_sample, _rhs.component_3_sample);
  }
  inline bool operator<(const DisplayedFrameStats& _rhs) const {
    return std::tie(numFrames, component_0_sample, component_1_sample, component_2_sample, component_3_sample) < std::tie(_rhs.numFrames, _rhs.component_0_sample, _rhs.component_1_sample, _rhs.component_2_sample, _rhs.component_3_sample);
  }
  inline bool operator!=(const DisplayedFrameStats& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DisplayedFrameStats& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DisplayedFrameStats& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DisplayedFrameStats& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayedFrameStats");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DisplayedFrameStats{";
    _aidl_os << "numFrames: " << ::android::internal::ToString(numFrames);
    _aidl_os << ", component_0_sample: " << ::android::internal::ToString(component_0_sample);
    _aidl_os << ", component_1_sample: " << ::android::internal::ToString(component_1_sample);
    _aidl_os << ", component_2_sample: " << ::android::internal::ToString(component_2_sample);
    _aidl_os << ", component_3_sample: " << ::android::internal::ToString(component_3_sample);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class DisplayedFrameStats
}  // namespace gui
}  // namespace android
