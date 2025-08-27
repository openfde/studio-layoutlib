#pragma once



#ifdef __cplusplus

#include <memory>

namespace com::android::input::flags {

class flag_provider_interface {
public:
    virtual ~flag_provider_interface() = default;
    virtual bool a11y_crash_on_inconsistent_event_stream() = 0;
    virtual void a11y_crash_on_inconsistent_event_stream(bool val) = 0;
    virtual bool disable_reject_touch_on_stylus_hover() = 0;
    virtual void disable_reject_touch_on_stylus_hover(bool val) = 0;
    virtual bool enable_gestures_library_timer_provider() = 0;
    virtual void enable_gestures_library_timer_provider(bool val) = 0;
    virtual bool enable_inbound_event_verification() = 0;
    virtual void enable_inbound_event_verification(bool val) = 0;
    virtual bool enable_input_event_tracing() = 0;
    virtual void enable_input_event_tracing(bool val) = 0;
    virtual bool enable_input_filter_rust_impl() = 0;
    virtual void enable_input_filter_rust_impl(bool val) = 0;
    virtual bool enable_multi_device_input() = 0;
    virtual void enable_multi_device_input(bool val) = 0;
    virtual bool enable_new_mouse_pointer_ballistics() = 0;
    virtual void enable_new_mouse_pointer_ballistics(bool val) = 0;
    virtual bool enable_outbound_event_verification() = 0;
    virtual void enable_outbound_event_verification(bool val) = 0;
    virtual bool enable_pointer_choreographer() = 0;
    virtual void enable_pointer_choreographer(bool val) = 0;
    virtual bool enable_touchpad_fling_stop() = 0;
    virtual void enable_touchpad_fling_stop(bool val) = 0;
    virtual bool enable_touchpad_typing_palm_rejection() = 0;
    virtual void enable_touchpad_typing_palm_rejection(bool val) = 0;
    virtual bool enable_v2_touchpad_typing_palm_rejection() = 0;
    virtual void enable_v2_touchpad_typing_palm_rejection(bool val) = 0;
    virtual bool input_device_view_behavior_api() = 0;
    virtual void input_device_view_behavior_api(bool val) = 0;
    virtual bool override_key_behavior_permission_apis() = 0;
    virtual void override_key_behavior_permission_apis(bool val) = 0;
    virtual bool rate_limit_user_activity_poke_in_dispatcher() = 0;
    virtual void rate_limit_user_activity_poke_in_dispatcher(bool val) = 0;
    virtual bool remove_pointer_event_tracking_in_wm() = 0;
    virtual void remove_pointer_event_tracking_in_wm(bool val) = 0;
    virtual bool report_palms_to_gestures_library() = 0;
    virtual void report_palms_to_gestures_library(bool val) = 0;
    virtual void reset_flags() {}
};

extern std::unique_ptr<flag_provider_interface> provider_;


inline bool a11y_crash_on_inconsistent_event_stream() {
    return provider_->a11y_crash_on_inconsistent_event_stream();
}
inline void a11y_crash_on_inconsistent_event_stream(bool val) {
    provider_->a11y_crash_on_inconsistent_event_stream(val);
}
inline bool disable_reject_touch_on_stylus_hover() {
    return provider_->disable_reject_touch_on_stylus_hover();
}
inline void disable_reject_touch_on_stylus_hover(bool val) {
    provider_->disable_reject_touch_on_stylus_hover(val);
}
inline bool enable_gestures_library_timer_provider() {
    return provider_->enable_gestures_library_timer_provider();
}
inline void enable_gestures_library_timer_provider(bool val) {
    provider_->enable_gestures_library_timer_provider(val);
}
inline bool enable_inbound_event_verification() {
    return provider_->enable_inbound_event_verification();
}
inline void enable_inbound_event_verification(bool val) {
    provider_->enable_inbound_event_verification(val);
}
inline bool enable_input_event_tracing() {
    return provider_->enable_input_event_tracing();
}
inline void enable_input_event_tracing(bool val) {
    provider_->enable_input_event_tracing(val);
}
inline bool enable_input_filter_rust_impl() {
    return provider_->enable_input_filter_rust_impl();
}
inline void enable_input_filter_rust_impl(bool val) {
    provider_->enable_input_filter_rust_impl(val);
}
inline bool enable_multi_device_input() {
    return provider_->enable_multi_device_input();
}
inline void enable_multi_device_input(bool val) {
    provider_->enable_multi_device_input(val);
}
inline bool enable_new_mouse_pointer_ballistics() {
    return provider_->enable_new_mouse_pointer_ballistics();
}
inline void enable_new_mouse_pointer_ballistics(bool val) {
    provider_->enable_new_mouse_pointer_ballistics(val);
}
inline bool enable_outbound_event_verification() {
    return provider_->enable_outbound_event_verification();
}
inline void enable_outbound_event_verification(bool val) {
    provider_->enable_outbound_event_verification(val);
}
inline bool enable_pointer_choreographer() {
    return provider_->enable_pointer_choreographer();
}
inline void enable_pointer_choreographer(bool val) {
    provider_->enable_pointer_choreographer(val);
}
inline bool enable_touchpad_fling_stop() {
    return provider_->enable_touchpad_fling_stop();
}
inline void enable_touchpad_fling_stop(bool val) {
    provider_->enable_touchpad_fling_stop(val);
}
inline bool enable_touchpad_typing_palm_rejection() {
    return provider_->enable_touchpad_typing_palm_rejection();
}
inline void enable_touchpad_typing_palm_rejection(bool val) {
    provider_->enable_touchpad_typing_palm_rejection(val);
}
inline bool enable_v2_touchpad_typing_palm_rejection() {
    return provider_->enable_v2_touchpad_typing_palm_rejection();
}
inline void enable_v2_touchpad_typing_palm_rejection(bool val) {
    provider_->enable_v2_touchpad_typing_palm_rejection(val);
}
inline bool input_device_view_behavior_api() {
    return provider_->input_device_view_behavior_api();
}
inline void input_device_view_behavior_api(bool val) {
    provider_->input_device_view_behavior_api(val);
}
inline bool override_key_behavior_permission_apis() {
    return provider_->override_key_behavior_permission_apis();
}
inline void override_key_behavior_permission_apis(bool val) {
    provider_->override_key_behavior_permission_apis(val);
}
inline bool rate_limit_user_activity_poke_in_dispatcher() {
    return provider_->rate_limit_user_activity_poke_in_dispatcher();
}
inline void rate_limit_user_activity_poke_in_dispatcher(bool val) {
    provider_->rate_limit_user_activity_poke_in_dispatcher(val);
}
inline bool remove_pointer_event_tracking_in_wm() {
    return provider_->remove_pointer_event_tracking_in_wm();
}
inline void remove_pointer_event_tracking_in_wm(bool val) {
    provider_->remove_pointer_event_tracking_in_wm(val);
}
inline bool report_palms_to_gestures_library() {
    return provider_->report_palms_to_gestures_library();
}
inline void report_palms_to_gestures_library(bool val) {
    provider_->report_palms_to_gestures_library(val);
}
inline void reset_flags() {
    return provider_->reset_flags();
}

}

extern "C" {
#endif // __cplusplus


bool com_android_input_flags_a11y_crash_on_inconsistent_event_stream();
void set_com_android_input_flags_a11y_crash_on_inconsistent_event_stream(bool val);
bool com_android_input_flags_disable_reject_touch_on_stylus_hover();
void set_com_android_input_flags_disable_reject_touch_on_stylus_hover(bool val);
bool com_android_input_flags_enable_gestures_library_timer_provider();
void set_com_android_input_flags_enable_gestures_library_timer_provider(bool val);
bool com_android_input_flags_enable_inbound_event_verification();
void set_com_android_input_flags_enable_inbound_event_verification(bool val);
bool com_android_input_flags_enable_input_event_tracing();
void set_com_android_input_flags_enable_input_event_tracing(bool val);
bool com_android_input_flags_enable_input_filter_rust_impl();
void set_com_android_input_flags_enable_input_filter_rust_impl(bool val);
bool com_android_input_flags_enable_multi_device_input();
void set_com_android_input_flags_enable_multi_device_input(bool val);
bool com_android_input_flags_enable_new_mouse_pointer_ballistics();
void set_com_android_input_flags_enable_new_mouse_pointer_ballistics(bool val);
bool com_android_input_flags_enable_outbound_event_verification();
void set_com_android_input_flags_enable_outbound_event_verification(bool val);
bool com_android_input_flags_enable_pointer_choreographer();
void set_com_android_input_flags_enable_pointer_choreographer(bool val);
bool com_android_input_flags_enable_touchpad_fling_stop();
void set_com_android_input_flags_enable_touchpad_fling_stop(bool val);
bool com_android_input_flags_enable_touchpad_typing_palm_rejection();
void set_com_android_input_flags_enable_touchpad_typing_palm_rejection(bool val);
bool com_android_input_flags_enable_v2_touchpad_typing_palm_rejection();
void set_com_android_input_flags_enable_v2_touchpad_typing_palm_rejection(bool val);
bool com_android_input_flags_input_device_view_behavior_api();
void set_com_android_input_flags_input_device_view_behavior_api(bool val);
bool com_android_input_flags_override_key_behavior_permission_apis();
void set_com_android_input_flags_override_key_behavior_permission_apis(bool val);
bool com_android_input_flags_rate_limit_user_activity_poke_in_dispatcher();
void set_com_android_input_flags_rate_limit_user_activity_poke_in_dispatcher(bool val);
bool com_android_input_flags_remove_pointer_event_tracking_in_wm();
void set_com_android_input_flags_remove_pointer_event_tracking_in_wm(bool val);
bool com_android_input_flags_report_palms_to_gestures_library();
void set_com_android_input_flags_report_palms_to_gestures_library(bool val);
void com_android_input_flags_reset_flags();

#ifdef __cplusplus
} // extern "C"
#endif

