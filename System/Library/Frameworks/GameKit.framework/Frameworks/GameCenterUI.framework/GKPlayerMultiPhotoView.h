/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class NSArray, NSMutableDictionary;

@interface GKPlayerMultiPhotoView : UIImageView {

	NSArray* _players;
	NSMutableDictionary* _photoImages;

}

@property (nonatomic,retain) NSArray * players;                              //@synthesize players=_players - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * photoImages;              //@synthesize photoImages=_photoImages - In the implementation block
-(id)players;
-(void)setPlayers:(id)arg1 ;
-(id)photoImages;
-(void)refreshPhotos;
-(void)setPhotoImages:(id)arg1 ;
-(void)dealloc;
-(void)updateImage;
@end

