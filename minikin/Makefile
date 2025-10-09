include ../makefile_cfg

# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := $(CXXFLAGS_COMMON) -fPIC -Wall -std=c++20 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./../libutils/include -I./../libcutils/include -I./../liblog/include -I./../harfbuzz_ng/src -I./../libbase/include \
			-I./../libicuuc/source/common -I./../libicuuc/source/i18n \
			-Wall -Werror -Wextra -Wno-thread-safety-attributes -Wno-unknown-attributes -Wno-ignored-attributes

CFLAGS := $(CFLAGS_COMMON) -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \

LDFLAGS := -shared -lpthread -lc++ -lstdc++ -lc++abi -L./../libs \
			-Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' \
			 -licuuc -ldl -lm -lrt -Wl,--no-undefined

LLFLAGS :=

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# AR = $(CXX)
# ARFLAGS = $(LDFLAGS)

# 目标库
TARGET := libminikin.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/BidiUtils.cpp \
				$(SRC_DIR)/CmapCoverage.cpp \
				$(SRC_DIR)/Emoji.cpp \
				$(SRC_DIR)/Font.cpp \
				$(SRC_DIR)/FontCollection.cpp \
				$(SRC_DIR)/FontFamily.cpp \
				$(SRC_DIR)/FontFeatureUtils.cpp \
				$(SRC_DIR)/FontFileParser.cpp \
				$(SRC_DIR)/FontUtils.cpp \
				$(SRC_DIR)/GraphemeBreak.cpp \
				$(SRC_DIR)/GreedyLineBreaker.cpp \
				$(SRC_DIR)/Hyphenator.cpp \
				$(SRC_DIR)/HyphenatorMap.cpp \
				$(SRC_DIR)/Layout.cpp \
				$(SRC_DIR)/LayoutCore.cpp \
				$(SRC_DIR)/LayoutUtils.cpp \
				$(SRC_DIR)/LineBreaker.cpp \
				$(SRC_DIR)/LineBreakerUtil.cpp \
				$(SRC_DIR)/Locale.cpp \
				$(SRC_DIR)/LocaleListCache.cpp \
				$(SRC_DIR)/MeasuredText.cpp \
				$(SRC_DIR)/Measurement.cpp \
				$(SRC_DIR)/MinikinFontFactory.cpp \
				$(SRC_DIR)/MinikinInternal.cpp \
				$(SRC_DIR)/OptimalLineBreaker.cpp \
				$(SRC_DIR)/ScriptUtils.cpp \
				$(SRC_DIR)/SparseBitSet.cpp \
				$(SRC_DIR)/SystemFonts.cpp \
				$(SRC_DIR)/U16StringPiece.cpp \
				$(SRC_DIR)/WordBreaker.cpp \

CC_SOURCES :=

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

# STATIC_LIB = 
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libicuuc.a) \
				$(wildcard $(OUT_LIB_DIR)/liblog.a) \
				$(wildcard $(OUT_LIB_DIR)/libharfbuzz_ng.a) \
				$(wildcard $(OUT_LIB_DIR)/libcutils.a) \

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