include ../makefile_cfg

# 编译器和标志
CC := clang
CXX := clang++
CXXFLAGS := $(CXXFLAGS_COMMON) -fPIC -Wall -std=c++17 -stdlib=libc++ -g -D__EXPORTED_HEADERS__ \
			-I. -I./include -I./modules/skcms -I./linux -I./../native/libs/arect/include -I./../libbase/include -I./../libcutils/include -I./../liblog/include \
			-I./../libjpeg -I./../libwebp/src/ -I./../wuffs-mirror-release-c/release/c -I./../freetype/include -I./../dng_sdk/source -I./../piex \
			-U_FORTIFY_SOURCE -DATRACE_TAG=ATRACE_TAG_VIEW -DSKIA_DLL -DSKIA_IMPLEMENTATION=1 -D_FORTIFY_SOURCE=1 -DSK_BUILD_FOR_ANDROID \
        	-Wno-attributes -Wno-implicit-fallthrough -Wno-missing-field-initializers -Wno-sign-conversion -Wno-thread-safety-analysis \
        	-Wno-unknown-warning-option -Wno-unused-parameter -Wno-unused-variable -fvisibility=hidden

LDFLAGS := -shared -lpthread -lc++ -lstdc++ -lc++abi -L./../libs \
			-Wl,-rpath='$$ORIGIN/':'$$ORIGIN/lib64':'$$ORIGIN/../lib64':'$$ORIGIN/../../lib64':'$$ORIGIN/../../../lib64'

LLFLAGS :=
# LLFLAGS := -lhwui -lhwbinder -lwebp -lminikin -lsqlite -lsfntly -lskia -landroidfw -lexpat -lfmtlib -lft2 -lgui_window_info_static \
# 			-lharfbuzz_ng -lhidlbase -lhostgraphics -licuuc -landroidicuinit -lultrahdr -limage_io -lincfs-utils -linput \
# 			-ljpeg -ljsoncpp -lmodpb64 -lnativehelper -lpiex -lpng -lprocessgroup -lui-types -lziparchive -lserver_configurable_flags \
# 			-lutils -lutils_binder -lwuffs_mirror_release_c -lz -lbinder -lcutils -ldng_sdk -llog -lbase \
# 			-ldl -lm -lrt -Wl,--no-undefined

LOCAL_EXPORT_C_INCLUDE_DIRS := $(CURDIR)/include

AR = ar
ARFLAGS = rcs

# AR = $(CXX)
# ARFLAGS = $(LDFLAGS)

# 目标库
TARGET := libskia.a

# 目录结构
OUT_LIB_DIR := ../libs
SRC_DIR := .
OBJ_DIR := obj

# 源文件
CPP_SOURCES := $(SRC_DIR)/client_utils/android/BitmapRegionDecoder.cpp \
				$(SRC_DIR)/client_utils/android/FrontBufferedStream.cpp \
				$(SRC_DIR)/src/android/SkAndroidFrameworkUtils.cpp \
				$(SRC_DIR)/src/android/SkAnimatedImage.cpp \
				$(SRC_DIR)/src/base/SkArenaAlloc.cpp \
				$(SRC_DIR)/src/base/SkBase64.cpp \
				$(SRC_DIR)/src/base/SkBezierCurves.cpp \
				$(SRC_DIR)/src/base/SkBlockAllocator.cpp \
				$(SRC_DIR)/src/base/SkBuffer.cpp \
				$(SRC_DIR)/src/base/SkContainers.cpp \
				$(SRC_DIR)/src/base/SkCubics.cpp \
				$(SRC_DIR)/src/base/SkDebug.cpp \
				$(SRC_DIR)/src/base/SkDeque.cpp \
				$(SRC_DIR)/src/base/SkFloatingPoint.cpp \
				$(SRC_DIR)/src/base/SkHalf.cpp \
				$(SRC_DIR)/src/base/SkMalloc.cpp \
				$(SRC_DIR)/src/base/SkMathPriv.cpp \
				$(SRC_DIR)/src/base/SkQuads.cpp \
				$(SRC_DIR)/src/base/SkSafeMath.cpp \
				$(SRC_DIR)/src/base/SkSemaphore.cpp \
				$(SRC_DIR)/src/base/SkSharedMutex.cpp \
				$(SRC_DIR)/src/base/SkSpinlock.cpp \
				$(SRC_DIR)/src/base/SkTDArray.cpp \
				$(SRC_DIR)/src/base/SkTSearch.cpp \
				$(SRC_DIR)/src/base/SkThreadID.cpp \
				$(SRC_DIR)/src/base/SkTime.cpp \
				$(SRC_DIR)/src/base/SkUTF.cpp \
				$(SRC_DIR)/src/base/SkUtils.cpp \
				$(SRC_DIR)/src/codec/SkAndroidCodec.cpp \
				$(SRC_DIR)/src/codec/SkAndroidCodecAdapter.cpp \
				$(SRC_DIR)/src/codec/SkBmpBaseCodec.cpp \
				$(SRC_DIR)/src/codec/SkBmpCodec.cpp \
				$(SRC_DIR)/src/codec/SkBmpMaskCodec.cpp \
				$(SRC_DIR)/src/codec/SkBmpRLECodec.cpp \
				$(SRC_DIR)/src/codec/SkBmpStandardCodec.cpp \
				$(SRC_DIR)/src/codec/SkCodec.cpp \
				$(SRC_DIR)/src/codec/SkCodecImageGenerator.cpp \
				$(SRC_DIR)/src/codec/SkColorPalette.cpp \
				$(SRC_DIR)/src/codec/SkEncodedInfo.cpp \
				$(SRC_DIR)/src/codec/SkExif.cpp \
				$(SRC_DIR)/src/codec/SkIcoCodec.cpp \
				$(SRC_DIR)/src/codec/SkImageGenerator_FromEncoded.cpp \
				$(SRC_DIR)/src/codec/SkJpegCodec.cpp \
				$(SRC_DIR)/src/codec/SkJpegDecoderMgr.cpp \
				$(SRC_DIR)/src/codec/SkJpegSourceMgr.cpp \
				$(SRC_DIR)/src/codec/SkJpegUtility.cpp \
				$(SRC_DIR)/src/codec/SkMaskSwizzler.cpp \
				$(SRC_DIR)/src/codec/SkParseEncodedOrigin.cpp \
				$(SRC_DIR)/src/codec/SkPixmapUtils.cpp \
				$(SRC_DIR)/src/codec/SkPngCodec.cpp \
				$(SRC_DIR)/src/codec/SkSampledCodec.cpp \
				$(SRC_DIR)/src/codec/SkSampler.cpp \
				$(SRC_DIR)/src/codec/SkSwizzler.cpp \
				$(SRC_DIR)/src/codec/SkTiffUtility.cpp \
				$(SRC_DIR)/src/codec/SkWbmpCodec.cpp \
				$(SRC_DIR)/src/codec/SkWebpCodec.cpp \
				$(SRC_DIR)/src/codec/SkWuffsCodec.cpp \
				$(SRC_DIR)/src/codec/SkXmp.cpp \
				$(SRC_DIR)/src/core/SkAAClip.cpp \
				$(SRC_DIR)/src/core/SkATrace.cpp \
				$(SRC_DIR)/src/core/SkAlphaRuns.cpp \
				$(SRC_DIR)/src/core/SkAnalyticEdge.cpp \
				$(SRC_DIR)/src/core/SkAnnotation.cpp \
				$(SRC_DIR)/src/core/SkAutoPixmapStorage.cpp \
				$(SRC_DIR)/src/core/SkBBHFactory.cpp \
				$(SRC_DIR)/src/core/SkBigPicture.cpp \
				$(SRC_DIR)/src/core/SkBitmap.cpp \
				$(SRC_DIR)/src/core/SkBitmapCache.cpp \
				$(SRC_DIR)/src/core/SkBitmapDevice.cpp \
				$(SRC_DIR)/src/core/SkBitmapProcState.cpp \
				$(SRC_DIR)/src/core/SkBitmapProcState_matrixProcs.cpp \
				$(SRC_DIR)/src/core/SkBitmapProcState_opts.cpp \
				$(SRC_DIR)/src/core/SkBitmapProcState_opts_ssse3.cpp \
				$(SRC_DIR)/src/core/SkBlendMode.cpp \
				$(SRC_DIR)/src/core/SkBlendModeBlender.cpp \
				$(SRC_DIR)/src/core/SkBlitMask_opts.cpp \
				$(SRC_DIR)/src/core/SkBlitMask_opts_ssse3.cpp \
				$(SRC_DIR)/src/core/SkBlitRow_D32.cpp \
				$(SRC_DIR)/src/core/SkBlitRow_opts.cpp \
				$(SRC_DIR)/src/core/SkBlitRow_opts_hsw.cpp \
				$(SRC_DIR)/src/core/SkBlitter.cpp \
				$(SRC_DIR)/src/core/SkBlitter_A8.cpp \
				$(SRC_DIR)/src/core/SkBlitter_ARGB32.cpp \
				$(SRC_DIR)/src/core/SkBlitter_Sprite.cpp \
				$(SRC_DIR)/src/core/SkBlurMask.cpp \
				$(SRC_DIR)/src/core/SkBlurMaskFilterImpl.cpp \
				$(SRC_DIR)/src/core/SkCachedData.cpp \
				$(SRC_DIR)/src/core/SkCanvas.cpp \
				$(SRC_DIR)/src/core/SkCanvasPriv.cpp \
				$(SRC_DIR)/src/core/SkCanvas_Raster.cpp \
				$(SRC_DIR)/src/core/SkCapabilities.cpp \
				$(SRC_DIR)/src/core/SkChecksum.cpp \
				$(SRC_DIR)/src/core/SkClipStack.cpp \
				$(SRC_DIR)/src/core/SkClipStackDevice.cpp \
				$(SRC_DIR)/src/core/SkColor.cpp \
				$(SRC_DIR)/src/core/SkColorFilter.cpp \
				$(SRC_DIR)/src/core/SkColorSpace.cpp \
				$(SRC_DIR)/src/core/SkColorSpaceXformSteps.cpp \
				$(SRC_DIR)/src/core/SkColorTable.cpp \
				$(SRC_DIR)/src/core/SkCompressedDataUtils.cpp \
				$(SRC_DIR)/src/core/SkContourMeasure.cpp \
				$(SRC_DIR)/src/core/SkConvertPixels.cpp \
				$(SRC_DIR)/src/core/SkCpu.cpp \
				$(SRC_DIR)/src/core/SkCubicClipper.cpp \
				$(SRC_DIR)/src/core/SkCubicMap.cpp \
				$(SRC_DIR)/src/core/SkData.cpp \
				$(SRC_DIR)/src/core/SkDataTable.cpp \
				$(SRC_DIR)/src/core/SkDescriptor.cpp \
				$(SRC_DIR)/src/core/SkDevice.cpp \
				$(SRC_DIR)/src/core/SkDistanceFieldGen.cpp \
				$(SRC_DIR)/src/core/SkDocument.cpp \
				$(SRC_DIR)/src/core/SkDraw.cpp \
				$(SRC_DIR)/src/core/SkDrawBase.cpp \
				$(SRC_DIR)/src/core/SkDrawLooper.cpp \
				$(SRC_DIR)/src/core/SkDrawShadowInfo.cpp \
				$(SRC_DIR)/src/core/SkDraw_atlas.cpp \
				$(SRC_DIR)/src/core/SkDraw_text.cpp \
				$(SRC_DIR)/src/core/SkDraw_vertices.cpp \
				$(SRC_DIR)/src/core/SkDrawable.cpp \
				$(SRC_DIR)/src/core/SkEdge.cpp \
				$(SRC_DIR)/src/core/SkEdgeBuilder.cpp \
				$(SRC_DIR)/src/core/SkEdgeClipper.cpp \
				$(SRC_DIR)/src/core/SkExecutor.cpp \
				$(SRC_DIR)/src/core/SkFlattenable.cpp \
				$(SRC_DIR)/src/core/SkFont.cpp \
				$(SRC_DIR)/src/core/SkFontDescriptor.cpp \
				$(SRC_DIR)/src/core/SkFontMetricsPriv.cpp \
				$(SRC_DIR)/src/core/SkFontMgr.cpp \
				$(SRC_DIR)/src/core/SkFontStream.cpp \
				$(SRC_DIR)/src/core/SkFont_serial.cpp \
				$(SRC_DIR)/src/core/SkGaussFilter.cpp \
				$(SRC_DIR)/src/core/SkGeometry.cpp \
				$(SRC_DIR)/src/core/SkGlobalInitialization_core.cpp \
				$(SRC_DIR)/src/core/SkGlyph.cpp \
				$(SRC_DIR)/src/core/SkGlyphRunPainter.cpp \
				$(SRC_DIR)/src/core/SkGraphics.cpp \
				$(SRC_DIR)/src/core/SkIDChangeListener.cpp \
				$(SRC_DIR)/src/core/SkImageFilter.cpp \
				$(SRC_DIR)/src/core/SkImageFilterCache.cpp \
				$(SRC_DIR)/src/core/SkImageFilterTypes.cpp \
				$(SRC_DIR)/src/core/SkImageGenerator.cpp \
				$(SRC_DIR)/src/core/SkImageInfo.cpp \
				$(SRC_DIR)/src/core/SkKnownRuntimeEffects.cpp \
				$(SRC_DIR)/src/core/SkLatticeIter.cpp \
				$(SRC_DIR)/src/core/SkLineClipper.cpp \
				$(SRC_DIR)/src/core/SkLocalMatrixImageFilter.cpp \
				$(SRC_DIR)/src/core/SkM44.cpp \
				$(SRC_DIR)/src/core/SkMD5.cpp \
				$(SRC_DIR)/src/core/SkMallocPixelRef.cpp \
				$(SRC_DIR)/src/core/SkMask.cpp \
				$(SRC_DIR)/src/core/SkMaskBlurFilter.cpp \
				$(SRC_DIR)/src/core/SkMaskCache.cpp \
				$(SRC_DIR)/src/core/SkMaskFilter.cpp \
				$(SRC_DIR)/src/core/SkMaskGamma.cpp \
				$(SRC_DIR)/src/core/SkMasks.cpp \
				$(SRC_DIR)/src/core/SkMatrix.cpp \
				$(SRC_DIR)/src/core/SkMatrixInvert.cpp \
				$(SRC_DIR)/src/core/SkMemset_opts.cpp \
				$(SRC_DIR)/src/core/SkMemset_opts_avx.cpp \
				$(SRC_DIR)/src/core/SkMemset_opts_erms.cpp \
				$(SRC_DIR)/src/core/SkMesh.cpp \
				$(SRC_DIR)/src/core/SkMipmap.cpp \
				$(SRC_DIR)/src/core/SkMipmapAccessor.cpp \
				$(SRC_DIR)/src/core/SkMipmapBuilder.cpp \
				$(SRC_DIR)/src/core/SkMipmapDrawDownSampler.cpp \
				$(SRC_DIR)/src/core/SkMipmapHQDownSampler.cpp \
				$(SRC_DIR)/src/core/SkOpts.cpp \
				$(SRC_DIR)/src/core/SkOverdrawCanvas.cpp \
				$(SRC_DIR)/src/core/SkPaint.cpp \
				$(SRC_DIR)/src/core/SkPaintPriv.cpp \
				$(SRC_DIR)/src/core/SkPath.cpp \
				$(SRC_DIR)/src/core/SkPathBuilder.cpp \
				$(SRC_DIR)/src/core/SkPathEffect.cpp \
				$(SRC_DIR)/src/core/SkPathMeasure.cpp \
				$(SRC_DIR)/src/core/SkPathRef.cpp \
				$(SRC_DIR)/src/core/SkPathUtils.cpp \
				$(SRC_DIR)/src/core/SkPath_serial.cpp \
				$(SRC_DIR)/src/core/SkPicture.cpp \
				$(SRC_DIR)/src/core/SkPictureData.cpp \
				$(SRC_DIR)/src/core/SkPictureFlat.cpp \
				$(SRC_DIR)/src/core/SkPicturePlayback.cpp \
				$(SRC_DIR)/src/core/SkPictureRecord.cpp \
				$(SRC_DIR)/src/core/SkPictureRecorder.cpp \
				$(SRC_DIR)/src/core/SkPixelRef.cpp \
				$(SRC_DIR)/src/core/SkPixmap.cpp \
				$(SRC_DIR)/src/core/SkPixmapDraw.cpp \
				$(SRC_DIR)/src/core/SkPoint.cpp \
				$(SRC_DIR)/src/core/SkPoint3.cpp \
				$(SRC_DIR)/src/core/SkPtrRecorder.cpp \
				$(SRC_DIR)/src/core/SkQuadClipper.cpp \
				$(SRC_DIR)/src/core/SkRRect.cpp \
				$(SRC_DIR)/src/core/SkRSXform.cpp \
				$(SRC_DIR)/src/core/SkRTree.cpp \
				$(SRC_DIR)/src/core/SkRasterClip.cpp \
				$(SRC_DIR)/src/core/SkRasterPipeline.cpp \
				$(SRC_DIR)/src/core/SkRasterPipelineBlitter.cpp \
				$(SRC_DIR)/src/core/SkReadBuffer.cpp \
				$(SRC_DIR)/src/core/SkReadPixelsRec.cpp \
				$(SRC_DIR)/src/core/SkRecord.cpp \
				$(SRC_DIR)/src/core/SkRecordDraw.cpp \
				$(SRC_DIR)/src/core/SkRecordOpts.cpp \
				$(SRC_DIR)/src/core/SkRecordedDrawable.cpp \
				$(SRC_DIR)/src/core/SkRecorder.cpp \
				$(SRC_DIR)/src/core/SkRecords.cpp \
				$(SRC_DIR)/src/core/SkRect.cpp \
				$(SRC_DIR)/src/core/SkRegion.cpp \
				$(SRC_DIR)/src/core/SkRegion_path.cpp \
				$(SRC_DIR)/src/core/SkResourceCache.cpp \
				$(SRC_DIR)/src/core/SkRuntimeBlender.cpp \
				$(SRC_DIR)/src/core/SkRuntimeEffect.cpp \
				$(SRC_DIR)/src/core/SkSLTypeShared.cpp \
				$(SRC_DIR)/src/core/SkScalar.cpp \
				$(SRC_DIR)/src/core/SkScalerContext.cpp \
				$(SRC_DIR)/src/core/SkScan.cpp \
				$(SRC_DIR)/src/core/SkScan_AAAPath.cpp \
				$(SRC_DIR)/src/core/SkScan_AntiPath.cpp \
				$(SRC_DIR)/src/core/SkScan_Antihair.cpp \
				$(SRC_DIR)/src/core/SkScan_Hairline.cpp \
				$(SRC_DIR)/src/core/SkScan_Path.cpp \
				$(SRC_DIR)/src/core/SkSpecialImage.cpp \
				$(SRC_DIR)/src/core/SkSpriteBlitter_ARGB32.cpp \
				$(SRC_DIR)/src/core/SkStream.cpp \
				$(SRC_DIR)/src/core/SkStrike.cpp \
				$(SRC_DIR)/src/core/SkStrikeCache.cpp \
				$(SRC_DIR)/src/core/SkStrikeSpec.cpp \
				$(SRC_DIR)/src/core/SkString.cpp \
				$(SRC_DIR)/src/core/SkStringUtils.cpp \
				$(SRC_DIR)/src/core/SkStroke.cpp \
				$(SRC_DIR)/src/core/SkStrokeRec.cpp \
				$(SRC_DIR)/src/core/SkStrokerPriv.cpp \
				$(SRC_DIR)/src/core/SkSwizzle.cpp \
				$(SRC_DIR)/src/core/SkSwizzler_opts.cpp \
				$(SRC_DIR)/src/core/SkSwizzler_opts_hsw.cpp \
				$(SRC_DIR)/src/core/SkSwizzler_opts_ssse3.cpp \
				$(SRC_DIR)/src/core/SkTaskGroup.cpp \
				$(SRC_DIR)/src/core/SkTextBlob.cpp \
				$(SRC_DIR)/src/core/SkTypeface.cpp \
				$(SRC_DIR)/src/core/SkTypefaceCache.cpp \
				$(SRC_DIR)/src/core/SkTypeface_remote.cpp \
				$(SRC_DIR)/src/core/SkUnPreMultiply.cpp \
				$(SRC_DIR)/src/core/SkVertState.cpp \
				$(SRC_DIR)/src/core/SkVertices.cpp \
				$(SRC_DIR)/src/core/SkWriteBuffer.cpp \
				$(SRC_DIR)/src/core/SkWritePixelsRec.cpp \
				$(SRC_DIR)/src/core/SkWriter32.cpp \
				$(SRC_DIR)/src/core/SkYUVAInfo.cpp \
				$(SRC_DIR)/src/core/SkYUVAPixmaps.cpp \
				$(SRC_DIR)/src/core/SkYUVMath.cpp \
				$(SRC_DIR)/src/core/SkYUVPlanesCache.cpp \
				$(SRC_DIR)/src/effects/Sk1DPathEffect.cpp \
				$(SRC_DIR)/src/effects/Sk2DPathEffect.cpp \
				$(SRC_DIR)/src/effects/SkBlenders.cpp \
				$(SRC_DIR)/src/effects/SkColorMatrix.cpp \
				$(SRC_DIR)/src/effects/SkColorMatrixFilter.cpp \
				$(SRC_DIR)/src/effects/SkCornerPathEffect.cpp \
				$(SRC_DIR)/src/effects/SkDashPathEffect.cpp \
				$(SRC_DIR)/src/effects/SkDiscretePathEffect.cpp \
				$(SRC_DIR)/src/effects/SkEmbossMask.cpp \
				$(SRC_DIR)/src/effects/SkEmbossMaskFilter.cpp \
				$(SRC_DIR)/src/effects/SkHighContrastFilter.cpp \
				$(SRC_DIR)/src/effects/SkLayerDrawLooper.cpp \
				$(SRC_DIR)/src/effects/SkShaderMaskFilterImpl.cpp \
				$(SRC_DIR)/src/effects/SkTableMaskFilter.cpp \
				$(SRC_DIR)/src/effects/SkTrimPathEffect.cpp \
				$(SRC_DIR)/src/effects/colorfilters/SkBlendModeColorFilter.cpp \
				$(SRC_DIR)/src/effects/colorfilters/SkColorFilterBase.cpp \
				$(SRC_DIR)/src/effects/colorfilters/SkColorSpaceXformColorFilter.cpp \
				$(SRC_DIR)/src/effects/colorfilters/SkComposeColorFilter.cpp \
				$(SRC_DIR)/src/effects/colorfilters/SkGaussianColorFilter.cpp \
				$(SRC_DIR)/src/effects/colorfilters/SkMatrixColorFilter.cpp \
				$(SRC_DIR)/src/effects/colorfilters/SkRuntimeColorFilter.cpp \
				$(SRC_DIR)/src/effects/colorfilters/SkTableColorFilter.cpp \
				$(SRC_DIR)/src/effects/colorfilters/SkWorkingFormatColorFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkBlendImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkBlurImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkColorFilterImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkComposeImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkCropImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkDisplacementMapImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkDropShadowImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkImageImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkLightingImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkMagnifierImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkMatrixConvolutionImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkMatrixTransformImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkMergeImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkMorphologyImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkPictureImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkRuntimeImageFilter.cpp \
				$(SRC_DIR)/src/effects/imagefilters/SkShaderImageFilter.cpp \
				$(SRC_DIR)/src/encode/SkEncoder.cpp \
				$(SRC_DIR)/src/encode/SkICC.cpp \
				$(SRC_DIR)/src/encode/SkJPEGWriteUtility.cpp \
				$(SRC_DIR)/src/encode/SkJpegEncoderImpl.cpp \
				$(SRC_DIR)/src/encode/SkPngEncoderImpl.cpp \
				$(SRC_DIR)/src/encode/SkWebpEncoderImpl.cpp \
				$(SRC_DIR)/src/image/SkImage.cpp \
				$(SRC_DIR)/src/image/SkImage_Base.cpp \
				$(SRC_DIR)/src/image/SkImage_Lazy.cpp \
				$(SRC_DIR)/src/image/SkImage_LazyFactories.cpp \
				$(SRC_DIR)/src/image/SkImage_Picture.cpp \
				$(SRC_DIR)/src/image/SkImage_Raster.cpp \
				$(SRC_DIR)/src/image/SkImage_RasterFactories.cpp \
				$(SRC_DIR)/src/image/SkPictureImageGenerator.cpp \
				$(SRC_DIR)/src/image/SkRescaleAndReadPixels.cpp \
				$(SRC_DIR)/src/image/SkSurface.cpp \
				$(SRC_DIR)/src/image/SkSurface_Base.cpp \
				$(SRC_DIR)/src/image/SkSurface_Null.cpp \
				$(SRC_DIR)/src/image/SkSurface_Raster.cpp \
				$(SRC_DIR)/src/image/SkTiledImageUtils.cpp \
				$(SRC_DIR)/src/lazy/SkDiscardableMemoryPool.cpp \
				$(SRC_DIR)/src/pathops/SkAddIntersections.cpp \
				$(SRC_DIR)/src/pathops/SkDConicLineIntersection.cpp \
				$(SRC_DIR)/src/pathops/SkDCubicLineIntersection.cpp \
				$(SRC_DIR)/src/pathops/SkDCubicToQuads.cpp \
				$(SRC_DIR)/src/pathops/SkDLineIntersection.cpp \
				$(SRC_DIR)/src/pathops/SkDQuadLineIntersection.cpp \
				$(SRC_DIR)/src/pathops/SkIntersections.cpp \
				$(SRC_DIR)/src/pathops/SkOpAngle.cpp \
				$(SRC_DIR)/src/pathops/SkOpBuilder.cpp \
				$(SRC_DIR)/src/pathops/SkOpCoincidence.cpp \
				$(SRC_DIR)/src/pathops/SkOpContour.cpp \
				$(SRC_DIR)/src/pathops/SkOpCubicHull.cpp \
				$(SRC_DIR)/src/pathops/SkOpEdgeBuilder.cpp \
				$(SRC_DIR)/src/pathops/SkOpSegment.cpp \
				$(SRC_DIR)/src/pathops/SkOpSpan.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsAsWinding.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsCommon.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsConic.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsCubic.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsCurve.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsDebug.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsLine.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsOp.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsQuad.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsRect.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsSimplify.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsTSect.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsTightBounds.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsTypes.cpp \
				$(SRC_DIR)/src/pathops/SkPathOpsWinding.cpp \
				$(SRC_DIR)/src/pathops/SkPathWriter.cpp \
				$(SRC_DIR)/src/pathops/SkReduceOrder.cpp \
				$(SRC_DIR)/src/pdf/SkClusterator.cpp \
				$(SRC_DIR)/src/pdf/SkDeflate.cpp \
				$(SRC_DIR)/src/pdf/SkKeyedImage.cpp \
				$(SRC_DIR)/src/pdf/SkPDFBitmap.cpp \
				$(SRC_DIR)/src/pdf/SkPDFDevice.cpp \
				$(SRC_DIR)/src/pdf/SkPDFDocument.cpp \
				$(SRC_DIR)/src/pdf/SkPDFFont.cpp \
				$(SRC_DIR)/src/pdf/SkPDFFormXObject.cpp \
				$(SRC_DIR)/src/pdf/SkPDFGradientShader.cpp \
				$(SRC_DIR)/src/pdf/SkPDFGraphicStackState.cpp \
				$(SRC_DIR)/src/pdf/SkPDFGraphicState.cpp \
				$(SRC_DIR)/src/pdf/SkPDFMakeCIDGlyphWidthsArray.cpp \
				$(SRC_DIR)/src/pdf/SkPDFMakeToUnicodeCmap.cpp \
				$(SRC_DIR)/src/pdf/SkPDFMetadata.cpp \
				$(SRC_DIR)/src/pdf/SkPDFResourceDict.cpp \
				$(SRC_DIR)/src/pdf/SkPDFShader.cpp \
				$(SRC_DIR)/src/pdf/SkPDFSubsetFont.cpp \
				$(SRC_DIR)/src/pdf/SkPDFTag.cpp \
				$(SRC_DIR)/src/pdf/SkPDFType1Font.cpp \
				$(SRC_DIR)/src/pdf/SkPDFTypes.cpp \
				$(SRC_DIR)/src/pdf/SkPDFUtils.cpp \
				$(SRC_DIR)/src/ports/SkDiscardableMemory_none.cpp \
				$(SRC_DIR)/src/ports/SkFontHost_FreeType.cpp \
				$(SRC_DIR)/src/ports/SkFontHost_FreeType_common.cpp \
				$(SRC_DIR)/src/ports/SkFontMgr_custom.cpp \
				$(SRC_DIR)/src/ports/SkFontMgr_custom_empty.cpp \
				$(SRC_DIR)/src/ports/SkGlobalInitialization_default.cpp \
				$(SRC_DIR)/src/ports/SkMemory_malloc.cpp \
				$(SRC_DIR)/src/ports/SkOSFile_stdio.cpp \
				$(SRC_DIR)/src/sfnt/SkOTTable_name.cpp \
				$(SRC_DIR)/src/sfnt/SkOTUtils.cpp \
				$(SRC_DIR)/src/shaders/SkBitmapProcShader.cpp \
				$(SRC_DIR)/src/shaders/SkBlendShader.cpp \
				$(SRC_DIR)/src/shaders/SkColorFilterShader.cpp \
				$(SRC_DIR)/src/shaders/SkColorShader.cpp \
				$(SRC_DIR)/src/shaders/SkCoordClampShader.cpp \
				$(SRC_DIR)/src/shaders/SkEmptyShader.cpp \
				$(SRC_DIR)/src/shaders/SkGainmapShader.cpp \
				$(SRC_DIR)/src/shaders/SkImageShader.cpp \
				$(SRC_DIR)/src/shaders/SkLocalMatrixShader.cpp \
				$(SRC_DIR)/src/shaders/SkPerlinNoiseShaderImpl.cpp \
				$(SRC_DIR)/src/shaders/SkPictureShader.cpp \
				$(SRC_DIR)/src/shaders/SkRuntimeShader.cpp \
				$(SRC_DIR)/src/shaders/SkShader.cpp \
				$(SRC_DIR)/src/shaders/SkShaderBase.cpp \
				$(SRC_DIR)/src/shaders/SkTransformShader.cpp \
				$(SRC_DIR)/src/shaders/SkTriColorShader.cpp \
				$(SRC_DIR)/src/shaders/SkWorkingColorSpaceShader.cpp \
				$(SRC_DIR)/src/shaders/gradients/SkConicalGradient.cpp \
				$(SRC_DIR)/src/shaders/gradients/SkGradientBaseShader.cpp \
				$(SRC_DIR)/src/shaders/gradients/SkLinearGradient.cpp \
				$(SRC_DIR)/src/shaders/gradients/SkRadialGradient.cpp \
				$(SRC_DIR)/src/shaders/gradients/SkSweepGradient.cpp \
				$(SRC_DIR)/src/sksl/SkSLAnalysis.cpp \
				$(SRC_DIR)/src/sksl/SkSLBuiltinTypes.cpp \
				$(SRC_DIR)/src/sksl/SkSLCompiler.cpp \
				$(SRC_DIR)/src/sksl/SkSLConstantFolder.cpp \
				$(SRC_DIR)/src/sksl/SkSLContext.cpp \
				$(SRC_DIR)/src/sksl/SkSLErrorReporter.cpp \
				$(SRC_DIR)/src/sksl/SkSLInliner.cpp \
				$(SRC_DIR)/src/sksl/SkSLIntrinsicList.cpp \
				$(SRC_DIR)/src/sksl/SkSLLexer.cpp \
				$(SRC_DIR)/src/sksl/SkSLMangler.cpp \
				$(SRC_DIR)/src/sksl/SkSLModuleLoader.cpp \
				$(SRC_DIR)/src/sksl/SkSLOperator.cpp \
				$(SRC_DIR)/src/sksl/SkSLOutputStream.cpp \
				$(SRC_DIR)/src/sksl/SkSLParser.cpp \
				$(SRC_DIR)/src/sksl/SkSLPool.cpp \
				$(SRC_DIR)/src/sksl/SkSLPosition.cpp \
				$(SRC_DIR)/src/sksl/SkSLSampleUsage.cpp \
				$(SRC_DIR)/src/sksl/SkSLString.cpp \
				$(SRC_DIR)/src/sksl/SkSLUtil.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLCanExitWithoutReturningValue.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLCheckProgramStructure.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLCheckSymbolTableCorrectness.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLFinalizationChecks.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLGetLoopControlFlowInfo.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLGetLoopUnrollInfo.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLGetReturnComplexity.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLHasSideEffects.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLIsConstantExpression.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLIsDynamicallyUniformExpression.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLIsSameExpressionTree.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLIsTrivialExpression.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLProgramUsage.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLReturnsInputAlpha.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLSwitchCaseContainsExit.cpp \
				$(SRC_DIR)/src/sksl/analysis/SkSLSymbolTableStackBuilder.cpp \
				$(SRC_DIR)/src/sksl/codegen/SkSLRasterPipelineBuilder.cpp \
				$(SRC_DIR)/src/sksl/codegen/SkSLRasterPipelineCodeGenerator.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLBinaryExpression.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLBlock.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLChildCall.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructor.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructorArray.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructorArrayCast.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructorCompound.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructorCompoundCast.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructorDiagonalMatrix.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructorMatrixResize.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructorScalarCast.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructorSplat.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLConstructorStruct.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLDiscardStatement.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLDoStatement.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLExpression.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLExpressionStatement.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLExtension.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLFieldAccess.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLForStatement.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLFunctionCall.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLFunctionDeclaration.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLFunctionDefinition.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLIfStatement.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLIndexExpression.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLInterfaceBlock.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLLayout.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLLiteral.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLModifierFlags.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLModifiersDeclaration.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLPostfixExpression.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLPrefixExpression.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLProgram.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLSetting.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLStructDefinition.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLSwitchCase.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLSwitchStatement.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLSwizzle.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLSymbol.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLSymbolTable.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLTernaryExpression.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLType.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLTypeReference.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLVarDeclarations.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLVariable.cpp \
				$(SRC_DIR)/src/sksl/ir/SkSLVariableReference.cpp \
				$(SRC_DIR)/src/sksl/tracing/SkSLDebugTracePlayer.cpp \
				$(SRC_DIR)/src/sksl/tracing/SkSLDebugTracePriv.cpp \
				$(SRC_DIR)/src/sksl/tracing/SkSLTraceHook.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLAddConstToVarModifiers.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLEliminateDeadFunctions.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLEliminateDeadGlobalVariables.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLEliminateDeadLocalVariables.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLEliminateEmptyStatements.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLEliminateUnreachableCode.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLFindAndDeclareBuiltinFunctions.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLFindAndDeclareBuiltinStructs.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLFindAndDeclareBuiltinVariables.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLHoistSwitchVarDeclarationsAtTopLevel.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLRenamePrivateSymbols.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLReplaceConstVarsWithLiterals.cpp \
				$(SRC_DIR)/src/sksl/transform/SkSLRewriteIndexedSwizzle.cpp \
				$(SRC_DIR)/src/svg/SkSVGCanvas.cpp \
				$(SRC_DIR)/src/svg/SkSVGDevice.cpp \
				$(SRC_DIR)/src/text/GlyphRun.cpp \
				$(SRC_DIR)/src/text/SlugFromBuffer.cpp \
				$(SRC_DIR)/src/text/StrikeForGPU.cpp \
				$(SRC_DIR)/src/utils/SkCamera.cpp \
				$(SRC_DIR)/src/utils/SkCanvasStack.cpp \
				$(SRC_DIR)/src/utils/SkCanvasStateUtils.cpp \
				$(SRC_DIR)/src/utils/SkCharToGlyphCache.cpp \
				$(SRC_DIR)/src/utils/SkClipStackUtils.cpp \
				$(SRC_DIR)/src/utils/SkCustomTypeface.cpp \
				$(SRC_DIR)/src/utils/SkDashPath.cpp \
				$(SRC_DIR)/src/utils/SkEventTracer.cpp \
				$(SRC_DIR)/src/utils/SkFloatToDecimal.cpp \
				$(SRC_DIR)/src/utils/SkJSON.cpp \
				$(SRC_DIR)/src/utils/SkJSONWriter.cpp \
				$(SRC_DIR)/src/utils/SkMatrix22.cpp \
				$(SRC_DIR)/src/utils/SkMultiPictureDocument.cpp \
				$(SRC_DIR)/src/utils/SkNWayCanvas.cpp \
				$(SRC_DIR)/src/utils/SkNullCanvas.cpp \
				$(SRC_DIR)/src/utils/SkOSPath.cpp \
				$(SRC_DIR)/src/utils/SkOrderedFontMgr.cpp \
				$(SRC_DIR)/src/utils/SkPaintFilterCanvas.cpp \
				$(SRC_DIR)/src/utils/SkParse.cpp \
				$(SRC_DIR)/src/utils/SkParseColor.cpp \
				$(SRC_DIR)/src/utils/SkParsePath.cpp \
				$(SRC_DIR)/src/utils/SkPatchUtils.cpp \
				$(SRC_DIR)/src/utils/SkPolyUtils.cpp \
				$(SRC_DIR)/src/utils/SkShaderUtils.cpp \
				$(SRC_DIR)/src/utils/SkShadowTessellator.cpp \
				$(SRC_DIR)/src/utils/SkShadowUtils.cpp \
				$(SRC_DIR)/src/utils/SkTextUtils.cpp \
				$(SRC_DIR)/src/utils/mac/SkCTFont.cpp \
				$(SRC_DIR)/src/utils/mac/SkCreateCGImageRef.cpp \
				$(SRC_DIR)/src/utils/win/SkAutoCoInitialize.cpp \
				$(SRC_DIR)/src/utils/win/SkDWrite.cpp \
				$(SRC_DIR)/src/utils/win/SkDWriteFontFileStream.cpp \
				$(SRC_DIR)/src/utils/win/SkDWriteGeometrySink.cpp \
				$(SRC_DIR)/src/utils/win/SkHRESULT.cpp \
				$(SRC_DIR)/src/utils/win/SkIStream.cpp \
				$(SRC_DIR)/src/utils/win/SkWGL_win.cpp \
				$(SRC_DIR)/src/xml/SkDOM.cpp \
				$(SRC_DIR)/src/xml/SkXMLParser.cpp \
				$(SRC_DIR)/src/xml/SkXMLWriter.cpp \
				$(SRC_DIR)/src/codec/SkRawCodec.cpp \
				$(SRC_DIR)/src/ports/SkDebug_stdio.cpp \
				$(SRC_DIR)/src/ports/SkOSFile_posix.cpp \
				$(SRC_DIR)/src/ports/SkOSLibrary_posix.cpp \

CC_SOURCES := $(SRC_DIR)/modules/skcms/skcms.cc \
				$(SRC_DIR)/modules/skcms/src/skcms_TransformBaseline.cc \

C_SOURCES := 

CPP_OBJECTS := $(CPP_SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
CC_OBJECTS := $(CC_SOURCES:$(SRC_DIR)/%.cc=$(OBJ_DIR)/%.o)
C_OBJECTS := $(C_SOURCES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

OBJECTS := $(CPP_OBJECTS) $(CC_OBJECTS) $(C_OBJECTS)

STATIC_LIB = $(wildcard $(OUT_LIB_DIR)/libcutils.a) \
				$(wildcard $(OUT_LIB_DIR)/liblog.a) \
				$(wildcard $(OUT_LIB_DIR)/libpng.a) \
				$(wildcard $(OUT_LIB_DIR)/libz.a) \
				$(wildcard $(OUT_LIB_DIR)/libbase.a) \
				$(wildcard $(OUT_LIB_DIR)/libwebp.a) \
				$(wildcard $(OUT_LIB_DIR)/libjpeg.a) \
				$(wildcard $(OUT_LIB_DIR)/libwuffs_mirror_release_c.a) \
				$(wildcard $(OUT_LIB_DIR)/libdng_sdk.a) \
				$(wildcard $(OUT_LIB_DIR)/libpiex.a) \
				$(wildcard $(OUT_LIB_DIR)/libexpat.a) \
				$(wildcard $(OUT_LIB_DIR)/libft2.a) \
				$(wildcard $(OUT_LIB_DIR)/libsfntly.a) \

# 默认目标
all: prepare $(TARGET)

# 创建必要目录
prepare:
	@echo "prepare.. $@"
	@mkdir -p $(OUT_LIB_DIR)
	@mkdir -p $(OBJ_DIR)

$(TARGET): $(OBJECTS) $(STATIC_LIB)
	@mkdir -p $(OBJ_DIR)
	$(AR) $(ARFLAGS) -o $@ $(OBJECTS) $(STATIC_LIB) $(LLFLAGS)
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