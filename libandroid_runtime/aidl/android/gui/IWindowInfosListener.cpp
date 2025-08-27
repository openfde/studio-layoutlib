/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: out/host/linux-x86/bin/aidl-cpp -dout/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosListener.cpp.d --ninja -t --min_sdk_version=platform_apis -Iframeworks/native/libs/gui/ frameworks/native/libs/gui/android/gui/IWindowInfosListener.aidl out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out out/soong/.temp/sbox/1dd1041b002549178b6c47f005fb58287741514c/out/android/gui/IWindowInfosListener.cpp
 */
#include <android/gui/IWindowInfosListener.h>
#include <android/gui/BpWindowInfosListener.h>
namespace android {
namespace gui {
DO_NOT_DIRECTLY_USE_ME_IMPLEMENT_META_INTERFACE(WindowInfosListener, "android.gui.IWindowInfosListener")
}  // namespace gui
}  // namespace android
#include <android/gui/BpWindowInfosListener.h>
#include <android/gui/BnWindowInfosListener.h>
#include <binder/Parcel.h>

namespace android {
namespace gui {

BpWindowInfosListener::BpWindowInfosListener(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IWindowInfosListener>(_aidl_impl){
}

::android::binder::Status BpWindowInfosListener::onWindowInfosChanged(const ::android::gui::WindowInfosUpdate& update) {
  ::android::Parcel _aidl_data;
  _aidl_data.markForBinder(remoteStrong());
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  ::android::binder::ScopedTrace _aidl_trace(ATRACE_TAG_AIDL, "AIDL::cpp::IWindowInfosListener::onWindowInfosChanged::cppClient");
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeParcelable(update);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(BnWindowInfosListener::TRANSACTION_onWindowInfosChanged, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IWindowInfosListener::getDefaultImpl()) [[unlikely]] {
     return IWindowInfosListener::getDefaultImpl()->onWindowInfosChanged(update);
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
#include <android/gui/BnWindowInfosListener.h>
#include <binder/Parcel.h>
#include <binder/Stability.h>

namespace android {
namespace gui {

BnWindowInfosListener::BnWindowInfosListener()
{
  ::android::internal::Stability::markCompilationUnit(this);
}

::android::status_t BnWindowInfosListener::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case BnWindowInfosListener::TRANSACTION_onWindowInfosChanged:
  {
    ::android::gui::WindowInfosUpdate in_update;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::ScopedTrace _aidl_trace(ATRACE_TAG_AIDL, "AIDL::cpp::IWindowInfosListener::onWindowInfosChanged::cppServer");
    _aidl_ret_status = _aidl_data.readParcelable(&in_update);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (auto st = _aidl_data.enforceNoDataAvail(); !st.isOk()) {
      _aidl_ret_status = st.writeToParcel(_aidl_reply);
      break;
    }
    ::android::binder::Status _aidl_status(onWindowInfosChanged(in_update));
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
