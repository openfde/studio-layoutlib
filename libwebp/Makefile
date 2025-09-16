
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \
			-DANDROID -DWEBP_SWAP_16BIT_CSP -DWEBP_USE_THREAD -O2 -Wall -Werror 
LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libwebp.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := 

CC_SOURCES :=

C_SOURCES := $(SRC_DIR)/src/dec/alpha_dec.c \
				$(SRC_DIR)/src/dec/buffer_dec.c \
				$(SRC_DIR)/src/dec/frame_dec.c \
				$(SRC_DIR)/src/dec/idec_dec.c \
				$(SRC_DIR)/src/dec/io_dec.c \
				$(SRC_DIR)/src/dec/quant_dec.c \
				$(SRC_DIR)/src/dec/tree_dec.c \
				$(SRC_DIR)/src/dec/vp8_dec.c \
				$(SRC_DIR)/src/dec/vp8l_dec.c \
				$(SRC_DIR)/src/dec/webp_dec.c \
				$(SRC_DIR)/src/demux/anim_decode.c \
				$(SRC_DIR)/src/demux/demux.c \
				$(SRC_DIR)/src/dsp/alpha_processing.c \
				$(SRC_DIR)/src/dsp/alpha_processing_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/alpha_processing_neon.c \
				$(SRC_DIR)/src/dsp/alpha_processing_sse2.c \
				$(SRC_DIR)/src/dsp/alpha_processing_sse41.c \
				$(SRC_DIR)/src/dsp/cpu.c \
				$(SRC_DIR)/src/dsp/dec.c \
				$(SRC_DIR)/src/dsp/dec_clip_tables.c \
				$(SRC_DIR)/src/dsp/dec_mips32.c \
				$(SRC_DIR)/src/dsp/dec_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/dec_msa.c \
				$(SRC_DIR)/src/dsp/dec_neon.c \
				$(SRC_DIR)/src/dsp/dec_sse2.c \
				$(SRC_DIR)/src/dsp/dec_sse41.c \
				$(SRC_DIR)/src/dsp/filters.c \
				$(SRC_DIR)/src/dsp/filters_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/filters_msa.c \
				$(SRC_DIR)/src/dsp/filters_neon.c \
				$(SRC_DIR)/src/dsp/filters_sse2.c \
				$(SRC_DIR)/src/dsp/lossless.c \
				$(SRC_DIR)/src/dsp/lossless_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/lossless_msa.c \
				$(SRC_DIR)/src/dsp/lossless_neon.c \
				$(SRC_DIR)/src/dsp/lossless_sse2.c \
				$(SRC_DIR)/src/dsp/lossless_sse41.c \
				$(SRC_DIR)/src/dsp/rescaler.c \
				$(SRC_DIR)/src/dsp/rescaler_mips32.c \
				$(SRC_DIR)/src/dsp/rescaler_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/rescaler_msa.c \
				$(SRC_DIR)/src/dsp/rescaler_neon.c \
				$(SRC_DIR)/src/dsp/rescaler_sse2.c \
				$(SRC_DIR)/src/dsp/upsampling.c \
				$(SRC_DIR)/src/dsp/upsampling_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/upsampling_msa.c \
				$(SRC_DIR)/src/dsp/upsampling_neon.c \
				$(SRC_DIR)/src/dsp/upsampling_sse2.c \
				$(SRC_DIR)/src/dsp/upsampling_sse41.c \
				$(SRC_DIR)/src/dsp/yuv.c \
				$(SRC_DIR)/src/dsp/yuv_mips32.c \
				$(SRC_DIR)/src/dsp/yuv_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/yuv_neon.c \
				$(SRC_DIR)/src/dsp/yuv_sse2.c \
				$(SRC_DIR)/src/dsp/yuv_sse41.c \
				$(SRC_DIR)/src/utils/bit_reader_utils.c \
				$(SRC_DIR)/src/utils/color_cache_utils.c \
				$(SRC_DIR)/src/utils/filters_utils.c \
				$(SRC_DIR)/src/utils/huffman_utils.c \
				$(SRC_DIR)/src/utils/quant_levels_dec_utils.c \
				$(SRC_DIR)/src/utils/random_utils.c \
				$(SRC_DIR)/src/utils/rescaler_utils.c \
				$(SRC_DIR)/src/utils/thread_utils.c \
				$(SRC_DIR)/src/utils/utils.c \
				$(SRC_DIR)/sharpyuv/sharpyuv.c \
				$(SRC_DIR)/sharpyuv/sharpyuv_cpu.c \
				$(SRC_DIR)/sharpyuv/sharpyuv_csp.c \
				$(SRC_DIR)/sharpyuv/sharpyuv_dsp.c \
				$(SRC_DIR)/sharpyuv/sharpyuv_gamma.c \
				$(SRC_DIR)/sharpyuv/sharpyuv_neon.c \
				$(SRC_DIR)/sharpyuv/sharpyuv_sse2.c \
				$(SRC_DIR)/src/dsp/cost.c \
				$(SRC_DIR)/src/dsp/cost_mips32.c \
				$(SRC_DIR)/src/dsp/cost_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/cost_neon.c \
				$(SRC_DIR)/src/dsp/cost_sse2.c \
				$(SRC_DIR)/src/dsp/cpu.c \
				$(SRC_DIR)/src/dsp/enc.c \
				$(SRC_DIR)/src/dsp/enc_mips32.c \
				$(SRC_DIR)/src/dsp/enc_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/enc_msa.c \
				$(SRC_DIR)/src/dsp/enc_neon.c \
				$(SRC_DIR)/src/dsp/enc_sse2.c \
				$(SRC_DIR)/src/dsp/enc_sse41.c \
				$(SRC_DIR)/src/dsp/lossless_enc.c \
				$(SRC_DIR)/src/dsp/lossless_enc_mips32.c \
				$(SRC_DIR)/src/dsp/lossless_enc_mips_dsp_r2.c \
				$(SRC_DIR)/src/dsp/lossless_enc_msa.c \
				$(SRC_DIR)/src/dsp/lossless_enc_neon.c \
				$(SRC_DIR)/src/dsp/lossless_enc_sse2.c \
				$(SRC_DIR)/src/dsp/lossless_enc_sse41.c \
				$(SRC_DIR)/src/dsp/ssim.c \
				$(SRC_DIR)/src/dsp/ssim_sse2.c \
				$(SRC_DIR)/src/enc/alpha_enc.c \
				$(SRC_DIR)/src/enc/analysis_enc.c \
				$(SRC_DIR)/src/enc/backward_references_cost_enc.c \
				$(SRC_DIR)/src/enc/backward_references_enc.c \
				$(SRC_DIR)/src/enc/config_enc.c \
				$(SRC_DIR)/src/enc/cost_enc.c \
				$(SRC_DIR)/src/enc/filter_enc.c \
				$(SRC_DIR)/src/enc/frame_enc.c \
				$(SRC_DIR)/src/enc/histogram_enc.c \
				$(SRC_DIR)/src/enc/iterator_enc.c \
				$(SRC_DIR)/src/enc/near_lossless_enc.c \
				$(SRC_DIR)/src/enc/picture_csp_enc.c \
				$(SRC_DIR)/src/enc/picture_enc.c \
				$(SRC_DIR)/src/enc/picture_psnr_enc.c \
				$(SRC_DIR)/src/enc/picture_rescale_enc.c \
				$(SRC_DIR)/src/enc/picture_tools_enc.c \
				$(SRC_DIR)/src/enc/predictor_enc.c \
				$(SRC_DIR)/src/enc/quant_enc.c \
				$(SRC_DIR)/src/enc/syntax_enc.c \
				$(SRC_DIR)/src/enc/token_enc.c \
				$(SRC_DIR)/src/enc/tree_enc.c \
				$(SRC_DIR)/src/enc/vp8l_enc.c \
				$(SRC_DIR)/src/enc/webp_enc.c \
				$(SRC_DIR)/src/mux/anim_encode.c \
				$(SRC_DIR)/src/mux/muxedit.c \
				$(SRC_DIR)/src/mux/muxinternal.c \
				$(SRC_DIR)/src/mux/muxread.c \
				$(SRC_DIR)/src/utils/bit_writer_utils.c \
				$(SRC_DIR)/src/utils/huffman_encode_utils.c \
				$(SRC_DIR)/src/utils/quant_levels_utils.c \

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

# STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libbase.a)
STATIC_LIB = 

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