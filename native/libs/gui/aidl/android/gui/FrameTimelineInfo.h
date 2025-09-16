/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/FrameTimelineInfo.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/FrameTimelineInfo.aidl ./out ./out/android/gui/FrameTimelineInfo.cpp
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
class FrameTimelineInfo : public ::android::Parcelable {
public:
  int64_t vsyncId = -1L;
  int32_t inputEventId = 0;
  int64_t startTimeNanos = 0L;
  bool useForRefreshRateSelection = false;
  int64_t skippedFrameVsyncId = -1L;
  int64_t skippedFrameStartTimeNanos = 0L;
  inline bool operator==(const FrameTimelineInfo& _rhs) const {
    return std::tie(vsyncId, inputEventId, startTimeNanos, useForRefreshRateSelection, skippedFrameVsyncId, skippedFrameStartTimeNanos) == std::tie(_rhs.vsyncId, _rhs.inputEventId, _rhs.startTimeNanos, _rhs.useForRefreshRateSelection, _rhs.skippedFrameVsyncId, _rhs.skippedFrameStartTimeNanos);
  }
  inline bool operator<(const FrameTimelineInfo& _rhs) const {
    return std::tie(vsyncId, inputEventId, startTimeNanos, useForRefreshRateSelection, skippedFrameVsyncId, skippedFrameStartTimeNanos) < std::tie(_rhs.vsyncId, _rhs.inputEventId, _rhs.startTimeNanos, _rhs.useForRefreshRateSelection, _rhs.skippedFrameVsyncId, _rhs.skippedFrameStartTimeNanos);
  }
  inline bool operator!=(const FrameTimelineInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const FrameTimelineInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const FrameTimelineInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const FrameTimelineInfo& _rhs) const {
    return !(_rhs < *this);
  }

  enum : int64_t { INVALID_VSYNC_ID = -1L };
  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.FrameTimelineInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "FrameTimelineInfo{";
    _aidl_os << "vsyncId: " << ::android::internal::ToString(vsyncId);
    _aidl_os << ", inputEventId: " << ::android::internal::ToString(inputEventId);
    _aidl_os << ", startTimeNanos: " << ::android::internal::ToString(startTimeNanos);
    _aidl_os << ", useForRefreshRateSelection: " << ::android::internal::ToString(useForRefreshRateSelection);
    _aidl_os << ", skippedFrameVsyncId: " << ::android::internal::ToString(skippedFrameVsyncId);
    _aidl_os << ", skippedFrameStartTimeNanos: " << ::android::internal::ToString(skippedFrameStartTimeNanos);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class FrameTimelineInfo
}  // namespace gui
}  // namespace android
