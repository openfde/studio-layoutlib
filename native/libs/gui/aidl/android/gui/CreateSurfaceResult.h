/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/CreateSurfaceResult.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/CreateSurfaceResult.aidl ./out ./out/android/gui/CreateSurfaceResult.cpp
 */
#pragma once

#include <android/binder_to_string.h>
#include <binder/IBinder.h>
#include <binder/Parcel.h>
#include <binder/Status.h>
#include <cstdint>
#include <tuple>
#include <utils/String16.h>

namespace android {
namespace gui {
class CreateSurfaceResult : public ::android::Parcelable {
public:
  ::android::sp<::android::IBinder> handle;
  int32_t layerId = 0;
  ::android::String16 layerName;
  int32_t transformHint = 0;
  inline bool operator==(const CreateSurfaceResult& _rhs) const {
    return std::tie(handle, layerId, layerName, transformHint) == std::tie(_rhs.handle, _rhs.layerId, _rhs.layerName, _rhs.transformHint);
  }
  inline bool operator<(const CreateSurfaceResult& _rhs) const {
    return std::tie(handle, layerId, layerName, transformHint) < std::tie(_rhs.handle, _rhs.layerId, _rhs.layerName, _rhs.transformHint);
  }
  inline bool operator!=(const CreateSurfaceResult& _rhs) const {
    return !(*this == _rhs);
  }
  inline bool operator>(const CreateSurfaceResult& _rhs) const {
    return _rhs < *this;
  }
  inline bool operator>=(const CreateSurfaceResult& _rhs) const {
    return !(*this < _rhs);
  }
  inline bool operator<=(const CreateSurfaceResult& _rhs) const {
    return !(_rhs < *this);
  }

  ::android::status_t readFromParcel(const ::android::Parcel* _aidl_parcel) final;
  ::android::status_t writeToParcel(::android::Parcel* _aidl_parcel) const final;
  static const ::android::String16& getParcelableDescriptor() {
    static const ::android::StaticString16 DESCRIPTOR (u"android.gui.CreateSurfaceResult");
    return DESCRIPTOR;
  }
  inline std::string toString() const {
    std::ostringstream _aidl_os;
    _aidl_os << "CreateSurfaceResult{";
    _aidl_os << "handle: " << ::android::internal::ToString(handle);
    _aidl_os << ", layerId: " << ::android::internal::ToString(layerId);
    _aidl_os << ", layerName: " << ::android::internal::ToString(layerName);
    _aidl_os << ", transformHint: " << ::android::internal::ToString(transformHint);
    _aidl_os << "}";
    return _aidl_os.str();
  }
};  // class CreateSurfaceResult
}  // namespace gui
}  // namespace android
