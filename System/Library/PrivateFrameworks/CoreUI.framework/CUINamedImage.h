/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class CUIRenditionKey, NSString;

@interface CUINamedImage : NSObject {

	CUIRenditionKey* _key;
	unsigned long long _storageRef;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGImageRef image; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) psdGradientColor edgeInsets; 
@property (nonatomic,readonly) long long resizingMode; 
@property (nonatomic,readonly) double opacity; 
@property (nonatomic,readonly) int blendMode; 
@property (nonatomic,readonly) bool hasSliceInformation; 
-(void)dealloc;
-(CGSize)size;
-(id)description;
-(double)scale;
-(psdGradientColor)edgeInsets;
-(long long)resizingMode;
-(CGImageRef)image;
-(void)setName:(id)arg1 ;
-(double)opacity;
-(id)name;
-(bool)hasSliceInformation;
-(id)_themeStore;
-(id)_renditionForSpecificKey:(id)arg1 ;
-(double)positionOfSliceBoundary:(int)arg1 ;
-(id)_rendition;
-(id)initWithName:(id)arg1 usingRenditionKey:(id)arg2 fromTheme:(unsigned long long)arg3 ;
-(int)blendMode;
@end

