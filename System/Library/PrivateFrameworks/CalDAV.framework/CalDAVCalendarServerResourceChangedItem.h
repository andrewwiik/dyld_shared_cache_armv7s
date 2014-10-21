/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet, ICSDateValue;

@interface CalDAVCalendarServerResourceChangedItem : CoreDAVItem {

	NSMutableSet* _created;
	NSMutableSet* _updated;
	NSMutableSet* _deleted;
	NSMutableSet* _collectionChanges;
	NSMutableSet* _collectionUpdates;
	ICSDateValue* _dtstamp;

}

@property (retain) NSMutableSet * created;                        //@synthesize created=_created - In the implementation block
@property (retain) NSMutableSet * updated;                        //@synthesize updated=_updated - In the implementation block
@property (retain) NSMutableSet * deleted;                        //@synthesize deleted=_deleted - In the implementation block
@property (retain) NSMutableSet * collectionChanges;              //@synthesize collectionChanges=_collectionChanges - In the implementation block
@property (retain) NSMutableSet * collectionUpdates;              //@synthesize collectionUpdates=_collectionUpdates - In the implementation block
@property (retain) ICSDateValue * dtstamp;                        //@synthesize dtstamp=_dtstamp - In the implementation block
-(id)dtstamp;
-(id)created;
-(void)setDtstamp:(id)arg1 ;
-(void)setCreated:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setUpdated:(id)arg1 ;
-(void)setCollectionChanges:(id)arg1 ;
-(void)setCollectionUpdates:(id)arg1 ;
-(void)addCreated:(id)arg1 ;
-(void)addUpdated:(id)arg1 ;
-(void)addDeleted:(id)arg1 ;
-(void)addCollectionChanges:(id)arg1 ;
-(void)addCollectionUpdates:(id)arg1 ;
-(void)setDtstampItem:(id)arg1 ;
-(id)copyParseRules;
-(id)updated;
-(id)collectionChanges;
-(id)collectionUpdates;
-(id)deleted;
-(void)setDeleted:(id)arg1 ;
@end

