
# 编译器和标志
CXX := clang
CXXFLAGS := -I. -I./include -I./modules/skcms -I./linux -I./simd/arm -I./../native/libs/arect/include -I./../libbase/include -I./../libcutils/include -I./../liblog/include \
			-fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-DWITH_SIMD -DNO_GETENV -O3 -fstrict-aliasing -Werror -Wno-sign-compare -Wno-unused-parameter -DNEON_INTRINSICS

LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libjpeg.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/jaricom.c \
				$(SRC_DIR)/jcapimin.c \
				$(SRC_DIR)/jcapistd.c \
				$(SRC_DIR)/jcarith.c \
				$(SRC_DIR)/jccoefct.c \
				$(SRC_DIR)/jccolor.c \
				$(SRC_DIR)/jcdctmgr.c \
				$(SRC_DIR)/jchuff.c \
				$(SRC_DIR)/jcicc.c \
				$(SRC_DIR)/jcinit.c \
				$(SRC_DIR)/jcmainct.c \
				$(SRC_DIR)/jcmarker.c \
				$(SRC_DIR)/jcmaster.c \
				$(SRC_DIR)/jcomapi.c \
				$(SRC_DIR)/jcparam.c \
				$(SRC_DIR)/jcphuff.c \
				$(SRC_DIR)/jcprepct.c \
				$(SRC_DIR)/jcsample.c \
				$(SRC_DIR)/jctrans.c \
				$(SRC_DIR)/jdapimin.c \
				$(SRC_DIR)/jdapistd.c \
				$(SRC_DIR)/jdarith.c \
				$(SRC_DIR)/jdatadst.c \
				$(SRC_DIR)/jdatasrc.c \
				$(SRC_DIR)/jdcoefct.c \
				$(SRC_DIR)/jdcolor.c \
				$(SRC_DIR)/jddctmgr.c \
				$(SRC_DIR)/jdhuff.c \
				$(SRC_DIR)/jdicc.c \
				$(SRC_DIR)/jdinput.c \
				$(SRC_DIR)/jdmainct.c \
				$(SRC_DIR)/jdmarker.c \
				$(SRC_DIR)/jdmaster.c \
				$(SRC_DIR)/jdmerge.c \
				$(SRC_DIR)/jdphuff.c \
				$(SRC_DIR)/jdpostct.c \
				$(SRC_DIR)/jdsample.c \
				$(SRC_DIR)/jdtrans.c \
				$(SRC_DIR)/jerror.c \
				$(SRC_DIR)/jfdctflt.c \
				$(SRC_DIR)/jfdctfst.c \
				$(SRC_DIR)/jfdctint.c \
				$(SRC_DIR)/jidctflt.c \
				$(SRC_DIR)/jidctfst.c \
				$(SRC_DIR)/jidctint.c \
				$(SRC_DIR)/jidctred.c \
				$(SRC_DIR)/jmemmgr.c \
				$(SRC_DIR)/jmemnobs.c \
				$(SRC_DIR)/jpeg_nbits_table.c \
				$(SRC_DIR)/jquant1.c \
				$(SRC_DIR)/jquant2.c \
				$(SRC_DIR)/jutils.c \
				$(SRC_DIR)/simd/arm/aarch64/jchuff-neon.c \
				$(SRC_DIR)/simd/arm/aarch64/jsimd.c \
				$(SRC_DIR)/simd/arm/jccolor-neon.c \
				$(SRC_DIR)/simd/arm/jcgray-neon.c \
				$(SRC_DIR)/simd/arm/jcphuff-neon.c \
				$(SRC_DIR)/simd/arm/jcsample-neon.c \
				$(SRC_DIR)/simd/arm/jdcolor-neon.c \
				$(SRC_DIR)/simd/arm/jdmerge-neon.c \
				$(SRC_DIR)/simd/arm/jdsample-neon.c \
				$(SRC_DIR)/simd/arm/jfdctfst-neon.c \
				$(SRC_DIR)/simd/arm/jfdctint-neon.c \
				$(SRC_DIR)/simd/arm/jidctfst-neon.c \
				$(SRC_DIR)/simd/arm/jidctint-neon.c \
				$(SRC_DIR)/simd/arm/jidctred-neon.c \
				$(SRC_DIR)/simd/arm/jquanti-neon.c 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS)

# STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libbase.a)
STATIC_LIB = 

# 默认目标
all: prepare $(TARGET)

prepare:
	@echo "prepare.. $@"
	@mkdir -p $(OUT_LIB_DIR)
	@mkdir -p $(OBJ_DIR)

$(TARGET): $(OBJECTS) $(STATIC_LIB)
	$(AR) $(ARFLAGS) -o $@ $(OBJECTS) $(STATIC_LIB)
	@echo "Built $@"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)
	@mkdir -p $(OBJ_DIR)

install:
	cp $(TARGET) $(OUT_LIB_DIR)

.PHONY: all prepare install