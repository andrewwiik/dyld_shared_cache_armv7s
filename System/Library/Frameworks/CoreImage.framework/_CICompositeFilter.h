/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage;

@interface _CICompositeFilter : CIFilter {

	CIImage* inputImage;
	CIImage* inputBackgroundImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputBackgroundImage; 
+(id)customAttributes;
+(id)_kernel;
+(id)_filter_display_name;
+(id)_kernel_name;
+(id)_kernel_source;
-(id)outputImage;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(CGRect)_extentForInputExtent:(CGRect)arg1 backgroundExtent:(CGRect)arg2 ;
-(id)inputBackgroundImage;
-(void)setInputBackgroundImage:(id)arg1 ;
@end

