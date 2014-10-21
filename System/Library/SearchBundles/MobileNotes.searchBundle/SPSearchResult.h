/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SearchBundles/MobileNotes.searchBundle/MobileNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SPSearchResult <NSObject>
@optional
-(const char*)titleUTF8String;
-(const char*)subtitleUTF8String;
-(const char*)auxiliaryTitleUTF8String;
-(const char*)auxiliarySubtitleUTF8String;
-(const char*)summaryUTF8String;
-(const char*)URLUTF8String;
-(bool)getBadgeValue:(float*)arg1;
-(const char*)resultDisplayIdentifierUTF8String;

@required
-(int)domain;
-(unsigned long long)identifier;
@end

