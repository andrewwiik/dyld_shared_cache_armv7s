/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/MFPhoneBrush.h>

@class TSUColor;

@interface MFPhoneHatchBrush : MFPhoneBrush {

	TSUColor* m_colour;
	int m_style;

}
+(id)hatchBrushWithColour:(id)arg1 :(int)arg2 ;
+(id)patternNameForHatchStyle:(int)arg1 ;
-(void)dealloc;
-(void)fillPath:(id)arg1 :(id)arg2 ;
-(id)initWithColour:(id)arg1 :(int)arg2 ;
@end

