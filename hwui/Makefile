
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -std=c++20 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-DEGL_EGLEXT_PROTOTYPES -DGL_GLEXT_PROTOTYPES -DATRACE_TAG=ATRACE_TAG_VIEW -D"LOG_TAG=\"HWUI\"" \
        	-fvisibility=hidden -fno-profile-sample-accurate -Wno-missing-declarations\
			-DHWUI_NULL_GPU -DNULL_GPU_MAX_TEXTURE_SIZE=4096 -Wno-unused-private-field -Wno-unused-const-variable -Wno-unused-function\
			-Wno-unused-parameter -Wno-non-virtual-dtor -Wno-parentheses -Werror -Wno-error=deprecated-declarations -Wunused -Wno-inconsistent-missing-override \
			-Wunreachable-code -Wno-conversion-null -DGL_GLEXT_PROTOTYPES -DEGL_EGLEXT_PROTOTYPES -DU_USING_ICU_NAMESPACE=0 -Wno-unused-variable \
			-Wno-unknown-attributes -Wno-ignored-attributes -Wno-unused-private-field -Wno-unused-function -Wno-vla-cxx-extension\
			-I. -I./include -I./platform/host -I./apex/include -I./jni -I./../native/libs/nativebase/include -I./../native/libs/nativewindow/include \
			-I./../native/libs/nativedisplay/include -I./../libnativehelper/include_platform -I./../libnativehelper/include -I./../libnativehelper/header_only_include \
			-I./../libskia -I./../libskia/linux -I./../libskia/include -I./../libskia/include/core -I./../libskia/include/android -I./../libskia/include/private \
			-I./../libskia/include/encode -I./../libskia/include/effects -I./../libskia/include/utils -I./../libskia/include/gpu -I./../libskia/include/codec \
			-I./../libskia/include/pathops -I./../libskia/client_utils/android \
			-I./../libskia/src/codec -I./../libskia/src/core -I./../libskia/src/effects -I./../libskia/src/image -I./../libskia/src/utils \
			-I./../libskia/include/third_party/vulkan -I./../libskia/tools -I./../harfbuzz_ng/src \
			-I./../liblog/include -I./../libcutils/include -I./../libbase/include -I./../libutils/include -I./../libsystem/include \
			-I./../ui/include -I./../libandroidfw/include -I./../native/include -I./../libincfs-utils/include -I./../fmtlib/include \
			-I./../libnativehelper/include_jni -I./../native/libs/arect/include -I./../native/include/private -I./../minikin/include \
			-I./../libhardware/include -I./../ui/include_types -I./../native/libs/math/include \
			-I./../native/libs/gui/aidl -I./../binder/ndk/include_cpp -I./../binder/ndk/include_ndk -I./../libhidl/base/include \
			-I./../libfmq/base -I./../binder/include -I./../libhidl/transport/token/1.0/utils/include -I./../hostgraphics \
			-I./../libnativehelper/include_platform_header_only -I./../libultrahdr/lib/include -I./../libjpeg


CFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \

LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libhwui.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/canvas/CanvasFrontend.cpp \
				$(SRC_DIR)/canvas/CanvasOpBuffer.cpp \
				$(SRC_DIR)/canvas/CanvasOpRasterizer.cpp \
				$(SRC_DIR)/effects/StretchEffect.cpp \
				$(SRC_DIR)/effects/GainmapRenderer.cpp \
				$(SRC_DIR)/pipeline/skia/BackdropFilterDrawable.cpp \
				$(SRC_DIR)/pipeline/skia/HolePunch.cpp \
				$(SRC_DIR)/pipeline/skia/SkiaDisplayList.cpp \
				$(SRC_DIR)/pipeline/skia/SkiaHostPipeline.cpp \
				$(SRC_DIR)/pipeline/skia/SkiaPipeline.cpp \
				$(SRC_DIR)/pipeline/skia/SkiaRecordingCanvas.cpp \
				$(SRC_DIR)/pipeline/skia/StretchMask.cpp \
				$(SRC_DIR)/pipeline/skia/RenderNodeDrawable.cpp \
				$(SRC_DIR)/pipeline/skia/ReorderBarrierDrawables.cpp \
				$(SRC_DIR)/pipeline/skia/TransformCanvas.cpp \
				$(SRC_DIR)/renderstate/RenderState.cpp \
				$(SRC_DIR)/renderthread/CanvasContext.cpp \
				$(SRC_DIR)/renderthread/DrawFrameTask.cpp \
				$(SRC_DIR)/renderthread/Frame.cpp \
				$(SRC_DIR)/renderthread/ReliableSurface.cpp \
				$(SRC_DIR)/renderthread/RenderProxy.cpp \
				$(SRC_DIR)/renderthread/RenderTask.cpp \
				$(SRC_DIR)/renderthread/TimeLord.cpp \
				$(SRC_DIR)/hwui/AnimatedImageDrawable.cpp \
				$(SRC_DIR)/hwui/Bitmap.cpp \
				$(SRC_DIR)/hwui/BlurDrawLooper.cpp \
				$(SRC_DIR)/hwui/Canvas.cpp \
				$(SRC_DIR)/hwui/ImageDecoder.cpp \
				$(SRC_DIR)/hwui/MinikinSkia.cpp \
				$(SRC_DIR)/hwui/MinikinUtils.cpp \
				$(SRC_DIR)/hwui/PaintImpl.cpp \
				$(SRC_DIR)/hwui/Typeface.cpp \
				$(SRC_DIR)/utils/Blur.cpp \
				$(SRC_DIR)/utils/Color.cpp \
				$(SRC_DIR)/utils/LinearAllocator.cpp \
				$(SRC_DIR)/utils/StringUtils.cpp \
				$(SRC_DIR)/utils/TypefaceUtils.cpp \
				$(SRC_DIR)/utils/VectorDrawableUtils.cpp \
				$(SRC_DIR)/AnimationContext.cpp \
				$(SRC_DIR)/Animator.cpp \
				$(SRC_DIR)/AnimatorManager.cpp \
				$(SRC_DIR)/CanvasTransform.cpp \
				$(SRC_DIR)/DamageAccumulator.cpp \
				$(SRC_DIR)/DeviceInfo.cpp \
				$(SRC_DIR)/FrameInfo.cpp \
				$(SRC_DIR)/FrameInfoVisualizer.cpp \
				$(SRC_DIR)/FrameMetricsReporter.cpp \
				$(SRC_DIR)/Gainmap.cpp \
				$(SRC_DIR)/Interpolator.cpp \
				$(SRC_DIR)/JankTracker.cpp \
				$(SRC_DIR)/Layer.cpp \
				$(SRC_DIR)/LayerUpdateQueue.cpp \
				$(SRC_DIR)/LightingInfo.cpp \
				$(SRC_DIR)/Matrix.cpp \
				$(SRC_DIR)/Mesh.cpp \
				$(SRC_DIR)/MemoryPolicy.cpp \
				$(SRC_DIR)/PathParser.cpp \
				$(SRC_DIR)/ProfileData.cpp \
				$(SRC_DIR)/Properties.cpp \
				$(SRC_DIR)/PropertyValuesAnimatorSet.cpp \
				$(SRC_DIR)/PropertyValuesHolder.cpp \
				$(SRC_DIR)/RecordingCanvas.cpp \
				$(SRC_DIR)/RenderNode.cpp \
				$(SRC_DIR)/RenderProperties.cpp \
				$(SRC_DIR)/RootRenderNode.cpp \
				$(SRC_DIR)/SkiaCanvas.cpp \
				$(SRC_DIR)/SkiaInterpolator.cpp \
				$(SRC_DIR)/Tonemapper.cpp \
				$(SRC_DIR)/TreeInfo.cpp \
				$(SRC_DIR)/VectorDrawable.cpp \
				$(SRC_DIR)/platform/host/renderthread/CacheManager.cpp \
				$(SRC_DIR)/platform/host/renderthread/RenderThread.cpp \
				$(SRC_DIR)/platform/host/ProfileDataContainer.cpp \
				$(SRC_DIR)/platform/host/Readback.cpp \
				$(SRC_DIR)/platform/host/WebViewFunctorManager.cpp \
				$(SRC_DIR)/utils/HostColorSpace.cpp \
				$(SRC_DIR)/apex/android_bitmap.cpp \
				$(SRC_DIR)/apex/android_canvas.cpp \
				$(SRC_DIR)/apex/android_matrix.cpp \
				$(SRC_DIR)/apex/android_paint.cpp \
				$(SRC_DIR)/apex/android_region.cpp \
				$(SRC_DIR)/apex/properties.cpp \
				$(SRC_DIR)/apex/LayoutlibLoader.cpp \
				$(SRC_DIR)/jni/android_graphics_animation_NativeInterpolatorFactory.cpp \
				$(SRC_DIR)/jni/android_graphics_animation_RenderNodeAnimator.cpp \
				$(SRC_DIR)/jni/android_graphics_Canvas.cpp \
				$(SRC_DIR)/jni/android_graphics_ColorSpace.cpp \
				$(SRC_DIR)/jni/android_graphics_drawable_AnimatedVectorDrawable.cpp \
				$(SRC_DIR)/jni/android_graphics_drawable_VectorDrawable.cpp \
				$(SRC_DIR)/jni/android_graphics_HardwareRenderer.cpp \
				$(SRC_DIR)/jni/android_graphics_HardwareRendererObserver.cpp \
				$(SRC_DIR)/jni/android_graphics_Matrix.cpp \
				$(SRC_DIR)/jni/android_graphics_Picture.cpp \
				$(SRC_DIR)/jni/android_graphics_DisplayListCanvas.cpp \
				$(SRC_DIR)/jni/android_graphics_Mesh.cpp \
				$(SRC_DIR)/jni/android_graphics_RenderNode.cpp \
				$(SRC_DIR)/jni/android_nio_utils.cpp \
				$(SRC_DIR)/jni/android_util_PathParser.cpp \
				$(SRC_DIR)/jni/Bitmap.cpp \
				$(SRC_DIR)/jni/BitmapRegionDecoder.cpp \
				$(SRC_DIR)/jni/BufferUtils.cpp \
				$(SRC_DIR)/jni/HardwareBufferHelpers.cpp \
				$(SRC_DIR)/jni/BitmapFactory.cpp \
				$(SRC_DIR)/jni/ByteBufferStreamAdaptor.cpp \
				$(SRC_DIR)/jni/Camera.cpp \
				$(SRC_DIR)/jni/CanvasProperty.cpp \
				$(SRC_DIR)/jni/ColorFilter.cpp \
				$(SRC_DIR)/jni/CreateJavaOutputStreamAdaptor.cpp \
				$(SRC_DIR)/jni/FontFamily.cpp \
				$(SRC_DIR)/jni/FontUtils.cpp \
				$(SRC_DIR)/jni/Gainmap.cpp \
				$(SRC_DIR)/jni/Graphics.cpp \
				$(SRC_DIR)/jni/ImageDecoder.cpp \
				$(SRC_DIR)/jni/Interpolator.cpp \
				$(SRC_DIR)/jni/MeshSpecification.cpp \
				$(SRC_DIR)/jni/MaskFilter.cpp \
				$(SRC_DIR)/jni/NinePatch.cpp \
				$(SRC_DIR)/jni/NinePatchPeeker.cpp \
				$(SRC_DIR)/jni/Paint.cpp \
				$(SRC_DIR)/jni/PaintFilter.cpp \
				$(SRC_DIR)/jni/Path.cpp \
				$(SRC_DIR)/jni/PathEffect.cpp \
				$(SRC_DIR)/jni/PathIterator.cpp \
				$(SRC_DIR)/jni/PathMeasure.cpp \
				$(SRC_DIR)/jni/Picture.cpp \
				$(SRC_DIR)/jni/Region.cpp \
				$(SRC_DIR)/jni/ScopedParcel.cpp \
				$(SRC_DIR)/jni/Shader.cpp \
				$(SRC_DIR)/jni/RenderEffect.cpp \
				$(SRC_DIR)/jni/Typeface.cpp \
				$(SRC_DIR)/jni/Utils.cpp \
				$(SRC_DIR)/jni/YuvToJpegEncoder.cpp \
				$(SRC_DIR)/jni/fonts/Font.cpp \
				$(SRC_DIR)/jni/fonts/FontFamily.cpp \
				$(SRC_DIR)/jni/text/LineBreaker.cpp \
				$(SRC_DIR)/jni/text/MeasuredText.cpp \
				$(SRC_DIR)/jni/text/TextShaper.cpp \
				$(SRC_DIR)/jni/text/GraphemeBreak.cpp \

CC_SOURCES := 

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

STATIC_LIB = 
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libskia.a) \
				$(wildcard $(OUT_LIB_DIR)/libutils.a) \
				$(wildcard $(OUT_LIB_DIR)/libandroidfw.a) \
				$(wildcard $(OUT_LIB_DIR)/libhostgraphics.a) \
				$(wildcard $(OUT_LIB_DIR)/libbase.a) \
				$(wildcard $(OUT_LIB_DIR)/libharfbuzz_ng.a) \
				$(wildcard $(OUT_LIB_DIR)/libminikin.a) \
				$(wildcard $(OUT_LIB_DIR)/libserver_configurable_flags.a) \
				$(wildcard $(OUT_LIB_DIR)/libz.a) \
				$(wildcard $(OUT_LIB_DIR)/liblog.a) \
				$(wildcard $(OUT_LIB_DIR)/libcutils.a) \
				$(wildcard $(OUT_LIB_DIR)/libnativehelper.a) \
				$(wildcard $(OUT_LIB_DIR)/libziparchive.a) \
				$(wildcard $(OUT_LIB_DIR)/libui-types.a) \
				$(wildcard $(OUT_LIB_DIR)/libimage_io.a) \
				$(wildcard $(OUT_LIB_DIR)/libjpeg.a) \
				$(wildcard $(OUT_LIB_DIR)/libultrahdr.a) \

# 默认目标
all: prepare $(TARGET)

# 创建必要目录
prepare:
	@echo "prepare.. $@"
	@mkdir -p $(OUT_LIB_DIR)
	@mkdir -p $(OBJ_DIR)

$(TARGET): $(OBJECTS) $(STATIC_LIB)
	@mkdir -p $(OBJ_DIR)
	$(AR) $(ARFLAGS) -o $@ $(OBJECTS) $(STATIC_LIB)
	@echo "Built $@"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cc | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)
	@mkdir -p $(OBJ_DIR)

install:
	cp $(TARGET) $(OUT_LIB_DIR)

.PHONY: all prepare clean install