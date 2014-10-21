/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString, NSData;

@interface CUIThemeRendition : NSObject {

	renditionkeytoken stackKey[16];
	renditionkeytoken* key;
	long long type;
	unsigned subtype;
	unsigned scale;
	struct {
		unsigned isHeaderFlaggedFPO : 1;
		unsigned isExcludedFromContrastFilter : 1;
		unsigned reserved : 30;
	}  renditionFlags;
	long long artworkStatus;
	unsigned long long colorSpaceID;
	NSString* name;
	NSData* srcData;
	long long validLookGradation;
	double opacity;
	int blendMode;

}

@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) int blendMode; 
+(id)displayNameForRenditionType:(long long)arg1 ;
+(id)filteredCSIDataFromBaseCSIData:(id)arg1 ;
+(Class)renditionClassForRenditionType:(long long)arg1 ;
-(void)dealloc;
-(id)description;
-(double)scale;
-(long long)type;
-(unsigned)subtype;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(id)name;
-(id)metrics;
-(const renditionkeytoken*)key;
-(id)gradient;
-(unsigned)gradientStyle;
-(unsigned long long)colorSpaceID;
-(id)effectPreset;
-(void)_initializeRenditionKey:(const renditionkeytoken*)arg1 ;
-(unsigned short)valueForTokenIdentifier:(unsigned short)arg1 ;
-(bool)isTiled;
-(id)imageForSliceIndex:(long long)arg1 ;
-(bool)isScaled;
-(id)maskForSliceIndex:(long long)arg1 ;
-(CGImageRef)unslicedImage;
-(id)sliceInformation;
-(double)gradientDrawingAngle;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(bool)isHeaderFlaggedFPO;
-(long long)artworkStatus;
-(id)_initWithCSIHeader:(const csiheader*)arg1 ;
-(id)_initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(void)_initializeTypeIdentifiersWithLayout:(unsigned short)arg1 ;
-(void)_initializeCompositingOptionsFromCSIData:(const csiheader*)arg1 ;
-(id)initWithCSIData:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(bool)isValidForLookGradation:(long long)arg1 ;
-(int)blendMode;
-(void)setBlendMode:(int)arg1 ;
@end

