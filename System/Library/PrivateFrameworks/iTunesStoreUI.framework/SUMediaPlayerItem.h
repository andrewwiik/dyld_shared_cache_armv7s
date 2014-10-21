/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSURL, NSString, NSArray;

@interface SUMediaPlayerItem : NSObject <NSCopying> {

	NSURL* _backgroundImageURL;
	NSString* _bookmarkIdentifier;
	NSArray* _downloadPingURLs;
	long long _initialOrientation;
	unsigned long long _itemIdentifier;
	long long _itemType;
	NSArray* _playbackPingURLs;
	double _playableDuration;
	NSString* _subtitle;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,retain) NSURL * backgroundImageURL;                     //@synthesize backgroundImageURL=_backgroundImageURL - In the implementation block
@property (assign,nonatomic) double bookmarkedStartTime; 
@property (nonatomic,copy) NSString * bookmarkIdentifier;                    //@synthesize bookmarkIdentifier=_bookmarkIdentifier - In the implementation block
@property (assign,nonatomic) long long initialOrientation;                   //@synthesize initialOrientation=_initialOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (assign,nonatomic) long long itemType;                             //@synthesize itemType=_itemType - In the implementation block
@property (nonatomic,copy) NSArray * downloadPingURLs;                       //@synthesize downloadPingURLs=_downloadPingURLs - In the implementation block
@property (nonatomic,copy) NSArray * playbackPingURLs;                       //@synthesize playbackPingURLs=_playbackPingURLs - In the implementation block
@property (assign,nonatomic) double playableDuration;                        //@synthesize playableDuration=_playableDuration - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSURL * URL;                                    //@synthesize url=_url - In the implementation block
-(double)playableDuration;
-(id)initWithItem:(id)arg1 ;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)title;
-(id)URL;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
-(void)setURL:(id)arg1 ;
-(unsigned long long)itemIdentifier;
-(long long)itemType;
-(void)setItemType:(long long)arg1 ;
-(void)setItemIdentifier:(unsigned long long)arg1 ;
-(id)_newPingURLsWithArray:(id)arg1 ;
-(void)setBookmarkedStartTime:(double)arg1 ;
-(double)bookmarkedStartTime;
-(void)resetBookmarkedStartTime;
-(id)backgroundImageURL;
-(void)setBackgroundImageURL:(id)arg1 ;
-(id)bookmarkIdentifier;
-(void)setBookmarkIdentifier:(id)arg1 ;
-(id)downloadPingURLs;
-(void)setDownloadPingURLs:(id)arg1 ;
-(long long)initialOrientation;
-(void)setInitialOrientation:(long long)arg1 ;
-(void)setPlayableDuration:(double)arg1 ;
-(id)playbackPingURLs;
-(void)setPlaybackPingURLs:(id)arg1 ;
@end

