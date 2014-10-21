/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKBasicCollectionViewDataSource.h>

@interface GKFriendsDataSource : GKBasicCollectionViewDataSource {

	long long _kind;

}

@property (assign,nonatomic) long long kind;              //@synthesize kind=_kind - In the implementation block
-(void)refreshContentsForDataType:(unsigned)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3 ;
-(void)configureCollectionView:(id)arg1 ;
-(void)removeItemAtIndexPath:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)kind;
-(void)setKind:(long long)arg1 ;
-(id)sectionTitle;
@end

