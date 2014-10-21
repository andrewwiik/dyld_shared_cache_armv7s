/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKit/UITableViewController.h>

@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate;
@class NSOrderedSet, NSMutableSet, NSString;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController {

	NSOrderedSet* _albumsOrderedSet;
	NSMutableSet* _selectedAlbumGuids;
	bool _allowsMutlipleSelection;
	<PUPhotoStreamsAlbumsTableViewControllerDelegate>* _pickerDelegate;
	NSString* _selectedCloudGuid;

}

@property (assign,nonatomic) bool allowsMutlipleSelection;                                                           //@synthesize allowsMutlipleSelection=_allowsMutlipleSelection - In the implementation block
@property (assign,nonatomic,__weak) <PUPhotoStreamsAlbumsTableViewControllerDelegate> * pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (nonatomic,retain) NSString * selectedCloudGuid;                                                           //@synthesize selectedCloudGuid=_selectedCloudGuid - In the implementation block
+(NSObject*)albumListForContentMode:(int)arg1 ;
+(/*^block*/ id)_albumsComparator;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithStyle:(long long)arg1 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(id)posterImageForAlbum:(NSObject*)arg1 cell:(id)arg2 ;
-(id)pickerDelegate;
-(void)setSelectedCloudGuid:(id)arg1 ;
-(void)reloadActions;
-(bool)allowsMutlipleSelection;
-(void)setAllowsMutlipleSelection:(bool)arg1 ;
-(void)setPickerDelegate:(id)arg1 ;
-(id)selectedCloudGuid;
@end

