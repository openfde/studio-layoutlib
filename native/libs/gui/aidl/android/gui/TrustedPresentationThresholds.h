/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/TrustedPresentationThresholds.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/TrustedPresentationThresholds.aidl ./out ./out/android/gui/TrustedPresentationThresholds.cpp
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
class TrustedPresentationThresholds : public ::android::Parcelable {
public:
  float minAlpha = -1.000000f;
  float minFractionRendered = -1.000000f;
  int32_t stabilityRequirementMs = 0;
  inline bool operator==(const TrustedPresentationThresholds& _rhs) const {
    return std::tie(minAlpha, minFractionRendered, stabilityRequirementMs) == std::tie(_rhs.minAlpha, _rhs.minFractionRendered, _rhs.stabilityRequirementMs);
  }
  inline bool operator<(const TrustedPresentationThresholds& _rhs) const {
    return std::tie(minAlpha, minFractionRendered, stabilityRequirementMs) < std::tie(_rhs.minAlpha, _rhs.minFractionRendered, _rhs.stabilityRequirementMs);
  }
  inline bool operator!=(const TrustedPresentationThresholds& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const TrustedPresentationThresholds& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const TrustedPresentationThresholds& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const TrustedPresentationThresholds& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.TrustedPresentationThresholds");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "TrustedPresentationThresholds{";
    _aidl_os << "minAlpha: " << ::android::internal::ToString(minAlpha);
    _aidl_os << ", minFractionRendered: " << ::android::internal::ToString(minFractionRendered);
    _aidl_os << ", stabilityRequirementMs: " << ::android::internal::ToString(stabilityRequirementMs);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class TrustedPresentationThresholds
}  // namespace gui
}  // namespace android
