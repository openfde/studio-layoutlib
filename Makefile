
MAKE = make -j32

PRE_SUBDIRS := modp_b64 piex wuffs-mirror-release-c zlib fmtlib liblog libbase libcutils libutils libutils_binder \
			libwebp server_configurable_flags image_io libziparchive libjpeg expat dng_sdk binder libhwbinder \
			jsoncpp libpng libprocessgroup libincfs-utils libandroidicuinit libhidl libnativehelper libandroidfw \
			libicuuc sqlite harfbuzz_ng freetype libultrahdr sfntly ui minikin libskia gui libinput hostgraphics \
			hwui

RUNTIME_SUBDIRS := libandroid_runtime layoutlib_jni

SUBDIRS := $(PRE_SUBDIRS) + $(RUNTIME_SUBDIRS)

all:
	for dir in $(PRE_SUBDIRS); do \
		$(MAKE) -C $$dir ; \
		if [ "$$?" != "0" ]; then\
			echo "compile $$dir fail"; \
			exit 1 ; \
		fi; \
	done

	for dir in $(PRE_SUBDIRS); \
		do $(MAKE) -C $$dir install; \
	done

	for dir in $(RUNTIME_SUBDIRS); do \
		$(MAKE) -C $$dir ; \
		if [ "$$?" != "0" ]; then\
			echo "compile $$dir fail"; \
			exit 1 ; \
		fi; \
	done

	for dir in $(RUNTIME_SUBDIRS); \
		do $(MAKE) -C $$dir install; \
	done

.PHONY: clean distclean cleanall

$(SUBDIRS):ECHO
	+$(MAKE) -C $@
ECHO:
	@echo begin compile $(SUBDIRS)

clean: $(clean_dirs)
	for dir in $(SUBDIRS); \
		do $(MAKE) -C $$dir clean; \
	done

install:
	for dir in $(SUBDIRS); \
		do $(MAKE) -C $$dir install; \
	done

distclean:
	for dir in $(SUBDIRS); \
		do $(MAKE) -C $$dir distclean; \
	done

cleanall:
	for dir in $(SUBDIRS); \
		do $(MAKE) -C $$dir cleanall; \
	done
