
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./../libjpeg \
			-DqDNGValidate=0 -DUNIX_ENV=1 -DqDNGBigEndian=0 -DqDNGThreadSafe=1 -DqDNGUseLibJPEG=1 -DqDNGUseXMP=0 \
			-DqDNGValidateTarget=1 -DqAndroid=1 -Werror -Wsign-compare -Wno-reorder -Wframe-larger-than=20000 -Wno-unused-parameter -Wno-ignored-qualifiers
LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libdng_sdk.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/source/dng_1d_function.cpp \
				$(SRC_DIR)/source/dng_1d_table.cpp \
				$(SRC_DIR)/source/dng_abort_sniffer.cpp \
				$(SRC_DIR)/source/dng_area_task.cpp \
				$(SRC_DIR)/source/dng_bad_pixels.cpp \
				$(SRC_DIR)/source/dng_bottlenecks.cpp \
				$(SRC_DIR)/source/dng_camera_profile.cpp \
				$(SRC_DIR)/source/dng_color_space.cpp \
				$(SRC_DIR)/source/dng_color_spec.cpp \
				$(SRC_DIR)/source/dng_date_time.cpp \
				$(SRC_DIR)/source/dng_exceptions.cpp \
				$(SRC_DIR)/source/dng_exif.cpp \
				$(SRC_DIR)/source/dng_file_stream.cpp \
				$(SRC_DIR)/source/dng_filter_task.cpp \
				$(SRC_DIR)/source/dng_fingerprint.cpp \
				$(SRC_DIR)/source/dng_gain_map.cpp \
				$(SRC_DIR)/source/dng_globals.cpp \
				$(SRC_DIR)/source/dng_host.cpp \
				$(SRC_DIR)/source/dng_hue_sat_map.cpp \
				$(SRC_DIR)/source/dng_ifd.cpp \
				$(SRC_DIR)/source/dng_image.cpp \
				$(SRC_DIR)/source/dng_image_writer.cpp \
				$(SRC_DIR)/source/dng_info.cpp \
				$(SRC_DIR)/source/dng_iptc.cpp \
				$(SRC_DIR)/source/dng_jpeg_image.cpp \
				$(SRC_DIR)/source/dng_jpeg_memory_source.cpp \
				$(SRC_DIR)/source/dng_lens_correction.cpp \
				$(SRC_DIR)/source/dng_linearization_info.cpp \
				$(SRC_DIR)/source/dng_lossless_jpeg.cpp \
				$(SRC_DIR)/source/dng_matrix.cpp \
				$(SRC_DIR)/source/dng_memory.cpp \
				$(SRC_DIR)/source/dng_memory_stream.cpp \
				$(SRC_DIR)/source/dng_misc_opcodes.cpp \
				$(SRC_DIR)/source/dng_mosaic_info.cpp \
				$(SRC_DIR)/source/dng_mutex.cpp \
				$(SRC_DIR)/source/dng_negative.cpp \
				$(SRC_DIR)/source/dng_opcode_list.cpp \
				$(SRC_DIR)/source/dng_opcodes.cpp \
				$(SRC_DIR)/source/dng_orientation.cpp \
				$(SRC_DIR)/source/dng_parse_utils.cpp \
				$(SRC_DIR)/source/dng_pixel_buffer.cpp \
				$(SRC_DIR)/source/dng_point.cpp \
				$(SRC_DIR)/source/dng_preview.cpp \
				$(SRC_DIR)/source/dng_pthread.cpp \
				$(SRC_DIR)/source/dng_rational.cpp \
				$(SRC_DIR)/source/dng_read_image.cpp \
				$(SRC_DIR)/source/dng_rect.cpp \
				$(SRC_DIR)/source/dng_ref_counted_block.cpp \
				$(SRC_DIR)/source/dng_reference.cpp \
				$(SRC_DIR)/source/dng_render.cpp \
				$(SRC_DIR)/source/dng_resample.cpp \
				$(SRC_DIR)/source/dng_safe_arithmetic.cpp \
				$(SRC_DIR)/source/dng_shared.cpp \
				$(SRC_DIR)/source/dng_simple_image.cpp \
				$(SRC_DIR)/source/dng_spline.cpp \
				$(SRC_DIR)/source/dng_stream.cpp \
				$(SRC_DIR)/source/dng_string.cpp \
				$(SRC_DIR)/source/dng_string_list.cpp \
				$(SRC_DIR)/source/dng_tag_types.cpp \
				$(SRC_DIR)/source/dng_temperature.cpp \
				$(SRC_DIR)/source/dng_tile_iterator.cpp \
				$(SRC_DIR)/source/dng_tone_curve.cpp \
				$(SRC_DIR)/source/dng_utils.cpp \
				$(SRC_DIR)/source/dng_xy_coord.cpp \
				$(SRC_DIR)/source/dng_xmp.cpp \

CC_SOURCES :=

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

# STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libbase.a)
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libz.a) \
				$(wildcard $(OUT_LIB_DIR)/libjpeg.a) \


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
	$(CC) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@mkdir -p $(dir $@)
	$(CC) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR) $(TARGET)
	@mkdir -p $(OBJ_DIR)

install:
	cp $(TARGET) $(OUT_LIB_DIR)

.PHONY: all prepare clean install