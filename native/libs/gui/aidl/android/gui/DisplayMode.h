/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/DisplayMode.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/DisplayMode.aidl ./out ./out/android/gui/DisplayMode.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/gui/Size.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android::gui {
class Size;
}  // namespace android::gui
namespace android {
namespace gui {
class DisplayMode : public ::android::Parcelable {
public:
  int32_t id = 0;
  ::android::gui::Size resolution;
  float xDpi = 0.000000f;
  float yDpi = 0.000000f;
  ::std::vector<int32_t> supportedHdrTypes;
  float peakRefreshRate = 0.000000f;
  float vsyncRate = 0.000000f;
  int64_t appVsyncOffset = 0L;
  int64_t sfVsyncOffset = 0L;
  int64_t presentationDeadline = 0L;
  int32_t group = -1;
  inline bool operator==(const DisplayMode& _rhs) const {
    return std::tie(id, resolution, xDpi, yDpi, supportedHdrTypes, peakRefreshRate, vsyncRate, appVsyncOffset, sfVsyncOffset, presentationDeadline, group) == std::tie(_rhs.id, _rhs.resolution, _rhs.xDpi, _rhs.yDpi, _rhs.supportedHdrTypes, _rhs.peakRefreshRate, _rhs.vsyncRate, _rhs.appVsyncOffset, _rhs.sfVsyncOffset, _rhs.presentationDeadline, _rhs.group);
  }
  inline bool operator<(const DisplayMode& _rhs) const {
    return std::tie(id, resolution, xDpi, yDpi, supportedHdrTypes, peakRefreshRate, vsyncRate, appVsyncOffset, sfVsyncOffset, presentationDeadline, group) < std::tie(_rhs.id, _rhs.resolution, _rhs.xDpi, _rhs.yDpi, _rhs.supportedHdrTypes, _rhs.peakRefreshRate, _rhs.vsyncRate, _rhs.appVsyncOffset, _rhs.sfVsyncOffset, _rhs.presentationDeadline, _rhs.group);
  }
  inline bool operator!=(const DisplayMode& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DisplayMode& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DisplayMode& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DisplayMode& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayMode");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DisplayMode{";
    _aidl_os << "id: " << ::android::internal::ToString(id);
    _aidl_os << ", resolution: " << ::android::internal::ToString(resolution);
    _aidl_os << ", xDpi: " << ::android::internal::ToString(xDpi);
    _aidl_os << ", yDpi: " << ::android::internal::ToString(yDpi);
    _aidl_os << ", supportedHdrTypes: " << ::android::internal::ToString(supportedHdrTypes);
    _aidl_os << ", peakRefreshRate: " << ::android::internal::ToString(peakRefreshRate);
    _aidl_os << ", vsyncRate: " << ::android::internal::ToString(vsyncRate);
    _aidl_os << ", appVsyncOffset: " << ::android::internal::ToString(appVsyncOffset);
    _aidl_os << ", sfVsyncOffset: " << ::android::internal::ToString(sfVsyncOffset);
    _aidl_os << ", presentationDeadline: " << ::android::internal::ToString(presentationDeadline);
    _aidl_os << ", group: " << ::android::internal::ToString(group);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class DisplayMode
}  // namespace gui
}  // namespace android
