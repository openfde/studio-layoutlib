
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./src \
			-DHAVE_PTHREAD -DHB_NO_PRAGMA_GCC_DIAGNOSTIC -DHAVE_OT -DHAVE_ICU -DHAVE_ICU_BUILTIN \
			-Werror -Wno-unused-parameter -Wno-missing-field-initializers \

CFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \

LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libharfbuzz_ng.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := 

CC_SOURCES := $(SRC_DIR)/src/hb-aat-layout.cc \
				$(SRC_DIR)/src/hb-aat-map.cc \
				$(SRC_DIR)/src/hb-blob.cc \
				$(SRC_DIR)/src/hb-buffer-serialize.cc \
				$(SRC_DIR)/src/hb-buffer-verify.cc \
				$(SRC_DIR)/src/hb-buffer.cc \
				$(SRC_DIR)/src/hb-common.cc \
				$(SRC_DIR)/src/hb-draw.cc \
				$(SRC_DIR)/src/hb-face-builder.cc \
				$(SRC_DIR)/src/hb-face.cc \
				$(SRC_DIR)/src/hb-fallback-shape.cc \
				$(SRC_DIR)/src/hb-font.cc \
				$(SRC_DIR)/src/hb-map.cc \
				$(SRC_DIR)/src/hb-number.cc \
				$(SRC_DIR)/src/hb-ot-cff1-table.cc \
				$(SRC_DIR)/src/hb-ot-cff2-table.cc \
				$(SRC_DIR)/src/hb-ot-color.cc \
				$(SRC_DIR)/src/hb-ot-face.cc \
				$(SRC_DIR)/src/hb-ot-font.cc \
				$(SRC_DIR)/src/hb-ot-layout.cc \
				$(SRC_DIR)/src/hb-ot-map.cc \
				$(SRC_DIR)/src/hb-ot-math.cc \
				$(SRC_DIR)/src/hb-ot-meta.cc \
				$(SRC_DIR)/src/hb-ot-metrics.cc \
				$(SRC_DIR)/src/hb-ot-name.cc \
				$(SRC_DIR)/src/hb-ot-shape-fallback.cc \
				$(SRC_DIR)/src/hb-ot-shape-normalize.cc \
				$(SRC_DIR)/src/hb-ot-shape.cc \
				$(SRC_DIR)/src/hb-ot-shaper-arabic.cc \
				$(SRC_DIR)/src/hb-ot-shaper-default.cc \
				$(SRC_DIR)/src/hb-ot-shaper-hangul.cc \
				$(SRC_DIR)/src/hb-ot-shaper-hebrew.cc \
				$(SRC_DIR)/src/hb-ot-shaper-indic-table.cc \
				$(SRC_DIR)/src/hb-ot-shaper-indic.cc \
				$(SRC_DIR)/src/hb-ot-shaper-khmer.cc \
				$(SRC_DIR)/src/hb-ot-shaper-myanmar.cc \
				$(SRC_DIR)/src/hb-ot-shaper-syllabic.cc \
				$(SRC_DIR)/src/hb-ot-shaper-thai.cc \
				$(SRC_DIR)/src/hb-ot-shaper-use.cc \
				$(SRC_DIR)/src/hb-ot-shaper-vowel-constraints.cc \
				$(SRC_DIR)/src/hb-ot-tag.cc \
				$(SRC_DIR)/src/hb-ot-var.cc \
				$(SRC_DIR)/src/hb-outline.cc \
				$(SRC_DIR)/src/hb-paint-extents.cc \
				$(SRC_DIR)/src/hb-paint.cc \
				$(SRC_DIR)/src/hb-set.cc \
				$(SRC_DIR)/src/hb-shape-plan.cc \
				$(SRC_DIR)/src/hb-shape.cc \
				$(SRC_DIR)/src/hb-shaper.cc \
				$(SRC_DIR)/src/hb-static.cc \
				$(SRC_DIR)/src/hb-style.cc \
				$(SRC_DIR)/src/hb-ucd.cc \
				$(SRC_DIR)/src/hb-unicode.cc \

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

# STATIC_LIB = 
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libcutils.a) \
				$(wildcard $(OUT_LIB_DIR)/libutils.a) \
				$(wildcard $(OUT_LIB_DIR)/liblog.a) \
				$(wildcard $(OUT_LIB_DIR)/libicuuc.a) \

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