/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSCopying.h>

@interface NSTextBlock : NSObject <NSCoding, NSCopying> {

	void* _propVals;
	unsigned long long _propMask;
	unsigned long long _typeMask;
	id _primParamVal;
	id _otherParamVals;
	void* _blockPrimary;
	void* _blockSecondary;

}
+(void)initialize;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setBorderColor:(id)arg1 ;
-(double)contentWidth;
-(unsigned long long)verticalAlignment;
-(void)setVerticalAlignment:(unsigned long long)arg1 ;
-(void)drawBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 characterRange:(NSRange)arg3 layoutManager:(id)arg4 ;
-(double)widthForLayer:(long long)arg1 edge:(unsigned long long)arg2 ;
-(double)valueForDimension:(unsigned long long)arg1 ;
-(unsigned long long)widthValueTypeForLayer:(long long)arg1 edge:(unsigned long long)arg2 ;
-(unsigned long long)valueTypeForDimension:(unsigned long long)arg1 ;
-(void)_destroyFloatStorage;
-(void)_createFloatStorage;
-(void)_takeValuesFromTextBlock:(id)arg1 ;
-(void)_setValue:(double)arg1 type:(unsigned long long)arg2 forParameter:(unsigned long long)arg3 ;
-(double)_valueForParameter:(unsigned long long)arg1 ;
-(unsigned long long)_valueTypeForParameter:(unsigned long long)arg1 ;
-(void)setValue:(double)arg1 type:(unsigned long long)arg2 forDimension:(unsigned long long)arg3 ;
-(void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3 edge:(unsigned long long)arg4 ;
-(void)setBorderColor:(id)arg1 forEdge:(unsigned long long)arg2 ;
-(id)borderColorForEdge:(unsigned long long)arg1 ;
-(void)setContentWidth:(double)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)contentWidthValueType;
-(void)setWidth:(double)arg1 type:(unsigned long long)arg2 forLayer:(long long)arg3 ;
-(CGRect)rectForLayoutAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(CGRect)boundsRectForContentRect:(CGRect)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(id)_attributeDescription;
@end

