/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary, NSDate, GKGameInternal, NSArray, NSNumber;

@interface GKPlayerInternal : GKInternalRepresentation {

	NSString* _playerID;
	NSString* _alias;
	NSDictionary* _photos;
	unsigned short _numberOfFriends;
	unsigned short _numberOfGames;
	unsigned short _numberOfFriendsInCommon;
	unsigned short _numberOfGamesInCommon;
	unsigned _numberOfAchievements;
	unsigned _numberOfAchievementPoints;
	SCD_Union_GK8 _flags;
	bool _isAnonymousPlayer;
	bool _isUnknownPlayer;

}

@property (nonatomic,retain) NSString * playerID;                                                       //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSString * alias;                                                          //@synthesize alias=_alias - In the implementation block
@property (nonatomic,retain) NSDictionary * photos;                                                     //@synthesize photos=_photos - In the implementation block
@property (nonatomic,readonly) bool isFriend; 
@property (nonatomic,readonly) bool isLocalPlayer; 
@property (nonatomic,readonly) bool isAnonymousPlayer;                                                  //@synthesize isAnonymousPlayer=_isAnonymousPlayer - In the implementation block
@property (nonatomic,readonly) bool isUnknownPlayer;                                                    //@synthesize isUnknownPlayer=_isUnknownPlayer - In the implementation block
@property (nonatomic,readonly) bool isAutomatchPlayer; 
@property (nonatomic,readonly) bool isLoaded; 
@property (assign,nonatomic) unsigned short numberOfFriendsInCommon;                                    //@synthesize numberOfFriendsInCommon=_numberOfFriendsInCommon - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGamesInCommon;                                      //@synthesize numberOfGamesInCommon=_numberOfGamesInCommon - In the implementation block
@property (nonatomic,@dynamic,retain) NSString * firstName; 
@property (nonatomic,@dynamic,retain) NSString * lastName; 
@property (nonatomic,@dynamic,retain) NSString * compositeName; 
@property (nonatomic,@dynamic,retain) NSString * status; 
@property (nonatomic,@dynamic,retain) NSDate * lastPlayedDate; 
@property (nonatomic,@dynamic,retain) GKGameInternal * lastPlayedGame; 
@property (assign,nonatomic) unsigned short numberOfFriends;                                            //@synthesize numberOfFriends=_numberOfFriends - In the implementation block
@property (assign,nonatomic) unsigned short numberOfGames;                                              //@synthesize numberOfGames=_numberOfGames - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievements;                                             //@synthesize numberOfAchievements=_numberOfAchievements - In the implementation block
@property (assign,nonatomic) unsigned numberOfAchievementPoints;                                        //@synthesize numberOfAchievementPoints=_numberOfAchievementPoints - In the implementation block
@property (nonatomic,@dynamic,retain) NSString * accountName; 
@property (nonatomic,@dynamic,retain) NSArray * emailAddresses; 
@property (nonatomic,@dynamic,retain) NSArray * friends; 
@property (assign,getter=isPurpleBuddyAccount,nonatomic,@dynamic) bool purpleBuddyAccount; 
@property (assign,getter=isUnderage,nonatomic,@dynamic) bool underage; 
@property (assign,getter=isFindable,nonatomic,@dynamic) bool findable; 
@property (assign,getter=isPhotoPending,nonatomic,@dynamic) bool photoPending; 
@property (assign,nonatomic,@dynamic) unsigned short numberOfRequests; 
@property (assign,nonatomic,@dynamic) unsigned short numberOfTurns; 
@property (assign,nonatomic,@dynamic) unsigned short numberOfChallenges; 
@property (nonatomic,@dynamic,retain) NSString * facebookUserID; 
@property (nonatomic,@dynamic,retain) NSNumber * iCloudUserID; 
@property (assign,nonatomic,@dynamic) unsigned flags; 
+(id)secureCodedPropertyKeys;
+(id)displayNameWithOptions:(unsigned char)arg1 alias:(id)arg2 composite:(id)arg3 ;
+(id)compositeNameForFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)serverRepresentation;
-(unsigned)numberOfAchievements;
-(unsigned short)numberOfChallenges;
-(void)setNumberOfChallenges:(unsigned short)arg1 ;
-(void)setPurpleBuddyAccount:(bool)arg1 ;
-(void)setFriends:(id)arg1 ;
-(unsigned short)numberOfFriends;
-(void)setNumberOfFriends:(unsigned short)arg1 ;
-(unsigned short)numberOfFriendsInCommon;
-(unsigned short)numberOfGames;
-(unsigned short)numberOfGamesInCommon;
-(unsigned)numberOfAchievementPoints;
-(unsigned short)numberOfRequests;
-(unsigned short)numberOfTurns;
-(void)setNumberOfAchievements:(unsigned)arg1 ;
-(void)setCompositeName:(id)arg1 ;
-(void)setLastPlayedGame:(id)arg1 ;
-(id)facebookUserID;
-(void)setFacebookUserID:(id)arg1 ;
-(id)iCloudUserID;
-(void)setICloudUserID:(id)arg1 ;
-(void)setUnderage:(bool)arg1 ;
-(bool)isFindable;
-(void)setFindable:(bool)arg1 ;
-(bool)isPhotoPending;
-(void)setPhotoPending:(bool)arg1 ;
-(bool)allowNearbyMultiplayer;
-(void)setAllowNearbyMultiplayer:(bool)arg1 ;
-(void)setNumberOfRequests:(unsigned short)arg1 ;
-(void)setNumberOfTurns:(unsigned short)arg1 ;
-(void)setNumberOfFriendsInCommon:(unsigned short)arg1 ;
-(void)setNumberOfGames:(unsigned short)arg1 ;
-(void)setNumberOfGamesInCommon:(unsigned short)arg1 ;
-(void)setNumberOfAchievementPoints:(unsigned)arg1 ;
-(bool)isAnonymousPlayer;
-(bool)isUnknownPlayer;
-(void)setPlayerID:(id)arg1 ;
-(id)playerID;
-(id)displayNameWithOptions:(unsigned char)arg1 ;
-(bool)isFriend;
-(bool)isLocalPlayer;
-(id)alias;
-(id)photos;
-(bool)isUnderage;
-(void)setAlias:(id)arg1 ;
-(bool)isPurpleBuddyAccount;
-(bool)isAutomatchPlayer;
-(void)setPhotos:(id)arg1 ;
-(id)lastPlayedGame;
-(id)lastPlayedDate;
-(void)setLastPlayedDate:(id)arg1 ;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(bool)isLoaded;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(void)setAccountName:(id)arg1 ;
-(id)accountName;
-(id)compositeName;
-(unsigned)flags;
-(id)emailAddresses;
-(void)setEmailAddresses:(id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(id)firstName;
-(id)lastName;
-(void)setFirstName:(id)arg1 ;
-(void)setLastName:(id)arg1 ;
-(id)friends;
@end
