include ../makefile_cfg

# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := $(CXXFLAGS_COMMON) -fPIC -Wall -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./cpp/src \
			-fstack-protector --param=ssp-buffer-size=4 \
			-Werror -fno-exceptions -fno-strict-aliasing -Wall -Wno-unused-parameter -Wno-missing-field-initializers \
 			-fvisibility=hidden -ffunction-sections -funwind-tables -g -fno-short-enums \
 			-Wa,--noexecstack -U_FORTIFY_SOURCE -Wno-extra -Wno-ignored-qualifiers -Wno-type-limits -Os \
 			-fno-ident -fdata-sections -ffunction-sections -fomit-frame-pointer -DANGLE_DX11 -D_FILE_OFFSET_BITS=64 \
 			-DNO_TCMALLOC -DDISCARDABLE_MEMORY_ALWAYS_SUPPORTED_NATIVELY -DSYSTEM_NATIVELY_SIGNALS_MEMORY_PRESSURE -DDISABLE_NACL \
 			-DCHROMIUM_BUILD -DUSE_LIBJPEG_TURBO=1 -DUSE_PROPRIETARY_CODECS -DENABLE_CONFIGURATION_POLICY -DENABLE_GPU=1 -DUSE_OPENSSL=1 -DENABLE_EGLIMAGE=1 \
 			-DSFNTLY_NO_EXCEPTION -DU_USING_ICU_NAMESPACE=0 -D__STDC_CONSTANT_MACROS \
 			-D__STDC_FORMAT_MACROS -DANDROID -D__GNU_SOURCE=1 -D_STLP_USE_PTR_SPECIALIZATIONS=1 -D"CHROME_BUILD_ID=\"\"" \
 			-DNDEBUG -DNVALGRIND -DDYNAMIC_ANNOTATIONS_ENABLED=0 -D_FORTIFY_SOURCE=2 \
			-fno-threadsafe-statics -fvisibility-inlines-hidden -Wsign-compare -Wno-abi -Wno-error=c++0x-compat \
        	-Wno-non-virtual-dtor -Wno-sign-promo \

LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libsfntly.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := 

CC_SOURCES :=  $(SRC_DIR)/cpp/src/sfntly/font_factory.cc \
				$(SRC_DIR)/cpp/src/sfntly/font.cc \
				$(SRC_DIR)/cpp/src/sfntly/tag.cc \
				$(shell find $(SRC_DIR)/cpp/src/sfntly/data/ -name '*.cc') \
				$(shell find $(SRC_DIR)/cpp/src/sfntly/port/ -name '*.cc') \
				$(shell find $(SRC_DIR)/cpp/src/sfntly/table/ -name '*.cc') \
				$(SRC_DIR)/cpp/src/sample/chromium/font_subsetter.cc \
				$(SRC_DIR)/cpp/src/sample/chromium/subsetter_impl.cc \

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libicuuc.a) \


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
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)
	@mkdir -p $(OBJ_DIR)

install:
	cp $(TARGET) $(OUT_LIB_DIR)

.PHONY: all prepare clean install