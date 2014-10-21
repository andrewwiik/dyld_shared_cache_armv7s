/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, NSURL;

@interface SKUIFacebookLikeStatus : NSObject <NSCopying> {

	NSArray* _friends;
	NSURL* _url;
	bool _userLiked;

}

@property (nonatomic,copy) NSArray * friendNames;                            //@synthesize friends=_friends - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                      //@synthesize url=_url - In the implementation block
@property (assign,getter=isUserLiked,nonatomic) bool userLiked;              //@synthesize userLiked=_userLiked - In the implementation block
-(id)copyWithZone:(NSZone)arg1 ;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(void).cxx_destruct;
-(id)friendNames;
-(void)setFriendNames:(id)arg1 ;
-(void)setUserLiked:(bool)arg1 ;
-(bool)isUserLiked;
-(id)initWithURL:(id)arg1 likeStatusDictionary:(id)arg2 ;
@end

