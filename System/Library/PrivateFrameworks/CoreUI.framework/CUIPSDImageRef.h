/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, _CUIPSDSublayerInfo;

@interface CUIPSDImageRef : NSObject {

	NSString* _path;
	bool _parsedForLayers;
	int _file;
	CPSDFile* _psd;
	_CUIPSDSublayerInfo* _rootLayers;

}
+(bool)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned*)arg2 ;
+(bool)isValidPSDResourceAtPath:(id)arg1 ;
+(bool)isValidPSDResourceAtPath:(id)arg1 withLayerCount:(unsigned*)arg2 validateLayers:(bool)arg3 ;
+(bool)isValidPSDResourceAtPath:(id)arg1 withImageInfo:(PSDImageInfo*)arg2 ;
-(void)dealloc;
-(CGSize)size;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(bool)openImageFile;
-(bool)loadPSDFileWithLayers:(bool)arg1 ;
-(CPSDFile*)_psdFileWithLayers:(bool)arg1 ;
-(unsigned)_absoluteIndexOfRootLayer:(unsigned)arg1 ;
-(CGImageRef)_copyCGImageAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_imageAtAbsoluteIndex:(unsigned)arg1 isZeroSizeImage:(bool*)arg2 ;
-(id)_imageFromSlice:(unsigned)arg1 atAbsoluteIndex:(unsigned)arg2 isEmptyImage:(bool*)arg3 ;
-(id)_patternFromSlice:(unsigned)arg1 atAbsoluteIndex:(unsigned)arg2 isZeroSizeImage:(bool*)arg3 ;
-(id)_createMaskFromSlice:(unsigned)arg1 atAbsoluteIndex:(unsigned)arg2 ;
-(CPSDFile*)psdFileForComposite;
-(CGImageRef)createCompositeCGImage;
-(id)imageFromRef:(CGImageRef)arg1 ;
-(CPSDFile*)psdFile;
-(CGRect)_boundsAtAbsoluteIndex:(unsigned)arg1 ;
-(id)maskFromCompositeAlphaChannel:(long long)arg1 ;
-(SCD_Struct_CS4)metricsInMask:(id)arg1 forRect:(CGRect)arg2 ;
-(bool)_visibilityAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_layerRefAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_layerInfo;
-(id)_namesOfSublayers:(id)arg1 ;
-(PSDImageInfo)imageInfo;
-(id)_fillSampleAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_gradientAtAbsoluteIndex:(unsigned)arg1 ;
-(id)_copySublayerInfoAtAbsoluteIndex:(unsigned)arg1 atRoot:(bool)arg2 ;
-(bool)_treatDividerAsLayer;
-(int)cgBlendModeForPSDLayerOrLayerEffectBlendMode:(unsigned)arg1 ;
-(CGImageRef)createCGImageAtLayer:(unsigned)arg1 ;
-(CGRect)boundsAtLayer:(unsigned)arg1 ;
-(CGColorSpaceRef)copyColorSpace;
-(id)fillSampleAtLayer:(unsigned)arg1 ;
-(id)imageAtLayer:(unsigned)arg1 ;
-(id)imageAtLayer:(unsigned)arg1 isZeroSizeImage:(bool*)arg2 ;
-(id)imageFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 ;
-(id)imageFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 isEmptyImage:(bool*)arg3 ;
-(id)patternFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 ;
-(id)patternFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 isZeroSizeImage:(bool*)arg3 ;
-(id)maskFromSlice:(unsigned)arg1 atLayer:(unsigned)arg2 ;
-(id)compositeImage;
-(CGRect)boundsForSlice:(unsigned)arg1 ;
-(SCD_Struct_CS4)metricsInAlphaChannel:(long long)arg1 forRect:(CGRect)arg2 ;
-(bool)visibilityAtLayer:(unsigned)arg1 ;
-(id)layerRefAtIndex:(unsigned)arg1 ;
-(unsigned)numberOfLayers;
-(unsigned)numberOfSlices;
-(unsigned)numberOfChannels;
-(id)layerNames;
-(id)metadataString;
-(id)gradientAtLayer:(unsigned)arg1 ;
-(CPSDLayerRecord*)_psdLayerRecordAtAbsoluteIndex:(unsigned)arg1 ;
-(void)_logInvalidAbsoluteIndex:(unsigned)arg1 psd:(CPSDFile*)arg2 ;
-(id)_nameAtAbsoluteIndex:(unsigned)arg1 ;
-(double)_opacityAtAbsoluteIndex:(unsigned)arg1 ;
-(int)_blendModeAtAbsluteIndex:(unsigned)arg1 ;
-(void)finalize;
@end

