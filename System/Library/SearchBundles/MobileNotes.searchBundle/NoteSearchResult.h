/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SearchBundles/MobileNotes.searchBundle/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Search/SPSearchResult.h>

@class NSString, NSDate;

@interface NoteSearchResult : NSObject <SPSearchResult> {

	NSString* _title;
	NSString* _summary;
	NSDate* _modDate;
	unsigned long long _identifier;

}
-(int)domain;
-(unsigned long long)identifier;
-(void).cxx_destruct;
-(const char*)titleUTF8String;
-(const char*)auxiliaryTitleUTF8String;
-(const char*)summaryUTF8String;
-(id)initWithNote:(id)arg1 ;
@end

