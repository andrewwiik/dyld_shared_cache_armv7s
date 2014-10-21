/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, CoreDAVItemWithNoChildren;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem {

	NSMutableSet* _emailAddresses;
	CoreDAVItemWithNoChildren* _unauthenticated;

}

@property (retain) NSMutableSet * emailAddresses;                            //@synthesize emailAddresses=_emailAddresses - In the implementation block
@property (retain) CoreDAVItemWithNoChildren * unauthenticated;              //@synthesize unauthenticated=_unauthenticated - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)unauthenticated;
-(void)setUnauthenticated:(id)arg1 ;
-(void)addEmailAddress:(id)arg1 ;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
@end

