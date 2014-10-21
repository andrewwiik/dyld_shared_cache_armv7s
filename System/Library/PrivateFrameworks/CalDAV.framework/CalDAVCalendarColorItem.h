/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString;

@interface CalDAVCalendarColorItem : CoreDAVItem {

	NSString* _symbolicColorName;

}

@property (nonatomic,retain) NSString * symbolicColorName;              //@synthesize symbolicColorName=_symbolicColorName - In the implementation block
@property (retain) NSString * colorString; 
-(id)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1 ;
-(void)setColorString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)parserFoundAttributes:(id)arg1 ;
-(id)colorString;
-(void)write:(id)arg1 ;
@end

