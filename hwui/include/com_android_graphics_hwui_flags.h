#pragma once



#ifdef __cplusplus

#include <memory>

namespace com::android::graphics::hwui::flags {

class flag_provider_interface {
public:
    virtual ~flag_provider_interface() = default;
    virtual bool animate_hdr_transitions() = 0;
    virtual bool clip_shader() = 0;
    virtual bool clip_surfaceviews() = 0;
    virtual bool gainmap_animations() = 0;
    virtual bool gainmap_constructor_with_metadata() = 0;
    virtual bool hdr_10bit_plus() = 0;
    virtual bool high_contrast_text_luminance() = 0;
    virtual bool high_contrast_text_small_text_rect() = 0;
    virtual bool limited_hdr() = 0;
    virtual bool matrix_44() = 0;
    virtual bool requested_formats_v() = 0;
};

extern std::unique_ptr<flag_provider_interface> provider_;


inline bool animate_hdr_transitions() {
    return false;
}
inline bool clip_shader() {
    return false;
}
inline bool clip_surfaceviews() {
    return false;
}
inline bool gainmap_animations() {
    return false;
}
inline bool gainmap_constructor_with_metadata() {
    return false;
}
inline bool hdr_10bit_plus() {
    return false;
}
inline bool high_contrast_text_luminance() {
    return false;
}
inline bool high_contrast_text_small_text_rect() {
    return false;
}
inline bool limited_hdr() {
    return false;
}
inline bool matrix_44() {
    return false;
}
inline bool requested_formats_v() {
    return false;
}

}

extern "C" {
#endif // __cplusplus


bool com_android_graphics_hwui_flags_animate_hdr_transitions();
bool com_android_graphics_hwui_flags_clip_shader();
bool com_android_graphics_hwui_flags_clip_surfaceviews();
bool com_android_graphics_hwui_flags_gainmap_animations();
bool com_android_graphics_hwui_flags_gainmap_constructor_with_metadata();
bool com_android_graphics_hwui_flags_hdr_10bit_plus();
bool com_android_graphics_hwui_flags_high_contrast_text_luminance();
bool com_android_graphics_hwui_flags_high_contrast_text_small_text_rect();
bool com_android_graphics_hwui_flags_limited_hdr();
bool com_android_graphics_hwui_flags_matrix_44();
bool com_android_graphics_hwui_flags_requested_formats_v();

#ifdef __cplusplus
} // extern "C"
#endif

