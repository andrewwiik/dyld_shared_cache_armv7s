/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/EDSheet.h>

@class CHDChart;

@interface EDChartSheet : EDSheet {

	CHDChart* mMainChart;
	bool mIsBoundsSet;
	CGRect mBounds;

}
-(void)teardown;
-(CGRect)bounds;
-(void)setBounds:(CGRect)arg1 ;
-(id).cxx_construct;
-(bool)areBoundsSet;
-(id)mainChart;
-(void)setMainChart:(id)arg1 ;
-(void)addDrawable:(id)arg1 ;
@end

