/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface GKPendingFriendRequest : NSObject {

	NSString* _recipient;
	int _recipientKind;
	NSString* _originator;
	NSString* _originatorEmail;
	NSString* _requestID;
	NSString* _message;
	NSString* _handle;
	bool _shouldBadge;
	unsigned long long _friendRequestCount;
	bool _purpleBuddyAccount;

}

@property (nonatomic,retain) NSString * recipient;                               //@synthesize recipient=_recipient - In the implementation block
@property (assign,nonatomic) int recipientKind;                                  //@synthesize recipientKind=_recipientKind - In the implementation block
@property (nonatomic,retain) NSString * originator;                              //@synthesize originator=_originator - In the implementation block
@property (nonatomic,retain) NSString * originatorEmail;                         //@synthesize originatorEmail=_originatorEmail - In the implementation block
@property (nonatomic,retain) NSString * requestID;                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,retain) NSString * message;                                 //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSString * handle;                                  //@synthesize handle=_handle - In the implementation block
@property (assign,nonatomic) bool shouldBadge;                                   //@synthesize shouldBadge=_shouldBadge - In the implementation block
@property (assign,nonatomic) unsigned long long friendRequestCount;              //@synthesize friendRequestCount=_friendRequestCount - In the implementation block
@property (assign,nonatomic) bool purpleBuddyAccount;                            //@synthesize purpleBuddyAccount=_purpleBuddyAccount - In the implementation block
+(id)pushDictionaryForQuery:(id)arg1 ;
-(id)originator;
-(void)setRecipientKind:(int)arg1 ;
-(void)setOriginator:(id)arg1 ;
-(void)setOriginatorEmail:(id)arg1 ;
-(void)setRequestID:(id)arg1 ;
-(void)setShouldBadge:(bool)arg1 ;
-(void)setFriendRequestCount:(unsigned long long)arg1 ;
-(void)setPurpleBuddyAccount:(bool)arg1 ;
-(id)initWithPushDictionary:(id)arg1 ;
-(id)originatorEmail;
-(id)requestID;
-(unsigned long long)friendRequestCount;
-(id)initWithURLQuery:(id)arg1 ;
-(int)recipientKind;
-(bool)shouldBadge;
-(bool)purpleBuddyAccount;
-(void)dealloc;
-(id)description;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)handle;
-(void)setHandle:(id)arg1 ;
-(id)recipient;
-(void)setRecipient:(id)arg1 ;
@end

