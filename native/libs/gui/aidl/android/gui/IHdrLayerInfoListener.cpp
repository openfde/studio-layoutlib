/*
 * This file is auto-generated.  DO NOT MODIFY.
 * Using: ./tools/out/bin/aidl-cpp -d./out/android/gui/IHdrLayerInfoListener.cpp.d --ninja -Iframeworks/native/libs/gui/aidl -Iframeworks/native/libs/gui -t --min_sdk_version=platform_apis frameworks/native/libs/gui/aidl/android/gui/IHdrLayerInfoListener.aidl ./out ./out/android/gui/IHdrLayerInfoListener.cpp
 */
#include <android/gui/IHdrLayerInfoListener.h>
#include <android/gui/BpHdrLayerInfoListener.h>
namespace android {
namespace gui {
DO_NOT_DIRECTLY_USE_ME_IMPLEMENT_META_INTERFACE(HdrLayerInfoListener, "android.gui.IHdrLayerInfoListener")
}  // namespace gui
}  // namespace android
#include <android/gui/BpHdrLayerInfoListener.h>
#include <android/gui/BnHdrLayerInfoListener.h>
#include <binder/Parcel.h>

namespace android {
namespace gui {

BpHdrLayerInfoListener::BpHdrLayerInfoListener(const ::android::sp<::android::IBinder>& _aidl_impl)
    : BpInterface<IHdrLayerInfoListener>(_aidl_impl){
}

::android::binder::Status BpHdrLayerInfoListener::onHdrLayerInfoChanged(int32_t numberOfHdrLayers, int32_t maxW, int32_t maxH, int32_t flags, float maxDesiredHdrSdrRatio) {
  ::android::Parcel _aidl_data;
  _aidl_data.markForBinder(remoteStrong());
  ::android::Parcel _aidl_reply;
  ::android::status_t _aidl_ret_status = ::android::OK;
  ::android::binder::Status _aidl_status;
  ::android::binder::ScopedTrace _aidl_trace(ATRACE_TAG_AIDL, "AIDL::cpp::IHdrLayerInfoListener::onHdrLayerInfoChanged::cppClient");
  _aidl_ret_status = _aidl_data.writeInterfaceToken(getInterfaceDescriptor());
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(numberOfHdrLayers);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(maxW);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(maxH);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeInt32(flags);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = _aidl_data.writeFloat(maxDesiredHdrSdrRatio);
  if (((_aidl_ret_status) != (::android::OK))) {
    goto _aidl_error;
  }
  _aidl_ret_status = remote()->transact(BnHdrLayerInfoListener::TRANSACTION_onHdrLayerInfoChanged, _aidl_data, &_aidl_reply, ::android::IBinder::FLAG_ONEWAY);
  if (_aidl_ret_status == ::android::UNKNOWN_TRANSACTION && IHdrLayerInfoListener::getDefaultImpl()) [[unlikely]] {
     return IHdrLayerInfoListener::getDefaultImpl()->onHdrLayerInfoChanged(numberOfHdrLayers, maxW, maxH, flags, maxDesiredHdrSdrRatio);
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
#include <android/gui/BnHdrLayerInfoListener.h>
#include <binder/Parcel.h>
#include <binder/Stability.h>

namespace android {
namespace gui {

BnHdrLayerInfoListener::BnHdrLayerInfoListener()
{
  ::android::internal::Stability::markCompilationUnit(this);
}

::android::status_t BnHdrLayerInfoListener::onTransact(uint32_t _aidl_code, const ::android::Parcel& _aidl_data, ::android::Parcel* _aidl_reply, uint32_t _aidl_flags) {
  ::android::status_t _aidl_ret_status = ::android::OK;
  switch (_aidl_code) {
  case BnHdrLayerInfoListener::TRANSACTION_onHdrLayerInfoChanged:
  {
    int32_t in_numberOfHdrLayers;
    int32_t in_maxW;
    int32_t in_maxH;
    int32_t in_flags;
    float in_maxDesiredHdrSdrRatio;
    if (!(_aidl_data.checkInterface(this))) {
      _aidl_ret_status = ::android::BAD_TYPE;
      break;
    }
    ::android::binder::ScopedTrace _aidl_trace(ATRACE_TAG_AIDL, "AIDL::cpp::IHdrLayerInfoListener::onHdrLayerInfoChanged::cppServer");
    _aidl_ret_status = _aidl_data.readInt32(&in_numberOfHdrLayers);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_maxW);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_maxH);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    _aidl_ret_status = _aidl_data.readInt32(&in_flags);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    _aidl_ret_status = _aidl_data.readFloat(&in_maxDesiredHdrSdrRatio);
    if (((_aidl_ret_status) != (::android::OK))) {
      break;
    }
    if (auto st = _aidl_data.enforceNoDataAvail(); !st.isOk()) {
      _aidl_ret_status = st.writeToParcel(_aidl_reply);
      break;
    }
    ::android::binder::Status _aidl_status(onHdrLayerInfoChanged(in_numberOfHdrLayers, in_maxW, in_maxH, in_flags, in_maxDesiredHdrSdrRatio));
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
