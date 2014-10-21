/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, CIColor, NSNumber;

@interface CIFlashTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	CIColor* inputColor;
	NSNumber* inputTime;
	NSNumber* inputMaxStriationRadius;
	NSNumber* inputStriationStrength;
	NSNumber* inputStriationContrast;
	NSNumber* inputFadeThreshold;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputTargetImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIVector * inputExtent; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputTime; 
@property (nonatomic,retain) NSNumber * inputMaxStriationRadius; 
@property (nonatomic,retain) NSNumber * inputStriationStrength; 
@property (nonatomic,retain) NSNumber * inputStriationContrast; 
@property (nonatomic,retain) NSNumber * inputFadeThreshold; 
+(id)customAttributes;
-(void)setDefaults;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(void)setInputColor:(id)arg1 ;
-(id)inputColor;
-(id)_geomKernel;
-(id)_colorKernel;
-(void)setInputCenter:(id)arg1 ;
-(id)inputCenter;
-(id)inputTargetImage;
-(void)setInputTargetImage:(id)arg1 ;
-(id)inputTime;
-(void)setInputExtent:(id)arg1 ;
-(id)inputExtent;
-(void)setInputMaxStriationRadius:(id)arg1 ;
-(void)setInputStriationStrength:(id)arg1 ;
-(void)setInputStriationContrast:(id)arg1 ;
-(void)setInputFadeThreshold:(id)arg1 ;
-(id)inputMaxStriationRadius;
-(id)inputStriationStrength;
-(id)inputStriationContrast;
-(id)inputFadeThreshold;
-(void)setInputTime:(id)arg1 ;
@end

