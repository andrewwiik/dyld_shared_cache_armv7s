/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>
#import <iTunesStoreUI/SKUIShowcaseDelegate.h>

@class SKUIResourceLoader, NSArray, SKUIShowcaseViewController;

@interface SUShowcaseViewController : SUViewController <SKUIShowcaseDelegate> {

	SKUIResourceLoader* _artworkLoader;
	NSArray* _showcaseItems;
	SKUIShowcaseViewController* _underlyingViewController;

}
-(void)dealloc;
-(void)loadView;
-(id)initWithShowcaseDictionary:(id)arg1 ;
-(id)_artworkLoader;
-(void)showcase:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3 ;
@end

