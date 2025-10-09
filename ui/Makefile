include ../makefile_cfg

# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := $(CXXFLAGS_COMMON) -fPIC -Wall -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./include_types -I./include_private -I./../native/libs/math/include -I./../native/libs/arect/include \
			-I./../libutils/include -I./../libbase/include -I./../libsystem/include -I./../liblog/include -I./../libcutils/include \
			-I./../libhardware/include \
			-Wall -Werror -Wextra

CFLAGS := $(CFLAGS_COMMON) -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \

LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libui-types.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/ColorSpace.cpp \
				$(SRC_DIR)/Rect.cpp \
				$(SRC_DIR)/Region.cpp \
				$(SRC_DIR)/Transform.cpp \
				$(SRC_DIR)/PixelFormat.cpp \

CC_SOURCES :=

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

# STATIC_LIB = 
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libbase.a) \
				$(wildcard $(OUT_LIB_DIR)/libutils.a) \

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