/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/DisplayModeSpecs.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/DisplayModeSpecs.aidl ./out ./out/android/gui/DisplayModeSpecs.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/gui/DisplayModeSpecs.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace gui {
class DisplayModeSpecs : public ::android::Parcelable {
public:
  class RefreshRateRanges : public ::android::Parcelable {
  public:
    class RefreshRateRange : public ::android::Parcelable {
    public:
      float min = 0.000000f;
      float max = 0.000000f;
      inline bool operator==(const RefreshRateRange& _rhs) const {
        return std::tie(min, max) == std::tie(_rhs.min, _rhs.max);
      }
      inline bool operator<(const RefreshRateRange& _rhs) const {
        return std::tie(min, max) < std::tie(_rhs.min, _rhs.max);
      }
      inline bool operator!=(const RefreshRateRange& _rhs) const {
        return !(*this == _rhs);
      }
      inline bool operator>(const RefreshRateRange& _rhs) const {
        return _rhs < *this;
      }
      inline bool operator>=(const RefreshRateRange& _rhs) const {
        return !(*this < _rhs);
      }
      inline bool operator<=(const RefreshRateRange& _rhs) const {
        return !(_rhs < *this);
      }

      ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
      ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
      static const ::android::String16& getParcelableDescriptor() {
        static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayModeSpecs.RefreshRateRanges.RefreshRateRange");
        return DESCRIPTOR;
      }
      inline std::string toString() const {
        std::ostringstream _aidl_os;
        _aidl_os << "RefreshRateRange{";
        _aidl_os << "min: " << ::android::internal::ToString(min);
        _aidl_os << ", max: " << ::android::internal::ToString(max);
        _aidl_os << "}";
        return _aidl_os.str();
      }
    };  // class RefreshRateRange
    ::android::gui::DisplayModeSpecs::RefreshRateRanges::RefreshRateRange physical;
    ::android::gui::DisplayModeSpecs::RefreshRateRanges::RefreshRateRange render;
    inline bool operator==(const RefreshRateRanges& _rhs) const {
      return std::tie(physical, render) == std::tie(_rhs.physical, _rhs.render);
    }
    inline bool operator<(const RefreshRateRanges& _rhs) const {
      return std::tie(physical, render) < std::tie(_rhs.physical, _rhs.render);
    }
    inline bool operator!=(const RefreshRateRanges& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const RefreshRateRanges& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const RefreshRateRanges& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const RefreshRateRanges& _rhs) const {
      return !(_rhs < *this);
    }

    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayModeSpecs.RefreshRateRanges");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "RefreshRateRanges{";
      _aidl_os << "physical: " << ::android::internal::ToString(physical);
      _aidl_os << ", render: " << ::android::internal::ToString(render);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class RefreshRateRanges
  int32_t defaultMode = 0;
  bool allowGroupSwitching = false;
  ::android::gui::DisplayModeSpecs::RefreshRateRanges primaryRanges;
  ::android::gui::DisplayModeSpecs::RefreshRateRanges appRequestRanges;
  inline bool operator==(const DisplayModeSpecs& _rhs) const {
    return std::tie(defaultMode, allowGroupSwitching, primaryRanges, appRequestRanges) == std::tie(_rhs.defaultMode, _rhs.allowGroupSwitching, _rhs.primaryRanges, _rhs.appRequestRanges);
  }
  inline bool operator<(const DisplayModeSpecs& _rhs) const {
    return std::tie(defaultMode, allowGroupSwitching, primaryRanges, appRequestRanges) < std::tie(_rhs.defaultMode, _rhs.allowGroupSwitching, _rhs.primaryRanges, _rhs.appRequestRanges);
  }
  inline bool operator!=(const DisplayModeSpecs& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const DisplayModeSpecs& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const DisplayModeSpecs& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const DisplayModeSpecs& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.DisplayModeSpecs");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "DisplayModeSpecs{";
    _aidl_os << "defaultMode: " << ::android::internal::ToString(defaultMode);
    _aidl_os << ", allowGroupSwitching: " << ::android::internal::ToString(allowGroupSwitching);
    _aidl_os << ", primaryRanges: " << ::android::internal::ToString(primaryRanges);
    _aidl_os << ", appRequestRanges: " << ::android::internal::ToString(appRequestRanges);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class DisplayModeSpecs
}  // namespace gui
}  // namespace android
