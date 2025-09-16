/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/DisplayPrimaries.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/DisplayPrimaries.aidl ./out ./out/android/gui/DisplayPrimaries.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/gui/DisplayPrimaries.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace gui {
class DisplayPrimaries : public ::android::Parcelable {
public:
  class CieXyz : public ::android::Parcelable {
  public:
    float X = 0.000000f;
    float Y = 0.000000f;
    float Z = 0.000000f;
    inline bool operator==(const CieXyz& _rhs) const {
      return std::tie(X, Y, Z) == std::tie(_rhs.X, _rhs.Y, _rhs.Z);
    }
    inline bool operator<(const CieXyz& _rhs) const {
      return std::tie(X, Y, Z) < std::tie(_rhs.X, _rhs.Y, _rhs.Z);
    }
    inline bool operator!=(const CieXyz& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const CieXyz& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const CieXyz& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const CieXyz& _rhs) const {
      return !(_rhs < *this);
    }

    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayPrimaries.CieXyz");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "CieXyz{";
      _aidl_os << "X: " << ::android::internal::ToString(X);
      _aidl_os << ", Y: " << ::android::internal::ToString(Y);
      _aidl_os << ", Z: " << ::android::internal::ToString(Z);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class CieXyz
  ::android::gui::DisplayPrimaries::CieXyz red;
  ::android::gui::DisplayPrimaries::CieXyz green;
  ::android::gui::DisplayPrimaries::CieXyz blue;
  ::android::gui::DisplayPrimaries::CieXyz white;
  inline bool operator==(const DisplayPrimaries& _rhs) const {
    return std::tie(red, green, blue, white) == std::tie(_rhs.red, _rhs.green, _rhs.blue, _rhs.white);
  }
  inline bool operator<(const DisplayPrimaries& _rhs) const {
    return std::tie(red, green, blue, white) < std::tie(_rhs.red, _rhs.green, _rhs.blue, _rhs.white);
  }
  inline bool operator!=(const DisplayPrimaries& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DisplayPrimaries& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DisplayPrimaries& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DisplayPrimaries& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayPrimaries");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DisplayPrimaries{";
    _aidl_os << "red: " << ::android::internal::ToString(red);
    _aidl_os << ", green: " << ::android::internal::ToString(green);
    _aidl_os << ", blue: " << ::android::internal::ToString(blue);
    _aidl_os << ", white: " << ::android::internal::ToString(white);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class DisplayPrimaries
}  // namespace gui
}  // namespace android
