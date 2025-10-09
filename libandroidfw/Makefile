include ../makefile_cfg

# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := $(CXXFLAGS_COMMON) -fPIC -Wall -std=c++20 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./include_pathutils -I./../libincfs-utils/include -I./../liblog/include -I./../libbase/include -I./../libutils/include -I./../native/include \
			-I./../fmtlib/include -I./../libsystem/include -I./../libcutils/include -I./../libziparchive/include \
			-Werror -Wno-unused-label -Wno-pessimizing-move -Wunreachable-code -DSTATIC_ANDROIDFW_FOR_TOOLS \
			-Wno-vla-cxx-extension -Wno-unknown-warning-option 


CFLAGS := $(CFLAGS_COMMON) -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \


LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libandroidfw.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/ApkAssets.cpp \
				$(SRC_DIR)/ApkParsing.cpp \
				$(SRC_DIR)/Asset.cpp \
				$(SRC_DIR)/AssetDir.cpp \
				$(SRC_DIR)/AssetManager.cpp \
				$(SRC_DIR)/AssetManager2.cpp \
				$(SRC_DIR)/AssetsProvider.cpp \
				$(SRC_DIR)/AttributeResolution.cpp \
				$(SRC_DIR)/BigBuffer.cpp \
				$(SRC_DIR)/BigBufferStream.cpp \
				$(SRC_DIR)/ChunkIterator.cpp \
				$(SRC_DIR)/ConfigDescription.cpp \
				$(SRC_DIR)/FileStream.cpp \
				$(SRC_DIR)/Idmap.cpp \
				$(SRC_DIR)/LoadedArsc.cpp \
				$(SRC_DIR)/Locale.cpp \
				$(SRC_DIR)/LocaleData.cpp \
				$(SRC_DIR)/misc.cpp \
				$(SRC_DIR)/NinePatch.cpp \
				$(SRC_DIR)/ObbFile.cpp \
				$(SRC_DIR)/PosixUtils.cpp \
				$(SRC_DIR)/Png.cpp \
				$(SRC_DIR)/PngChunkFilter.cpp \
				$(SRC_DIR)/PngCrunch.cpp \
				$(SRC_DIR)/ResourceTimer.cpp \
				$(SRC_DIR)/ResourceTypes.cpp \
				$(SRC_DIR)/ResourceUtils.cpp \
				$(SRC_DIR)/StreamingZipInflater.cpp \
				$(SRC_DIR)/StringPool.cpp \
				$(SRC_DIR)/TypeWrappers.cpp \
				$(SRC_DIR)/Util.cpp \
				$(SRC_DIR)/ZipFileRO.cpp \
				$(SRC_DIR)/ZipUtils.cpp \
				$(SRC_DIR)/CursorWindow.cpp \
				$(SRC_DIR)/PathUtils.cpp \

CC_SOURCES := 

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libincfs-utils.a) \
				$(wildcard $(OUT_LIB_DIR)/libpng.a) \
				$(wildcard $(OUT_LIB_DIR)/libbase.a) \
				$(wildcard $(OUT_LIB_DIR)/libcutils.a) \
				$(wildcard $(OUT_LIB_DIR)/liblog.a) \
				$(wildcard $(OUT_LIB_DIR)/libutils.a) \
				$(wildcard $(OUT_LIB_DIR)/libziparchive.a) \
				$(wildcard $(OUT_LIB_DIR)/libz.a)

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