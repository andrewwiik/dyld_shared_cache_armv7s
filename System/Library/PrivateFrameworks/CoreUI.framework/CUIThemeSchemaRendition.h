/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIPSDGradient;

@interface CUIThemeSchemaRendition : CUIThemeRendition {

	NSDictionary* cuiInfo;
	unsigned long long _nimages;
	CGImage* _image[9];
	CGRect _layoutRects[9];
	CGSize _intrinsicSize;
	CGRect _elementRect;
	long long _columnSlices;
	long long _rowSlices;
	CUIPSDGradient* _gradient;

}

@property (nonatomic,readonly) unsigned long long numberOfSlices; 
@property (nonatomic,readonly) CGRect* sliceRects; 
@property (nonatomic,readonly) CUIPSDGradient * gradient; 
-(void)dealloc;
-(unsigned short)size;
-(id)description;
-(unsigned short)state;
-(double)scale;
-(unsigned short)value;
-(unsigned short)direction;
-(unsigned short)identifier;
-(id).cxx_construct;
-(id)gradient;
-(id)slices;
-(unsigned long long)numberOfSlices;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(unsigned short)dimension1;
-(unsigned short)dimension2;
-(unsigned short)drawingLayer;
-(unsigned short)keyScale;
-(CGRect*)sliceRects;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(CGRect)alignmentRectangle;
-(id)coreUIOptions;
-(id)referenceImage;
-(id)defaultTemplateName;
-(long long)columnSlices;
-(long long)rowSlices;
-(CGPoint)renditionCoordinatesForPartFeatures:(long long)arg1 ;
-(unsigned short)look;
-(unsigned short)presentationState;
@end

