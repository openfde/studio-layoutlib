/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/DynamicDisplayInfo.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/DynamicDisplayInfo.aidl ./out ./out/android/gui/DynamicDisplayInfo.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/gui/DisplayMode.h>
#include <android/gui/HdrCapabilities.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android::gui {
class DisplayMode;
class HdrCapabilities;
}  // namespace android::gui
namespace android {
namespace gui {
class DynamicDisplayInfo : public ::android::Parcelable {
public:
  ::std::vector<::android::gui::DisplayMode> supportedDisplayModes;
  int32_t activeDisplayModeId = 0;
  float renderFrameRate = 0.000000f;
  ::std::vector<int32_t> supportedColorModes;
  int32_t activeColorMode = 0;
  ::android::gui::HdrCapabilities hdrCapabilities;
  bool autoLowLatencyModeSupported = false;
  bool gameContentTypeSupported = false;
  int32_t preferredBootDisplayMode = 0;
  inline bool operator==(const DynamicDisplayInfo& _rhs) const {
    return std::tie(supportedDisplayModes, activeDisplayModeId, renderFrameRate, supportedColorModes, activeColorMode, hdrCapabilities, autoLowLatencyModeSupported, gameContentTypeSupported, preferredBootDisplayMode) == std::tie(_rhs.supportedDisplayModes, _rhs.activeDisplayModeId, _rhs.renderFrameRate, _rhs.supportedColorModes, _rhs.activeColorMode, _rhs.hdrCapabilities, _rhs.autoLowLatencyModeSupported, _rhs.gameContentTypeSupported, _rhs.preferredBootDisplayMode);
  }
  inline bool operator<(const DynamicDisplayInfo& _rhs) const {
    return std::tie(supportedDisplayModes, activeDisplayModeId, renderFrameRate, supportedColorModes, activeColorMode, hdrCapabilities, autoLowLatencyModeSupported, gameContentTypeSupported, preferredBootDisplayMode) < std::tie(_rhs.supportedDisplayModes, _rhs.activeDisplayModeId, _rhs.renderFrameRate, _rhs.supportedColorModes, _rhs.activeColorMode, _rhs.hdrCapabilities, _rhs.autoLowLatencyModeSupported, _rhs.gameContentTypeSupported, _rhs.preferredBootDisplayMode);
  }
  inline bool operator!=(const DynamicDisplayInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DynamicDisplayInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DynamicDisplayInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DynamicDisplayInfo& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DynamicDisplayInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DynamicDisplayInfo{";
    _aidl_os << "supportedDisplayModes: " << ::android::internal::ToString(supportedDisplayModes);
    _aidl_os << ", activeDisplayModeId: " << ::android::internal::ToString(activeDisplayModeId);
    _aidl_os << ", renderFrameRate: " << ::android::internal::ToString(renderFrameRate);
    _aidl_os << ", supportedColorModes: " << ::android::internal::ToString(supportedColorModes);
    _aidl_os << ", activeColorMode: " << ::android::internal::ToString(activeColorMode);
    _aidl_os << ", hdrCapabilities: " << ::android::internal::ToString(hdrCapabilities);
    _aidl_os << ", autoLowLatencyModeSupported: " << ::android::internal::ToString(autoLowLatencyModeSupported);
    _aidl_os << ", gameContentTypeSupported: " << ::android::internal::ToString(gameContentTypeSupported);
    _aidl_os << ", preferredBootDisplayMode: " << ::android::internal::ToString(preferredBootDisplayMode);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class DynamicDisplayInfo
}  // namespace gui
}  // namespace android
