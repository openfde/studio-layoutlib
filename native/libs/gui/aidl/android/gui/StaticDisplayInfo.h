/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/StaticDisplayInfo.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/StaticDisplayInfo.aidl ./out ./out/android/gui/StaticDisplayInfo.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/gui/DeviceProductInfo.h>
#include <android/gui/DisplayConnectionType.h>
#include <android/gui/Rotation.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <optional>
#include <tuple>
#include <utils/String16.h>

namespace android::gui {
class DeviceProductInfo;
}  // namespace android::gui
namespace android {
namespace gui {
class StaticDisplayInfo : public ::android::Parcelable {
public:
  ::android::gui::DisplayConnectionType connectionType = ::android::gui::DisplayConnectionType::Internal;
  float density = 0.000000f;
  bool secure = false;
  ::std::optional<::android::gui::DeviceProductInfo> deviceProductInfo;
  ::android::gui::Rotation installOrientation = ::android::gui::Rotation::Rotation0;
  inline bool operator==(const StaticDisplayInfo& _rhs) const {
    return std::tie(connectionType, density, secure, deviceProductInfo, installOrientation) == std::tie(_rhs.connectionType, _rhs.density, _rhs.secure, _rhs.deviceProductInfo, _rhs.installOrientation);
  }
  inline bool operator<(const StaticDisplayInfo& _rhs) const {
    return std::tie(connectionType, density, secure, deviceProductInfo, installOrientation) < std::tie(_rhs.connectionType, _rhs.density, _rhs.secure, _rhs.deviceProductInfo, _rhs.installOrientation);
  }
  inline bool operator!=(const StaticDisplayInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const StaticDisplayInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const StaticDisplayInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const StaticDisplayInfo& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.StaticDisplayInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "StaticDisplayInfo{";
    _aidl_os << "connectionType: " << ::android::internal::ToString(connectionType);
    _aidl_os << ", density: " << ::android::internal::ToString(density);
    _aidl_os << ", secure: " << ::android::internal::ToString(secure);
    _aidl_os << ", deviceProductInfo: " << ::android::internal::ToString(deviceProductInfo);
    _aidl_os << ", installOrientation: " << ::android::internal::ToString(installOrientation);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class StaticDisplayInfo
}  // namespace gui
}  // namespace android
