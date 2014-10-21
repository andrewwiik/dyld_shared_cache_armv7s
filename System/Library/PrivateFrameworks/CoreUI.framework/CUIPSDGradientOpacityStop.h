/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreUI/CUIPSDGradientStop.h>
#import <CoreFoundation/NSCoding.h>

@interface CUIPSDGradientOpacityStop : CUIPSDGradientStop <NSCoding> {

	double opacity;

}
+(void)initialize;
+(id)opacityStopWithLocation:(double)arg1 opacity:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)opacity;
-(bool)isOpacityStop;
-(double)opacityLocation;
-(id)initWithLocation:(double)arg1 opacity:(double)arg2 ;
@end

