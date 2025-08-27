
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -Werror -Wextra -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./../libbase/include -I./../liblog/include -I./../libutils/include \
			-Wno-exit-time-destructors

CFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \


LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libcutils.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/config_utils.cpp \
				$(SRC_DIR)/iosched_policy.cpp \
				$(SRC_DIR)/load_file.cpp \
				$(SRC_DIR)/native_handle.cpp \
				$(SRC_DIR)/properties.cpp \
				$(SRC_DIR)/record_stream.cpp \
				$(SRC_DIR)/strlcpy.c \
				$(SRC_DIR)/canned_fs_config.cpp \
				$(SRC_DIR)/fs_config.cpp \
				$(SRC_DIR)/fs.cpp \
				$(SRC_DIR)/hashmap.cpp \
				$(SRC_DIR)/multiuser.cpp \
				$(SRC_DIR)/str_parms.cpp \
				$(SRC_DIR)/ashmem-host.cpp \
				$(SRC_DIR)/trace-host.cpp \
				$(SRC_DIR)/sockets.cpp \
				$(SRC_DIR)/socket_inaddr_any_server_unix.cpp \
				$(SRC_DIR)/socket_local_client_unix.cpp \
				$(SRC_DIR)/socket_local_server_unix.cpp \
				$(SRC_DIR)/socket_network_client_unix.cpp \
				$(SRC_DIR)/sockets_unix.cpp \

CC_SOURCES := 

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libbase.so) \
				$(wildcard $(OUT_LIB_DIR)/liblog.so) \

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