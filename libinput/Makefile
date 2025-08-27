
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -Wextra -Werror -std=c++20 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./../native/include -I./../liblog/include -I./../libcutils/include -I./../libbase/include -I./../libutils/include \
			-I./../libnativehelper/include_jni -I./../libandroid_runtime/aidl -I./../binder/include -I./../native/libs/math/include \
			-I./../native/libs/arect/include -I./../fmtlib/include -I./../kernel-headers/uapi -I./../libandroid_runtime/include \
			-I./../binder/ndk/include_cpp \
			-Wno-unused-parameter -Wshadow -Wshadow-field-in-constructor-modified -Wshadow-uncaptured-local \
			-DANDROID_UTILS_REF_BASE_DISABLE_IMPLICIT_CONSTRUCTION

CFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \


LDFLAGS := -shared -Wl,--exclude-libs=libtflite_static.a -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libinput.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj


# $(SRC_DIR)/MotionPredictor.cpp 
# $(SRC_DIR)/MotionPredictorMetricsManager.cpp 
# $(SRC_DIR)/TfLiteMotionPredictor.cpp \
# $(SRC_DIR)/TouchVideoFrame.cpp \
				
# 源文件
CPP_SOURCES := $(SRC_DIR)/AccelerationCurve.cpp \
				$(SRC_DIR)/Input.cpp \
				$(SRC_DIR)/InputDevice.cpp \
				$(SRC_DIR)/InputEventLabels.cpp \
				$(SRC_DIR)/InputTransport.cpp \
				$(SRC_DIR)/InputVerifier.cpp \
				$(SRC_DIR)/Keyboard.cpp \
				$(SRC_DIR)/KeyCharacterMap.cpp \
				$(SRC_DIR)/KeyLayoutMap.cpp \
				$(SRC_DIR)/PrintTools.cpp \
				$(SRC_DIR)/PropertyMap.cpp \
				$(SRC_DIR)/VelocityControl.cpp \
				$(SRC_DIR)/VelocityTracker.cpp \
				$(SRC_DIR)/VirtualInputDevice.cpp \
				$(SRC_DIR)/VirtualKeyMap.cpp \
				$(SRC_DIR)/FromRustToCpp.cpp \

CC_SOURCES := 

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)


# libPlatformProperties \
# libtinyxml2 \
# libtflite_static \
# libkernelconfigs \
# com.android.input.flags-aconfig-cc \
# libinput_rust_ffi \

# STATIC_LIB = 
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libbase.a) \
				$(wildcard $(OUT_LIB_DIR)/libbinder.a) \
				$(wildcard $(OUT_LIB_DIR)/libcutils.a) \
				$(wildcard $(OUT_LIB_DIR)/liblog.a) \
				$(wildcard $(OUT_LIB_DIR)/libutils.a) \
				$(wildcard $(OUT_LIB_DIR)/libz.a) \
				$(wildcard $(OUT_LIB_DIR)/libserver_configurable_flags.a) \
				$(wildcard $(OUT_LIB_DIR)/libui-types.a) \
				$(wildcard $(OUT_LIB_DIR)/libgui_window_info_static.a) \

# 默认目标
all: prepare $(TARGET)

# 创建必要目录
prepare:
	@echo "prepare.. $@"
	@mkdir -p $(OUT_LIB_DIR)
	@mkdir -p $(OBJ_DIR)

$(TARGET): $(OBJECTS) $(STATIC_LIB)
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