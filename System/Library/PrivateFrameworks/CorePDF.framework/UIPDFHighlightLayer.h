/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <QuartzCore/CALayer.h>

@interface UIPDFHighlightLayer : CALayer {

	CGPathRef _clipPath;
	CGPathRef _borderPath;
	CGPoint offset;

}

@property (assign,nonatomic,@dynamic) CGPathRef clipPath; 
@property (assign,nonatomic,@dynamic) CGPathRef borderPath; 
@property (assign,nonatomic) CGPoint offset; 
-(void)dealloc;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(CGPathRef)clipPath;
-(void)setClipPath:(CGPathRef)arg1 ;
-(CGPathRef)borderPath;
-(void)setBorderPath:(CGPathRef)arg1 ;
@end

