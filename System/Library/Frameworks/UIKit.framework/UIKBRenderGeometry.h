/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSValue;

@interface UIKBRenderGeometry : NSObject <NSCopying> {

	bool _detachedVariants;
	int _roundRectCorners;
	int _popupBias;
	double _roundRectRadius;
	long long _flickDirection;
	NSValue* _splitLeftRect;
	NSValue* _splitRightRect;
	CGPoint _popupSource;
	CGRect _frame;
	CGRect _paddedFrame;
	CGRect _displayFrame;
	CGRect _symbolFrame;

}

@property (assign,nonatomic) CGRect frame;                              //@synthesize frame=_frame - In the implementation block
@property (assign,nonatomic) CGRect paddedFrame;                        //@synthesize paddedFrame=_paddedFrame - In the implementation block
@property (assign,nonatomic) CGRect displayFrame;                       //@synthesize displayFrame=_displayFrame - In the implementation block
@property (assign,nonatomic) CGRect symbolFrame;                        //@synthesize symbolFrame=_symbolFrame - In the implementation block
@property (assign,nonatomic) CGPoint popupSource;                       //@synthesize popupSource=_popupSource - In the implementation block
@property (assign,nonatomic) double roundRectRadius;                    //@synthesize roundRectRadius=_roundRectRadius - In the implementation block
@property (assign,nonatomic) int roundRectCorners;                      //@synthesize roundRectCorners=_roundRectCorners - In the implementation block
@property (assign,nonatomic) int popupBias;                             //@synthesize popupBias=_popupBias - In the implementation block
@property (assign,nonatomic) long long flickDirection;                  //@synthesize flickDirection=_flickDirection - In the implementation block
@property (assign,nonatomic) bool detachedVariants;                     //@synthesize detachedVariants=_detachedVariants - In the implementation block
@property (nonatomic,retain) NSValue * splitLeftRect;                   //@synthesize splitLeftRect=_splitLeftRect - In the implementation block
@property (nonatomic,retain) NSValue * splitRightRect;                  //@synthesize splitRightRect=_splitRightRect - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets displayInsets; 
@property (nonatomic,readonly) UIEdgeInsets paddedInsets; 
+(id)geometryWithFrame:(CGRect)arg1 paddedFrame:(CGRect)arg2 ;
+(id)geometryWithShape:(id)arg1 ;
-(unsigned long long)adjustForTranslucentGapsInFrameWithSize_10Key:(CGSize)arg1 centerX:(double)arg2 isInBottomRow:(bool)arg3 ;
-(unsigned long long)adjustForTranslucentGapsWithSize:(CGSize)arg1 inFrame:(CGRect)arg2 ;
-(id)_copyForDirection:(long long)arg1 positionFactor:(double)arg2 sizeFactor:(double)arg3 scale:(double)arg4 ;
-(void)applyOffset:(CGPoint)arg1 ;
-(void)makeIntegralWithScale:(double)arg1 ;
-(void)adjustToTopWithInsets:(UIEdgeInsets)arg1 ;
-(id)copyForFlickDirection:(long long)arg1 scale:(double)arg2 ;
-(id)copyForPopupDirection:(long long)arg1 scale:(double)arg2 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(CGRect)paddedFrame;
-(void)setDisplayFrame:(CGRect)arg1 ;
-(void)setPaddedFrame:(CGRect)arg1 ;
-(CGRect)displayFrame;
-(void)setPopupBias:(int)arg1 ;
-(void)setSymbolFrame:(CGRect)arg1 ;
-(void)setRoundRectCorners:(int)arg1 ;
-(void)setRoundRectRadius:(double)arg1 ;
-(void)setSplitLeftRect:(id)arg1 ;
-(void)setSplitRightRect:(id)arg1 ;
-(id)splitLeftRect;
-(id)splitRightRect;
-(void)setFlickDirection:(long long)arg1 ;
-(long long)flickDirection;
-(UIEdgeInsets)displayInsets;
-(CGRect)symbolFrame;
-(void)setPopupSource:(CGPoint)arg1 ;
-(void)applyInsets:(UIEdgeInsets)arg1 ;
-(id)initWithShape:(id)arg1 ;
-(CGPoint)popupSource;
-(int)roundRectCorners;
-(int)popupBias;
-(bool)detachedVariants;
-(double)roundRectRadius;
-(void)setDetachedVariants:(bool)arg1 ;
-(void)overlayWithGeometry:(id)arg1 ;
-(void)applyShadowInsets:(UIEdgeInsets)arg1 ;
-(id)iPhoneVariantGeometries:(unsigned long long)arg1 ;
-(id)iPadVariantGeometries:(unsigned long long)arg1 ;
-(id)similarShape;
-(UIEdgeInsets)paddedInsets;
@end

