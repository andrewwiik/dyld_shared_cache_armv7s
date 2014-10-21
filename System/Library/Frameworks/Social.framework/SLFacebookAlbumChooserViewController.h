/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <UIKit/UITableViewController.h>
#import <Social/SLFacebookAlbumManagerDelegate.h>

@protocol SLFacebookAlbumChooserViewControllerDelegate;
@class NSCache, UIButton, SLFacebookAlbumManager, NSArray;

@interface SLFacebookAlbumChooserViewController : UITableViewController <SLFacebookAlbumManagerDelegate> {

	NSCache* _coverImageCache;
	UIButton* _flipBackButton;
	SLFacebookAlbumManager* _albumManager;
	NSArray* _albums;
	<SLFacebookAlbumChooserViewControllerDelegate>* _delegate;

}

@property (retain) UIButton * flipBackButton;                                              //@synthesize flipBackButton=_flipBackButton - In the implementation block
@property (retain) SLFacebookAlbumManager * albumManager;                                  //@synthesize albumManager=_albumManager - In the implementation block
@property (retain) NSArray * albums;                                                       //@synthesize albums=_albums - In the implementation block
@property (__weak) <SLFacebookAlbumChooserViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setAlbumManager:(id)arg1 ;
-(id)albumManager;
-(void)albumManager:(id)arg1 didRefreshAlbums:(id)arg2 ;
-(void)albumManager:(id)arg1 didFailAlbumRefreshWithError:(id)arg2 ;
-(void)albumManager:(id)arg1 didLoadCoverImage:(id)arg2 forAlbum:(id)arg3 ;
-(void)albumManager:(id)arg1 didFailLoadingCoverImageForAlbum:(id)arg2 withError:(id)arg3 ;
-(id)initWithAlbumManager:(id)arg1 ;
-(void)flipBackTapped:(id)arg1 ;
-(id)flipBackButton;
-(void)setFlipBackButton:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)loadView;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void).cxx_destruct;
-(id)albums;
-(void)setAlbums:(id)arg1 ;
@end

