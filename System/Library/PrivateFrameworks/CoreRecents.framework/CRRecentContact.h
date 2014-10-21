/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreRecents.framework/CoreRecents
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, NSString, NSDictionary, NSNumber, NSArray, NSDate;

@interface CRRecentContact : NSObject {

	NSMutableArray* _recentDates;
	long long _contactID;
	NSString* _recentsDomain;
	NSString* _displayName;
	NSString* _kind;
	NSString* _address;
	NSString* _lastSendingAddress;
	NSString* _originalSource;
	NSDictionary* _metadata;
	NSNumber* _weight;
	NSNumber* _decayedWeight;
	NSArray* _members;
	long long _recentID;
	NSString* _groupName;
	NSString* _rawAddress;

}

@property (assign,nonatomic) long long contactID;                              //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy) NSString * recentsDomain;                           //@synthesize recentsDomain=_recentsDomain - In the implementation block
@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * kind;                                    //@synthesize kind=_kind - In the implementation block
@property (nonatomic,copy) NSString * address;                                 //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) NSString * lastSendingAddress;                      //@synthesize lastSendingAddress=_lastSendingAddress - In the implementation block
@property (nonatomic,copy) NSString * originalSource;                          //@synthesize originalSource=_originalSource - In the implementation block
@property (nonatomic,copy) NSArray * recentDates; 
@property (nonatomic,copy) NSDictionary * metadata;                            //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) NSNumber * weight;                                //@synthesize weight=_weight - In the implementation block
@property (nonatomic,retain) NSNumber * decayedWeight;                         //@synthesize decayedWeight=_decayedWeight - In the implementation block
@property (nonatomic,copy) NSArray * members;                                  //@synthesize members=_members - In the implementation block
@property (nonatomic,readonly) unsigned long long countOfRecents; 
@property (nonatomic,readonly) NSDate * mostRecentDate; 
@property (nonatomic,readonly) NSDate * leastRecentDate; 
@property (getter=isGroup,nonatomic,readonly) bool group; 
@property (assign,nonatomic) long long recentID;                               //@synthesize recentID=_recentID - In the implementation block
@property (nonatomic,copy) NSString * groupName;                               //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,copy) NSString * rawAddress;                              //@synthesize rawAddress=_rawAddress - In the implementation block
-(int)property;
-(int)matchedIdentifier;
-(void*)existingPerson;
-(id)_addressBookContext;
-(void)_setAddressBookContext:(id)arg1 ;
-(void*)person;
-(id)copyDictionaryRepresentation;
-(void)setAddress:(id)arg1 ;
-(id)lastSendingAddress;
-(id)members;
-(unsigned long long)countOfRecents;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setGroupName:(id)arg1 ;
-(id)groupName;
-(id)displayName;
-(bool)isGroup;
-(id)kind;
-(id)weight;
-(void)setWeight:(id)arg1 ;
-(id)rawAddress;
-(id)initWithContactID:(long long)arg1 ;
-(void)setRecentID:(long long)arg1 ;
-(void)setRecentsDomain:(id)arg1 ;
-(void)setRecentDates:(id)arg1 ;
-(void)setMembers:(id)arg1 ;
-(long long)recentID;
-(void)lazilyCreateRecentDates;
-(unsigned long long)insertionIndexForDate:(id)arg1 wouldBeUnique:(bool*)arg2 ;
-(void)insertDate:(id)arg1 atIndex:(unsigned long long)arg2 required:(bool)arg3 ;
-(void)enumerateArchivablePropertiesWithBlock:(/*^block*/ id)arg1 ;
-(long long)contactID;
-(id)initWithAddress:(id)arg1 displayName:(id)arg2 kind:(id)arg3 recentDate:(id)arg4 recentsDomain:(id)arg5 ;
-(id)initWithMembers:(id)arg1 displayName:(id)arg2 recentDate:(id)arg3 recentsDomain:(id)arg4 ;
-(bool)hasFullTextMatch:(id)arg1 ;
-(void)applyWeight:(id)arg1 ;
-(id)mostRecentDate;
-(id)leastRecentDate;
-(id)recentDates;
-(void)recordRecentEventForDate:(id)arg1 userInitiated:(bool)arg2 ;
-(void)setArchivableRecentID:(id)arg1 ;
-(id)archivableRecentID;
-(void)setArchivableContactID:(id)arg1 ;
-(id)archivableContactID;
-(void)setArchivableGroupMembers:(id)arg1 ;
-(id)archivableGroupMembers;
-(void)setArchivableMetadata:(id)arg1 ;
-(id)archivableMetadata;
-(void)setContactID:(long long)arg1 ;
-(id)recentsDomain;
-(void)setLastSendingAddress:(id)arg1 ;
-(id)originalSource;
-(void)setOriginalSource:(id)arg1 ;
-(id)decayedWeight;
-(void)setDecayedWeight:(id)arg1 ;
-(void)setRawAddress:(id)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(void)setKind:(id)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(id)address;
@end

