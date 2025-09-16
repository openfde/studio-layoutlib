
# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := -fPIC -Wall -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./include_aidl -I./ndk/include_cpp -I./../libbase/include -I./../libcutils/include -I./../liblog/include -I./../libutils/include \
			-I./../libprocessgroup/include -I./../kernel-headers/uapi -I./../libsystem/include \
			-Wextra -Wextra-semi -Werror -Wreorder-init-list -Wunused-const-variable -Wno-unknown-attributes -Wno-inconsistent-missing-override \
			-Wno-c99-designator -Wno-missing-field-initializers -Wno-unused-but-set-variable -Wno-unknown-warning-option\
        	-DANDROID_BASE_UNIQUE_FD_DISABLE_IMPLICIT_CONVERSION -DANDROID_UTILS_REF_BASE_DISABLE_IMPLICIT_CONSTRUCTION -DBINDER_WITH_KERNEL_IPC

CFLAGS := -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \


LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libbinder.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/$(SRC_DIR)/IMemory.cpp \
				$(SRC_DIR)/IShellCallback.cpp \
				$(SRC_DIR)/LazyServiceRegistrar.cpp \
				$(SRC_DIR)/MemoryBase.cpp \
				$(SRC_DIR)/MemoryDealer.cpp \
				$(SRC_DIR)/MemoryHeapBase.cpp \
				$(SRC_DIR)/ParcelableHolder.cpp \
				$(SRC_DIR)/PersistableBundle.cpp \
				$(SRC_DIR)/Binder.cpp \
				$(SRC_DIR)/BpBinder.cpp \
				$(SRC_DIR)/Debug.cpp \
				$(SRC_DIR)/FdTrigger.cpp \
				$(SRC_DIR)/IInterface.cpp \
				$(SRC_DIR)/IResultReceiver.cpp \
				$(SRC_DIR)/Parcel.cpp \
				$(SRC_DIR)/ParcelFileDescriptor.cpp \
				$(SRC_DIR)/RecordedTransaction.cpp \
				$(SRC_DIR)/RpcSession.cpp \
				$(SRC_DIR)/RpcServer.cpp \
				$(SRC_DIR)/RpcState.cpp \
				$(SRC_DIR)/RpcTransportRaw.cpp \
				$(SRC_DIR)/Stability.cpp \
				$(SRC_DIR)/Status.cpp \
				$(SRC_DIR)/TextOutput.cpp \
				$(SRC_DIR)/Utils.cpp \
				$(SRC_DIR)/file.cpp \
				$(SRC_DIR)/OS_android.cpp \
				$(SRC_DIR)/OS_unix_base.cpp \
				$(SRC_DIR)/UtilsHost.cpp \
				$(SRC_DIR)/BufferedTextOutput.cpp \
				$(SRC_DIR)/IPCThreadState.cpp \
				$(SRC_DIR)/IServiceManager.cpp \
				$(SRC_DIR)/ProcessState.cpp \
				$(SRC_DIR)/Static.cpp \
				$(SRC_DIR)/ServiceManagerHost.cpp \
				$(SRC_DIR)/IPermissionController.cpp \
				$(SRC_DIR)/PermissionCache.cpp \
				$(SRC_DIR)/PermissionController.cpp \

CC_SOURCES := 

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

# STATIC_LIB = 
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/liblog.a) \
				$(wildcard $(OUT_LIB_DIR)/libbase.a) \
				$(wildcard $(OUT_LIB_DIR)/libutils_binder.a) \
				$(wildcard $(OUT_LIB_DIR)/libutils.a) \
				$(wildcard $(OUT_LIB_DIR)/libcutils.a)

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