/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IFpsListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IFpsListener.aidl ./out ./out/android/gui/IFpsListener.cpp
 */
#include <android/gui/IFpsListener.h>
#include <android/gui/BpFpsListener.h>
namespace android {
namespace gui {
DO_NOT_DIRECTLY_USE_ME_IMPLEMENT_META_INTERFACE(FpsListener, "android.gui.IFpsListener")
}  // namespace gui
}  // namespace android
#include <android/gui/BpFpsListener.h>
#include <android/gui/BnFpsListener.h>
#include <binder/Parcel.h>

namespace android {
namespace gui {

BpFpsListener::BpFpsListener(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IFpsListener>(_aidl_impl){
}

::android::binder::Status BpFpsListener::onFpsReported(float fps) {
  ::android::Parcel _aidl_data;
  _aidl_data.markForBinder(remoteStrong());
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  ::android::binder::ScopedTrace _aidl_trace(ATRACE_TAG_AIDL, "AIDL::cpp::IFpsListener::onFpsReported::cppClient");
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeFloat(fps);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(BnFpsListener::TRANSACTION_onFpsReported, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IFpsListener::getDefaultImpl()) [[unlikely]] {
     return IFpsListener::getDefaultImpl()->onFpsReported(fps);
  }
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_error:
  _aidl_status.setFromStatusT(_aidl_ret_status);
  return _aidl_status;
}

}  // namespace gui
}  // namespace android
#include <android/gui/BnFpsListener.h>
#include <binder/Parcel.h>
#include <binder/Stability.h>

namespace android {
namespace gui {

BnFpsListener::BnFpsListener()
{
  ::android::internal::Stability::markCompilationUnit(this);
}

::android::status_t BnFpsListener::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case BnFpsListener::TRANSACTION_onFpsReported:
  {
    float in_fps;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::ScopedTrace _aidl_trace(ATRACE_TAG_AIDL, "AIDL::cpp::IFpsListener::onFpsReported::cppServer");
    _aidl_ret_status = _aidl_data.readFloat(&in_fps);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (auto st = _aidl_data.enforceNoDataAvail(); !st.isOk()) {
      _aidl_ret_status = st.writeToParcel(_aidl_reply);
      break;
    }
    ::android::binder::Status _aidl_status(onFpsReported(in_fps));
  }
  break;
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
