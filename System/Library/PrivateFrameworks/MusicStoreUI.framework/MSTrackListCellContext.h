/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUMediaItemCellContext.h>

@interface MSTrackListCellContext : SUMediaItemCellContext {

	bool _shouldHideContentRating;
	bool _showSubtitle;

}

@property (assign,nonatomic) bool showSubtitle;                         //@synthesize showSubtitle=_showSubtitle - In the implementation block
@property (assign,nonatomic) bool shouldHideContentRating;              //@synthesize shouldHideContentRating=_shouldHideContentRating - In the implementation block
-(bool)showSubtitle;
-(bool)shouldHideContentRating;
-(void)setShouldHideContentRating:(bool)arg1 ;
-(void)setShowSubtitle:(bool)arg1 ;
@end

