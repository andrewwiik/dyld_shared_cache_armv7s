/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDictionary;

@interface GKLeaderboardSetInternal : GKInternalRepresentation {

	NSString* _identifier;
	NSString* _groupIdentifier;
	NSString* _title;
	NSDictionary* _leaderboardIdentifiers;
	NSDictionary* _icons;

}

@property (nonatomic,retain) NSString * setIdentifier; 
@property (nonatomic,retain) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                         //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                   //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDictionary * leaderboardIdentifiers;              //@synthesize leaderboardIdentifiers=_leaderboardIdentifiers - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                               //@synthesize icons=_icons - In the implementation block
+(id)secureCodedPropertyKeys;
-(id)setIdentifier;
-(void)setSetIdentifier:(id)arg1 ;
-(id)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1 ;
-(id)leaderboardIdentifiers;
-(void)setLeaderboardIdentifiers:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)title;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void)setIcons:(id)arg1 ;
-(id)icons;
@end

