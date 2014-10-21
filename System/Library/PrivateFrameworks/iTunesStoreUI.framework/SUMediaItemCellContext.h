/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUItemCellContext.h>

@interface SUMediaItemCellContext : SUItemCellContext {

	double _artworkWidth;
	long long _hiddenMediaIconTypes;
	bool _itemsHaveArtwork;

}

@property (assign,nonatomic) double artworkWidth;                         //@synthesize artworkWidth=_artworkWidth - In the implementation block
@property (assign,nonatomic) long long hiddenMediaIconTypes;              //@synthesize hiddenMediaIconTypes=_hiddenMediaIconTypes - In the implementation block
@property (assign,nonatomic) bool itemsHaveArtwork;                       //@synthesize itemsHaveArtwork=_itemsHaveArtwork - In the implementation block
-(id)init;
-(double)artworkWidth;
-(void)setArtworkWidth:(double)arg1 ;
-(void)setHiddenMediaIconTypes:(long long)arg1 ;
-(void)setItemsHaveArtwork:(bool)arg1 ;
-(long long)hiddenMediaIconTypes;
-(bool)itemsHaveArtwork;
@end

