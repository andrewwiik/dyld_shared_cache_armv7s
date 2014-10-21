/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>

@class EKSource, NSString, NSURL, NSArray, NSData;

@interface EKCalendar : EKObject {

	CGColorRef _color;
	bool _isMain;
	unsigned _loadFlags;

}

@property (nonatomic,retain) EKSource * source; 
@property (nonatomic,readonly) NSString * calendarIdentifier; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) bool allowsContentModifications; 
@property (getter=isSubscribed,nonatomic,readonly) bool subscribed; 
@property (getter=isImmutable,nonatomic,readonly) bool immutable; 
@property (assign,nonatomic) CGColorRef CGColor; 
@property (nonatomic,readonly) unsigned long long supportedEventAvailabilities; 
@property (nonatomic,readonly) unsigned long long allowedEntityTypes; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,copy) NSString * externalModificationTag; 
@property (nonatomic,readonly) NSURL * externalURI; 
@property (assign,nonatomic) int displayOrder; 
@property (nonatomic,copy) NSString * symbolicColorName; 
@property (nonatomic,readonly) NSString * colorString; 
@property (readonly) bool allowsEvents; 
@property (readonly) bool allowsTasks; 
@property (nonatomic,readonly) bool isDefaultCalendarForSource; 
@property (nonatomic,readonly) bool isHidden; 
@property (nonatomic,readonly) bool prohibitsScheduling; 
@property (nonatomic,readonly) bool hasEvents; 
@property (nonatomic,readonly) bool hasTasks; 
@property (assign,nonatomic) long long sharingStatus; 
@property (assign,nonatomic) unsigned long long invitationStatus; 
@property (nonatomic,copy) NSString * sharedOwnerName; 
@property (nonatomic,copy) NSURL * sharedOwnerAddress; 
@property (nonatomic,readonly) NSString * sharedOwnerEmail; 
@property (nonatomic,readonly) bool isSharingInvitation; 
@property (assign,nonatomic) int sharingInvitationResponse; 
@property (nonatomic,readonly) bool canBePublished; 
@property (nonatomic,readonly) bool canBeShared; 
@property (nonatomic,readonly) bool schedulingProhibited; 
@property (nonatomic,readonly) NSString * publishedURL; 
@property (assign,nonatomic) bool isPublished; 
@property (nonatomic,readonly) bool isFacebookBirthdayCalendar; 
@property (nonatomic,readonly) bool isHolidaySubscribedCalendar; 
@property (nonatomic,copy) NSArray * sharees; 
@property (nonatomic,copy) NSString * selfIdentityDisplayName; 
@property (nonatomic,copy) NSString * selfIdentityEmail; 
@property (nonatomic,copy) NSURL * selfIdentityAddress; 
@property (nonatomic,copy) NSString * selfIdentityFirstName; 
@property (nonatomic,copy) NSString * selfIdentityLastName; 
@property (nonatomic,copy) NSString * ownerIdentityDisplayName; 
@property (nonatomic,copy) NSString * ownerIdentityEmail; 
@property (nonatomic,copy) NSURL * ownerIdentityAddress; 
@property (nonatomic,copy) NSString * ownerIdentityFirstName; 
@property (nonatomic,copy) NSString * ownerIdentityLastName; 
@property (nonatomic,copy) NSData * digest; 
@property (assign,nonatomic) unsigned loadFlags;                                             //@synthesize loadFlags=_loadFlags - In the implementation block
@property (assign,nonatomic) bool isMainCalendarForSource;                                   //@synthesize isMain=_isMain - In the implementation block
+(id)calendarForEntityType:(unsigned long long)arg1 eventStore:(id)arg2 ;
+(id)typeDescription:(int)arg1 ;
+(id)calendarWithEventStore:(id)arg1 ;
-(id)uiColor;
-(bool)allowsTasks;
-(bool)allowsEvents;
-(bool)commit:(id*)arg1 ;
-(unsigned long long)allowedEntityTypes;
-(void)clearInvitationStatus;
-(bool)allowsContentModifications;
-(bool)validate:(id*)arg1 ;
-(bool)getColorRed:(int*)arg1 green:(int*)arg2 blue:(int*)arg3 ;
-(bool)isSubscribed;
-(id)sharedOwnerAddress;
-(id)_sourceRelation;
-(void)_setSource:(id)arg1 ;
-(id)_shareesRelation;
-(id)selfIdentityFirstName;
-(id)selfIdentityLastName;
-(id)ownerIdentityFirstName;
-(id)ownerIdentityLastName;
-(bool)isImmutable;
-(id)symbolicColorName;
-(void)setSymbolicColorName:(id)arg1 ;
-(void)setColorString:(id)arg1 ;
-(void)setCGColor:(CGColorRef)arg1 ;
-(int)displayOrder;
-(void)setDisplayOrder:(int)arg1 ;
-(bool)isDefaultCalendarForSource;
-(bool)prohibitsScheduling;
-(bool)isSharingInvitation;
-(long long)sharingStatus;
-(void)setSharingStatus:(long long)arg1 ;
-(unsigned long long)invitationStatus;
-(void)setInvitationStatus:(unsigned long long)arg1 ;
-(void)setSharingInvitationResponse:(int)arg1 ;
-(int)sharingInvitationResponse;
-(void)setSharedOwnerName:(id)arg1 ;
-(id)sharedOwnerName;
-(void)setSharedOwnerAddress:(id)arg1 ;
-(id)sharedOwnerEmail;
-(id)publishedURL;
-(void)setIsPublished:(bool)arg1 ;
-(bool)isPublished;
-(bool)canBePublished;
-(bool)canBeShared;
-(bool)schedulingProhibited;
-(bool)isFacebookBirthdayCalendar;
-(bool)isHolidaySubscribedCalendar;
-(id)externalModificationTag;
-(void)setExternalModificationTag:(id)arg1 ;
-(id)externalURI;
-(id)lazyLoadRelationForKey:(id)arg1 ;
-(bool)hasEvents;
-(bool)hasTasks;
-(unsigned long long)supportedEventAvailabilities;
-(id)sharees;
-(void)setSharees:(id)arg1 ;
-(void)addSharee:(id)arg1 ;
-(void)removeSharee:(id)arg1 ;
-(id)selfIdentityDisplayName;
-(void)setSelfIdentityDisplayName:(id)arg1 ;
-(id)selfIdentityEmail;
-(void)setSelfIdentityEmail:(id)arg1 ;
-(id)selfIdentityAddress;
-(void)setSelfIdentityAddress:(id)arg1 ;
-(void)setSelfIdentityFirstName:(id)arg1 ;
-(void)setSelfIdentityLastName:(id)arg1 ;
-(id)ownerIdentityDisplayName;
-(void)setOwnerIdentityDisplayName:(id)arg1 ;
-(id)ownerIdentityEmail;
-(void)setOwnerIdentityEmail:(id)arg1 ;
-(id)ownerIdentityAddress;
-(void)setOwnerIdentityAddress:(id)arg1 ;
-(void)setOwnerIdentityFirstName:(id)arg1 ;
-(void)setOwnerIdentityLastName:(id)arg1 ;
-(id)bulkRequests;
-(void)setBulkRequests:(id)arg1 ;
-(id)subcalAccountID;
-(void)setSubcalAccountID:(id)arg1 ;
-(id)pushKey;
-(void)setPushKey:(id)arg1 ;
-(id)digest;
-(void)setDigest:(id)arg1 ;
-(unsigned)loadFlags;
-(void)setLoadFlags:(unsigned)arg1 ;
-(bool)isMainCalendarForSource;
-(void)setIsMainCalendarForSource:(bool)arg1 ;
-(int)entityType;
-(void)dealloc;
-(CGColorRef)CGColor;
-(bool)isHidden;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)description;
-(int)type;
-(id)title;
-(id)calendarIdentifier;
-(id)source;
-(void)setSource:(id)arg1 ;
-(void)reset;
-(void)setExternalID:(id)arg1 ;
-(id)externalID;
-(bool)refresh;
-(id)colorString;
-(bool)remove:(id*)arg1 ;
@end

