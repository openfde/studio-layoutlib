/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/HdrConversionStrategy.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/HdrConversionStrategy.aidl ./out ./out/android/gui/HdrConversionStrategy.cpp
 */
#include <android/gui/HdrConversionStrategy.h>

namespace android {
namespace gui {
::android::status_t HdrConversionStrategy::readFromParcel(const ::android::Parcel* _aidl_parcel) {
  ::android::status_t _aidl_ret_status;
  int32_t _aidl_tag;
  if ((_aidl_ret_status = _aidl_parcel->readInt32(&_aidl_tag)) != ::android::OK) return _aidl_ret_status;
  switch (static_cast<Tag>(_aidl_tag)) {
  case passthrough: {
    bool _aidl_value;
    if ((_aidl_ret_status = _aidl_parcel->readBool(&_aidl_value)) != ::android::OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<bool>) {
      set<passthrough>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<passthrough>(std::move(_aidl_value));
    }
    return ::android::OK; }
  case autoAllowedHdrTypes: {
    ::std::vector<int32_t> _aidl_value;
    if ((_aidl_ret_status = _aidl_parcel->readInt32Vector(&_aidl_value)) != ::android::OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<::std::vector<int32_t>>) {
      set<autoAllowedHdrTypes>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<autoAllowedHdrTypes>(std::move(_aidl_value));
    }
    return ::android::OK; }
  case forceHdrConversion: {
    int32_t _aidl_value;
    if ((_aidl_ret_status = _aidl_parcel->readInt32(&_aidl_value)) != ::android::OK) return _aidl_ret_status;
    if constexpr (std::is_trivially_copyable_v<int32_t>) {
      set<forceHdrConversion>(_aidl_value);
    } else {
      // NOLINTNEXTLINE(performance-move-const-arg)
      set<forceHdrConversion>(std::move(_aidl_value));
    }
    return ::android::OK; }
  }
  return ::android::BAD_VALUE;
}
::android::status_t HdrConversionStrategy::writeToParcel(::android::Parcel* _aidl_parcel) const {
  ::android::status_t _aidl_ret_status = _aidl_parcel->writeInt32(static_cast<int32_t>(getTag()));
  if (_aidl_ret_status != ::android::OK) return _aidl_ret_status;
  switch (getTag()) {
  case passthrough: return _aidl_parcel->writeBool(get<passthrough>());
  case autoAllowedHdrTypes: return _aidl_parcel->writeInt32Vector(get<autoAllowedHdrTypes>());
  case forceHdrConversion: return _aidl_parcel->writeInt32(get<forceHdrConversion>());
  }
  __assert2(__FILE__, __LINE__, __PRETTY_FUNCTION__, "can't reach here");
}
}  // namespace gui
}  // namespace android
