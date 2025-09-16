/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/WindowInfosListenerInfo.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/WindowInfosListenerInfo.aidl ./out ./out/android/gui/WindowInfosListenerInfo.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/gui/IWindowInfosPublisher.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>

namespace android::gui {
class IWindowInfosPublisher;
}  // namespace android::gui
namespace android {
namespace gui {
class WindowInfosListenerInfo : public ::android::Parcelable {
public:
  int64_t listenerId = 0L;
  ::android::sp<::android::gui::IWindowInfosPublisher> windowInfosPublisher;
  inline bool operator==(const WindowInfosListenerInfo& _rhs) const {
    return std::tie(listenerId, windowInfosPublisher) == std::tie(_rhs.listenerId, _rhs.windowInfosPublisher);
  }
  inline bool operator<(const WindowInfosListenerInfo& _rhs) const {
    return std::tie(listenerId, windowInfosPublisher) < std::tie(_rhs.listenerId, _rhs.windowInfosPublisher);
  }
  inline bool operator!=(const WindowInfosListenerInfo& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const WindowInfosListenerInfo& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const WindowInfosListenerInfo& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const WindowInfosListenerInfo& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.WindowInfosListenerInfo");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "WindowInfosListenerInfo{";
    _aidl_os << "listenerId: " << ::android::internal::ToString(listenerId);
    _aidl_os << ", windowInfosPublisher: " << ::android::internal::ToString(windowInfosPublisher);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class WindowInfosListenerInfo
}  // namespace gui
}  // namespace android
