
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./../native/libs/nativebase/include -I./../native/libs/nativewindow/include -I./../native/libs/nativedisplay/include \
			-I./../native/libs/arect/include -I./../native/libs/math/include -I./../ui/include \
			-I./../liblog/include -I./../libcutils/include -I./../libbase/include -I./../libutils/include -I./../libsystem/include -I./../libhardware/include \
			-Wno-unused-parameter -D"__INTRODUCED_IN(n)=" \

CFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \

LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libhostgraphics.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/ADisplay.cpp \
				$(SRC_DIR)/ANativeWindow.cpp \
				$(SRC_DIR)/Fence.cpp \
				$(SRC_DIR)/HostBufferQueue.cpp \
				$(SRC_DIR)/PublicFormat.cpp \

CC_SOURCES :=

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

# STATIC_LIB = 
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libbase.a) \
				$(wildcard $(OUT_LIB_DIR)/libmath.a) \
				$(wildcard $(OUT_LIB_DIR)/libutils.a) \
				$(wildcard $(OUT_LIB_DIR)/libui-types.a) \

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