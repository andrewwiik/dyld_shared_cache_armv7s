/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>
#import <CoreImage/_CIFilterProperties.h>

@class CIImage, CIVector;

@interface CIToneCurve : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIVector* inputPoint2;
	CIVector* inputPoint3;
	CIVector* inputPoint4;
	CIImage* _curveImage;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) CIVector * inputPoint0; 
@property (nonatomic,copy) CIVector * inputPoint1; 
@property (nonatomic,copy) CIVector * inputPoint2; 
@property (nonatomic,copy) CIVector * inputPoint3; 
@property (nonatomic,copy) CIVector * inputPoint4; 
+(id)customAttributes;
+(id)curveImageFromPoints:(const CGPoint*)arg1 ;
+(void)splineCurveTable:(double*)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const CGPoint*)arg4 ;
+(id)curveImageFromPoints:(const CGPoint*)arg1 linear:(bool)arg2 ;
-(void)setDefaults;
-(id)outputImage;
-(bool)_isIdentity;
-(id)inputImage;
-(void)setInputImage:(id)arg1 ;
-(void)setInputPoint0:(id)arg1 ;
-(void)setInputPoint1:(id)arg1 ;
-(void)setInputPoint2:(id)arg1 ;
-(void)setInputPoint3:(id)arg1 ;
-(void)setInputPoint4:(id)arg1 ;
-(id)_kernel16;
-(id)inputPoint0;
-(id)inputPoint1;
-(id)inputPoint2;
-(id)inputPoint3;
-(id)inputPoint4;
-(void)dealloc;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
@end

