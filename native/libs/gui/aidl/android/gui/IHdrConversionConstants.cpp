/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IHdrConversionConstants.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IHdrConversionConstants.aidl ./out ./out/android/gui/IHdrConversionConstants.cpp
 */
#include <android/gui/IHdrConversionConstants.h>
#include <android/gui/BpHdrConversionConstants.h>
namespace android {
namespace gui {
DO_NOT_DIRECTLY_USE_ME_IMPLEMENT_META_INTERFACE(HdrConversionConstants, "android.gui.IHdrConversionConstants")
}  // namespace gui
}  // namespace android
#include <android/gui/BpHdrConversionConstants.h>
#include <android/gui/BnHdrConversionConstants.h>
#include <binder/Parcel.h>

namespace android {
namespace gui {

BpHdrConversionConstants::BpHdrConversionConstants(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IHdrConversionConstants>(_aidl_impl){
}

}  // namespace gui
}  // namespace android
#include <android/gui/BnHdrConversionConstants.h>
#include <binder/Parcel.h>
#include <binder/Stability.h>

namespace android {
namespace gui {

BnHdrConversionConstants::BnHdrConversionConstants()
{
  ::android::internal::Stability::markCompilationUnit(this);
}

::android::status_t BnHdrConversionConstants::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  default:
  {
    _aidl_ret_status = ::android::BBinder::onTransact(_aidl_code, _aidl_data, _aidl_reply, _aidl_flags);
  }
  break;
  }
  if (_aidl_ret_status == ::android::UNEXPECTED_NULL) {
    _aidl_ret_status = ::android::binder::Status::fromExceptionCode(::android::binder::Status::EX_NULL_POINTER).writeOverParcel(_aidl_reply);
  }
  return _aidl_ret_status;
}

}  // namespace gui
}  // namespace android
