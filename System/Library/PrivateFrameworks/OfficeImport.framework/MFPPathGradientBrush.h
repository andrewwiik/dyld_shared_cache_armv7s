/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/MFPGradientBrush.h>

@class TSUColor, NSArray, TSDBezierPath;

@interface MFPPathGradientBrush : MFPGradientBrush {

	TSUColor* mCenterColor;
	CGPoint mCenterPoint;
	NSArray* mSurroundColors;
	TSDBezierPath* mPath;

}
-(void)dealloc;
-(void)setPath:(id)arg1 ;
-(id).cxx_construct;
-(void)setCenterColor:(id)arg1 ;
-(void)setCenterPoint:(CGPoint)arg1 ;
-(void)setSurroundColors:(id)arg1 ;
-(void)createShading;
-(id)startColor;
-(id)endColor;
@end

