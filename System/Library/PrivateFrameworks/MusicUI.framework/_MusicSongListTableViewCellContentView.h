/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <MusicUI/MusicSongTableViewCellContentView.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface _MusicSongListTableViewCellContentView : MusicSongTableViewCellContentView {

	UILabel* _albumLabel;
	UILabel* _artistLabel;
	UIImageView* _artworkImageView;
	UIImageView* _artworkAnimationImageView;
	UILabel* _titleLabel;
	NSString* _albumText;
	NSString* _artistText;
	bool _needsUpdate;

}

@property (nonatomic,copy) NSString * album; 
@property (nonatomic,copy) NSString * artist; 
@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,readonly) UILabel * albumLabel;                        //@synthesize albumLabel=_albumLabel - In the implementation block
@property (nonatomic,readonly) UILabel * artistLabel;                       //@synthesize artistLabel=_artistLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * artworkImageView;              //@synthesize artworkImageView=_artworkImageView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                        //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)artist;
-(void)setArtist:(id)arg1 ;
-(id)artworkImageView;
-(id)artworkImage;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)titleLabel;
-(void).cxx_destruct;
-(void)setArtworkImage:(id)arg1 ;
-(void)setDisplayAsDisabled:(bool)arg1 ;
-(void)setArtworkImage:(id)arg1 animated:(bool)arg2 ;
-(id)_createArtworkImageView;
-(void)_updateAlbumArtistLabelPhone;
-(void)layoutForPadInRect:(CGRect)arg1 ;
-(void)layoutForPhoneInRect:(CGRect)arg1 ;
-(id)albumLabel;
-(id)artistLabel;
-(id)album;
-(void)setAlbum:(id)arg1 ;
@end
