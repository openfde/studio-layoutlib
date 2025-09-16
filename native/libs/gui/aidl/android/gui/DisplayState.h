/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/DisplayState.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/DisplayState.aidl ./out ./out/android/gui/DisplayState.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/gui/Rotation.h>
#include <android/gui/Size.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>

namespace android::gui {
class Size;
}  // namespace android::gui
namespace android {
namespace gui {
class DisplayState : public ::android::Parcelable {
public:
  int32_t layerStack = 0;
  ::android::gui::Rotation orientation = ::android::gui::Rotation::Rotation0;
  ::android::gui::Size layerStackSpaceRect;
  inline bool operator==(const DisplayState& _rhs) const {
    return std::tie(layerStack, orientation, layerStackSpaceRect) == std::tie(_rhs.layerStack, _rhs.orientation, _rhs.layerStackSpaceRect);
  }
  inline bool operator<(const DisplayState& _rhs) const {
    return std::tie(layerStack, orientation, layerStackSpaceRect) < std::tie(_rhs.layerStack, _rhs.orientation, _rhs.layerStackSpaceRect);
  }
  inline bool operator!=(const DisplayState& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DisplayState& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DisplayState& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DisplayState& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayState");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DisplayState{";
    _aidl_os << "layerStack: " << ::android::internal::ToString(layerStack);
    _aidl_os << ", orientation: " << ::android::internal::ToString(orientation);
    _aidl_os << ", layerStackSpaceRect: " << ::android::internal::ToString(layerStackSpaceRect);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class DisplayState
}  // namespace gui
}  // namespace android
