
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \

CFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \
			-DFT_CONFIG_OPTION_USE_PNG  -DFT_CONFIG_OPTION_USE_ZLIB  -DFT_CONFIG_OPTION_SYSTEM_ZLIB -W \
			-Wall  -Werror  -DDARWIN_NO_CARBON  -DFT2_BUILD_LIBRARY -O2 -Wno-unused-parameter -Wno-unused-variable -Wno-unused-function \

LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libft2.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := 

CC_SOURCES :=

C_SOURCES := $(SRC_DIR)/src/autofit/autofit.c \
				$(SRC_DIR)/src/base/ftbase.c \
				$(SRC_DIR)/src/base/ftbbox.c \
				$(SRC_DIR)/src/base/ftbitmap.c \
				$(SRC_DIR)/src/base/ftdebug.c \
				$(SRC_DIR)/src/base/ftfstype.c \
				$(SRC_DIR)/src/base/ftgasp.c \
				$(SRC_DIR)/src/base/ftglyph.c \
				$(SRC_DIR)/src/base/ftinit.c \
				$(SRC_DIR)/src/base/ftmm.c \
				$(SRC_DIR)/src/base/ftstroke.c \
				$(SRC_DIR)/src/base/fttype1.c \
				$(SRC_DIR)/src/base/ftsystem.c \
				$(SRC_DIR)/src/cid/type1cid.c \
				$(SRC_DIR)/src/cff/cff.c \
				$(SRC_DIR)/src/gzip/ftgzip.c \
				$(SRC_DIR)/src/psaux/psaux.c \
				$(SRC_DIR)/src/pshinter/pshinter.c \
				$(SRC_DIR)/src/psnames/psnames.c \
				$(SRC_DIR)/src/raster/raster.c \
				$(SRC_DIR)/src/sdf/sdf.c \
				$(SRC_DIR)/src/sfnt/sfnt.c \
				$(SRC_DIR)/src/smooth/smooth.c \
				$(SRC_DIR)/src/svg/svg.c \
				$(SRC_DIR)/src/truetype/truetype.c \
				$(SRC_DIR)/src/type1/type1.c \

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

# STATIC_LIB = 
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libpng.a) \
				$(wildcard $(OUT_LIB_DIR)/libz.a) \
				$(wildcard $(OUT_LIB_DIR)/libharfbuzz_ng.a) \

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