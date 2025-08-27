
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \


CFLAGS := -fPIC -Wall -Werror -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \
			-Wno-unused -Wno-unused-parameter \
			-DHAVE_HIDDEN -DZLIB_CONST -DCHROMIUM_ZLIB_NO_CASTAGNOLI -O3 \
    		-DADLER32_SIMD_NEON -DCRC32_ARMV8_CRC32 -DINFLATE_CHUNK_READ_64LE -DARMV8_OS_LINUX

LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libz.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := 

CC_SOURCES := 

C_SOURCES := $(SRC_DIR)/adler32.c \
				$(SRC_DIR)/adler32_simd.c \
				$(SRC_DIR)/compress.c \
				$(SRC_DIR)/cpu_features.c \
				$(SRC_DIR)/crc32.c \
				$(SRC_DIR)/crc32_simd.c \
				$(SRC_DIR)/crc_folding.c \
				$(SRC_DIR)/deflate.c \
				$(SRC_DIR)/gzclose.c \
				$(SRC_DIR)/gzlib.c \
				$(SRC_DIR)/gzread.c \
				$(SRC_DIR)/gzwrite.c \
				$(SRC_DIR)/infback.c \
				$(SRC_DIR)/inffast.c \
				$(SRC_DIR)/inflate.c \
				$(SRC_DIR)/inftrees.c \
				$(SRC_DIR)/trees.c \
				$(SRC_DIR)/uncompr.c \
				$(SRC_DIR)/zutil.c \

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

STATIC_LIB = 
# STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libbase.a) \
#				$(wildcard $(OUT_LIB_DIR)/libbase.a) \

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