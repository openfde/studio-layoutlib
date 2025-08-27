/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosReportedListener.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/IWindowInfosReportedListener.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosReportedListener.cpp
 */
#include <android/gui/IWindowInfosReportedListener.h>
#include <android/gui/BpWindowInfosReportedListener.h>
namespace android {
namespace gui {
DO_NOT_DIRECTLY_USE_ME_IMPLEMENT_META_INTERFACE(WindowInfosReportedListener, "android.gui.IWindowInfosReportedListener")
}  // namespace gui
}  // namespace android
#include <android/gui/BpWindowInfosReportedListener.h>
#include <android/gui/BnWindowInfosReportedListener.h>
#include <binder/Parcel.h>

namespace android {
namespace gui {

BpWindowInfosReportedListener::BpWindowInfosReportedListener(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IWindowInfosReportedListener>(_aidl_impl){
}

::android::binder::Status BpWindowInfosReportedListener::onWindowInfosReported() {
  ::android::Parcel _aidl_data;
  _aidl_data.markForBinder(remoteStrong());
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  ::android::binder::ScopedTrace _aidl_trace(ATRACE_TAG_AIDL, "AIDL::cpp::IWindowInfosReportedListener::onWindowInfosReported::cppClient");
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(BnWindowInfosReportedListener::TRANSACTION_onWindowInfosReported, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IWindowInfosReportedListener::getDefaultImpl()) [[unlikely]] {
     return IWindowInfosReportedListener::getDefaultImpl()->onWindowInfosReported();
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
#include <android/gui/BnWindowInfosReportedListener.h>
#include <binder/Parcel.h>
#include <binder/Stability.h>

namespace android {
namespace gui {

BnWindowInfosReportedListener::BnWindowInfosReportedListener()
{
  ::android::internal::Stability::markCompilationUnit(this);
}

::android::status_t BnWindowInfosReportedListener::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case BnWindowInfosReportedListener::TRANSACTION_onWindowInfosReported:
  {
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::ScopedTrace _aidl_trace(ATRACE_TAG_AIDL, "AIDL::cpp::IWindowInfosReportedListener::onWindowInfosReported::cppServer");
    ::android::binder::Status _aidl_status(onWindowInfosReported());
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
