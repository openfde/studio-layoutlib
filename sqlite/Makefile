include ../makefile_cfg

# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := $(CXXFLAGS_COMMON) -fPIC -Wall -Werror -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./../liblog/include \
			-I./../libicuuc/source/common -I./../libicuuc/source/i18n \
			-DSQLITE_ENABLE_ICU -Wno-unused-function -Wno-unused-variable


CFLAGS := $(CFLAGS_COMMON) -fPIC -Wall -g -D__EXPORTED_HEADERS__ \
			-I. -I./include \
			-I./../libicuuc/source/common -I./../libicuuc/source/i18n \
			-DSQLITE_ENABLE_ICU -DHAVE_POSIX_FALLOCATE=1 -DNDEBUG=1 -DHAVE_USLEEP=1 -DSQLITE_HAVE_ISNAN \
        	-DSQLITE_DEFAULT_JOURNAL_SIZE_LIMIT=1048576 -DSQLITE_THREADSAFE=2 -DSQLITE_TEMP_STORE=3 \
        	-DSQLITE_POWERSAFE_OVERWRITE=1 -DSQLITE_DEFAULT_FILE_FORMAT=4 \
        	-DSQLITE_DEFAULT_AUTOVACUUM=1 -DSQLITE_ENABLE_MEMORY_MANAGEMENT=1 -DSQLITE_ENABLE_FTS3 \
        	-DSQLITE_ENABLE_FTS3_BACKWARDS -DSQLITE_ENABLE_FTS4 -DSQLITE_OMIT_BUILTIN_TEST \
        	-DSQLITE_OMIT_COMPILEOPTION_DIAGS -DSQLITE_OMIT_LOAD_EXTENSION \
        	-DSQLITE_DEFAULT_FILE_PERMISSIONS=0600 -DSQLITE_SECURE_DELETE -DSQLITE_ENABLE_BATCH_ATOMIC_WRITE \
        	-DBIONIC_IOCTL_NO_SIGNEDNESS_OVERLOAD -DSQLITE_DEFAULT_LEGACY_ALTER_TABLE -DSQLITE_ALLOW_ROWID_IN_VIEW -DSQLITE_ENABLE_BYTECODE_VTAB \
        	-Wno-unused-parameter -Werror -ftrivial-auto-var-init=pattern 

LDFLAGS := -shared -Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64' -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# 目标库
TARGET := libsqlite.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/android/PhoneNumberUtils.cpp \
				$(SRC_DIR)/android/OldPhoneNumberUtils.cpp \
				$(SRC_DIR)/android/sqlite3_android.cpp \

CC_SOURCES := 

C_SOURCES := $(SRC_DIR)/dist/sqlite3.c \

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

#$(wildcard $(OUT_LIB_DIR)/libicui18n.a) \
# STATIC_LIB = 
STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libicuuc.a) \
				$(wildcard $(OUT_LIB_DIR)/liblog.a) \

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