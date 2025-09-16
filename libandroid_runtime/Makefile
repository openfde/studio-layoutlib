
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -Werror -Wextra  -std=c++20 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./aidl -I./../libnativehelper/include -I./../libnativehelper/include_jni -I./../libnativehelper/include_platform \
            -I./../libnativehelper/header_only_include -I./../libandroidfw/include -I./../libincfs-utils/include \
            -I./../libbase/include -I./../libcutils/include -I./../liblog/include -I./../libutils/include -I./../libsystem/include -I./../native/include \
            -I./../fmtlib/include -I./../native/libs/binder/ndk/include_cpp -I./../libnativehelper/include_platform_header_only \
            -I./../libziparchive/include -I./../hwui/apex/include -I./../binder/include -I./../native/libs/math/include \
            -I./../native/libs/arect/include -I./../server_configurable_flags/include -I./../sqlite/android -I./../sqlite/dist/ \
            -I./../native/libs/nativewindow/include -I./../hostgraphics -I./../ui/include -I./../native/libs/nativebase/include \
            -I./../libhardware/include -I./../binderthreadstate/include -I./../binder/include -I./../libhwbinder/include \
            -I./../minikin/include -I./../libinput -I./../libskia/modules/skcms -I./../harfbuzz_ng/src \
			-I./../libicuuc/source/common -I./../libicuuc/source/i18n \
            -Wno-unused-const-variable -Wno-unused-parameter -Wno-non-virtual-dtor -Wno-uninitialized -Wno-parentheses \
			-Wno-unused-function -Wno-error=deprecated-declarations -Wunreachable-code -Wno-inconsistent-missing-override \
            -DGL_GLEXT_PROTOTYPES -Wno-unused-variable \
			-DEGL_EGLEXT_PROTOTYPES -DU_USING_ICU_NAMESPACE=0 -Wno-conversion-null -Wno-range-loop-construct \
			-D"LOG_ALWAYS_FATAL_IF(cond, ...)=if(cond) LOG_ALWAYS_FATAL(...)" \
            -D"LOG_ALWAYS_FATAL(...)=__android_log_call_aborter(\"Fatal Error\")" \
            -D"__INTRODUCED_IN(n)=" -D__ANDROID_API__=10000 -D__HOST_JVM__


CFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \


LDFLAGS := -shared -lpthread -lc++ -lstdc++ -lc++abi -L./../libs -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64'

LLFLAGS := -lhwui -lhwbinder -lminikin -lsqlite -lsfntly -lskia -lwebp -landroidfw -lexpat -lfmtlib -lft2 -lgui_window_info_static \
			-lharfbuzz_ng -lhidlbase -lhostgraphics -licuuc -landroidicuinit -lultrahdr -limage_io -lincfs-utils -linput \
			-ljpeg -ljsoncpp -lmodpb64 -lnativehelper -lpiex -lpng -lprocessgroup -lui-types -lziparchive -lserver_configurable_flags \
			-lutils -lutils_binder -lwuffs_mirror_release_c -ldng_sdk -lz -lbinder -lcutils -llog -lbase \
			-ldl -lm -lrt -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcsd

# 目标库
TARGET := libandroid_runtime.so

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj


# $(SRC_DIR)/android_view_InputChannel.cpp 
# $(SRC_DIR)/android_view_InputDevice.cpp \
# $(SRC_DIR)/android_view_InputEventReceiver.cpp \
# $(SRC_DIR)/android_view_InputEventSender.cpp \
# $(SRC_DIR)/android_view_VelocityTracker.cpp \
# $(SRC_DIR)/android_view_VerifiedKeyEvent.cpp \
# $(SRC_DIR)/android_view_VerifiedMotionEvent.cpp \
# 源文件
CPP_SOURCES := $(SRC_DIR)/android_animation_PropertyValuesHolder.cpp \
				$(SRC_DIR)/android_os_SystemClock.cpp \
				$(SRC_DIR)/android_os_SystemProperties.cpp \
				$(SRC_DIR)/android_os_Trace.cpp \
				$(SRC_DIR)/android_text_AndroidCharacter.cpp \
				$(SRC_DIR)/android_util_EventLog.cpp \
				$(SRC_DIR)/android_util_Log.cpp \
				$(SRC_DIR)/android_util_StringBlock.cpp \
				$(SRC_DIR)/android_util_XmlBlock.cpp \
				$(SRC_DIR)/android_util_jar_StrictJarFile.cpp \
				$(SRC_DIR)/com_android_internal_util_VirtualRefBasePtr.cpp \
				$(SRC_DIR)/core_jni_helpers.cpp \
				$(SRC_DIR)/LayoutlibLoader.cpp \
                $(SRC_DIR)/AndroidRuntime.cpp \
				$(SRC_DIR)/android_content_res_ApkAssets.cpp \
				$(SRC_DIR)/android_database_CursorWindow.cpp \
				$(SRC_DIR)/android_database_SQLiteCommon.cpp \
				$(SRC_DIR)/android_database_SQLiteConnection.cpp \
				$(SRC_DIR)/android_database_SQLiteGlobal.cpp \
				$(SRC_DIR)/android_database_SQLiteDebug.cpp \
				$(SRC_DIR)/android_hardware_input_InputApplicationHandle.cpp \
				$(SRC_DIR)/android_os_MessageQueue.cpp \
				$(SRC_DIR)/android_os_Parcel.cpp \
				$(SRC_DIR)/android_view_Surface.cpp \
				$(SRC_DIR)/android_view_LayoutlibRenderer.cpp \
				$(SRC_DIR)/android_util_AssetManager.cpp \
				$(SRC_DIR)/android_util_Binder.cpp \
				$(SRC_DIR)/android_util_FileObserver.cpp \
				$(SRC_DIR)/android_text_Hyphenator.cpp \
				$(SRC_DIR)/aidl/android/gui/InputApplicationInfo.cpp \
				$(SRC_DIR)/aidl/android/gui/FocusRequest.cpp \
				$(SRC_DIR)/aidl/android/gui/StalledTransactionInfo.cpp \
				$(SRC_DIR)/aidl/android/gui/TouchOcclusionMode.cpp \
				$(SRC_DIR)/aidl/android/gui/WindowInfo.cpp \
				$(SRC_DIR)/aidl/android/gui/WindowInfosUpdate.cpp \

CC_SOURCES := 

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)


STATIC_LIB = $(shell find $(OUT_LIB_DIR) -name '*.a')
# STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libhwui.a) \
# 			$(wildcard $(OUT_LIB_DIR)/libbinder.a) \
# 			$(wildcard $(OUT_LIB_DIR)/libsqlite.a) \
# 			$(wildcard $(OUT_LIB_DIR)/libhidlbase.a) \
# 			$(wildcard $(OUT_LIB_DIR)/libutils.a) \
            
			

# 默认目标
all: prepare $(TARGET)

# 创建必要目录
prepare:
	@echo "prepare.. $@"
	@mkdir -p $(OUT_LIB_DIR)
	@mkdir -p $(OBJ_DIR)

$(TARGET): $(OBJECTS) $(STATIC_LIB)
	$(CXX) -o $@ $(OBJECTS) $(LDFLAGS) $(STATIC_LIB) $(LLFLAGS)
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
	cp $(TARGET) ../layoutlib_jni

.PHONY: all prepare clean install