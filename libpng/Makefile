
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \
			-Wno-unused-parameter


CFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \


LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libpng.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := 

CC_SOURCES := 

C_SOURCES := $(SRC_DIR)/pngwrite.c \
				$(SRC_DIR)/pngwtran.c \
				$(SRC_DIR)/pngread.c \
				$(SRC_DIR)/png.c \
				$(SRC_DIR)/pngrtran.c \
				$(SRC_DIR)/pngrio.c \
				$(SRC_DIR)/pngrutil.c \
				$(SRC_DIR)/pngpread.c \
				$(SRC_DIR)/pngwio.c \
				$(SRC_DIR)/pngwutil.c \
				$(SRC_DIR)/pngget.c \
				$(SRC_DIR)/pngset.c \
				$(SRC_DIR)/pngmem.c \
				$(SRC_DIR)/pngtrans.c \
				$(SRC_DIR)/pngerror.c \
				$(SRC_DIR)/arm/palette_neon_intrinsics.c \
				$(SRC_DIR)/arm/arm_init.c \
				$(SRC_DIR)/arm/filter_neon_intrinsics.c \


CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libz.a)

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