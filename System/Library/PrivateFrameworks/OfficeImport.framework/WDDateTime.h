/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, NSDate;

@interface WDDateTime : WDRun {

	WDCharacterProperties* mProperties;
	NSDate* mDate;

}
-(void)dealloc;
-(id)date;
-(id)properties;
-(void)setProperties:(id)arg1 ;
-(int)runType;
-(void)clearProperties;
-(id)initWithParagraph:(id)arg1 date:(id)arg2 ;
@end
