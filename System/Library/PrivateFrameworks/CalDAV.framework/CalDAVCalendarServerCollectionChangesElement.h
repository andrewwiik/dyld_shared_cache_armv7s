/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CalDAV/CalDAVCalendarServerResourceChangeElement.h>

@interface CalDAVCalendarServerCollectionChangesElement : CalDAVCalendarServerResourceChangeElement {

	long long _created;
	long long _updated;
	long long _deleted;

}

@property (assign) long long created;              //@synthesize created=_created - In the implementation block
@property (assign) long long updated;              //@synthesize updated=_updated - In the implementation block
@property (assign) long long deleted;              //@synthesize deleted=_deleted - In the implementation block
-(long long)created;
-(void)setCreated:(long long)arg1 ;
-(id)init;
-(void)setUpdated:(long long)arg1 ;
-(void)setCreatedItem:(id)arg1 ;
-(void)setUpdatedItem:(id)arg1 ;
-(void)setDeletedItem:(id)arg1 ;
-(id)copyParseRules;
-(long long)updated;
-(long long)deleted;
-(void)setDeleted:(long long)arg1 ;
@end
