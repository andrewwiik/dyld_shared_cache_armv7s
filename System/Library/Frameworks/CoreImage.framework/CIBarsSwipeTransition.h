/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIBarsSwipeTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	NSNumber* inputAngle;
	NSNumber* inputWidth;
	NSNumber* inputBarOffset;
	NSNumber* inputTime;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) NSNumber * inputAngle; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputBarOffset; 
@property (nonatomic,retain) NSNumber * inputTime; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(id)_kernel;
-(void)setInputAngle:(id)arg1 ;
-(id)inputAngle;
-(void)setInputWidth:(id)arg1 ;
-(id)inputWidth;
-(id)inputTargetImage;
-(void)setInputTargetImage:(id)arg1 ;
-(id)inputTime;
-(void)setInputBarOffset:(id)arg1 ;
-(id)inputBarOffset;
-(void)setInputTime:(id)arg1 ;
@end

