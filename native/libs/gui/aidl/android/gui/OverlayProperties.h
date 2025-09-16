/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/OverlayProperties.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/OverlayProperties.aidl ./out ./out/android/gui/OverlayProperties.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <android/gui/OverlayProperties.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>
#include <vector>

namespace android {
namespace gui {
class OverlayProperties : public ::android::Parcelable {
public:
  class SupportedBufferCombinations : public ::android::Parcelable {
  public:
    ::std::vector<int32_t> pixelFormats;
    ::std::vector<int32_t> standards;
    ::std::vector<int32_t> transfers;
    ::std::vector<int32_t> ranges;
    inline bool operator==(const SupportedBufferCombinations& _rhs) const {
      return std::tie(pixelFormats, standards, transfers, ranges) == std::tie(_rhs.pixelFormats, _rhs.standards, _rhs.transfers, _rhs.ranges);
    }
    inline bool operator<(const SupportedBufferCombinations& _rhs) const {
      return std::tie(pixelFormats, standards, transfers, ranges) < std::tie(_rhs.pixelFormats, _rhs.standards, _rhs.transfers, _rhs.ranges);
    }
    inline bool operator!=(const SupportedBufferCombinations& _rhs) const {
      return !(*this == _rhs);
    }
    inline bool operator>(const SupportedBufferCombinations& _rhs) const {
      return _rhs < *this;
    }
    inline bool operator>=(const SupportedBufferCombinations& _rhs) const {
      return !(*this < _rhs);
    }
    inline bool operator<=(const SupportedBufferCombinations& _rhs) const {
      return !(_rhs < *this);
    }

    ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
    ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
    static const ::android::String16& getParcelableDescriptor() {
      static const ::android::StaticString16 DESCRIPTOR (u"android.gui.OverlayProperties.SupportedBufferCombinations");
      return DESCRIPTOR;
    }
    inline std::string toString() const {
      std::ostringstream _aidl_os;
      _aidl_os << "SupportedBufferCombinations{";
      _aidl_os << "pixelFormats: " << ::android::internal::ToString(pixelFormats);
      _aidl_os << ", standards: " << ::android::internal::ToString(standards);
      _aidl_os << ", transfers: " << ::android::internal::ToString(transfers);
      _aidl_os << ", ranges: " << ::android::internal::ToString(ranges);
      _aidl_os << "}";
      return _aidl_os.str();
    }
  };  // class SupportedBufferCombinations
  ::std::vector<::android::gui::OverlayProperties::SupportedBufferCombinations> combinations;
  bool supportMixedColorSpaces = false;
  inline bool operator==(const OverlayProperties& _rhs) const {
    return std::tie(combinations, supportMixedColorSpaces) == std::tie(_rhs.combinations, _rhs.supportMixedColorSpaces);
  }
  inline bool operator<(const OverlayProperties& _rhs) const {
    return std::tie(combinations, supportMixedColorSpaces) < std::tie(_rhs.combinations, _rhs.supportMixedColorSpaces);
  }
  inline bool operator!=(const OverlayProperties& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const OverlayProperties& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const OverlayProperties& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const OverlayProperties& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.OverlayProperties");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "OverlayProperties{";
    _aidl_os << "combinations: " << ::android::internal::ToString(combinations);
    _aidl_os << ", supportMixedColorSpaces: " << ::android::internal::ToString(supportMixedColorSpaces);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class OverlayProperties
}  // namespace gui
}  // namespace android
