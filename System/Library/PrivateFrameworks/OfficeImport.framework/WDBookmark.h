/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class NSString;

@interface WDBookmark : WDRun {

	NSString* mName;
	int mBookmarkType;

}
-(void)dealloc;
-(void)setName:(id)arg1 ;
-(id)name;
-(int)bookmarkType;
-(int)runType;
-(id)initWithParagraph:(id)arg1 name:(id)arg2 type:(int)arg3 ;
-(void)setBookmarkType:(int)arg1 ;
@end
