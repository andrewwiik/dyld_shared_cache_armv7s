/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface _ML3AlbumData : NSObject {

	int _userRating;
	int _albumYear;
	long long _albumPid;

}

@property (assign,nonatomic) long long albumPid;              //@synthesize albumPid=_albumPid - In the implementation block
@property (assign,nonatomic) int userRating;                  //@synthesize userRating=_userRating - In the implementation block
@property (assign,nonatomic) int albumYear;                   //@synthesize albumYear=_albumYear - In the implementation block
-(id)initWithState:(long long)arg1 userRating:(int)arg2 albumYear:(int)arg3 ;
-(long long)albumPid;
-(void)setAlbumPid:(long long)arg1 ;
-(int)userRating;
-(void)setUserRating:(int)arg1 ;
-(int)albumYear;
-(void)setAlbumYear:(int)arg1 ;
@end

