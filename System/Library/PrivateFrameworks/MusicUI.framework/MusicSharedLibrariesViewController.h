/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <UIKit/UIViewControllerRestoration.h>

@class MPMediaLibrary, NSArray;

@interface MusicSharedLibrariesViewController : UITableViewController <UIViewControllerRestoration> {

	MPMediaLibrary* _connectingMediaLibrary;
	NSArray* _sharedMediaLibraries;

}
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)_defaultMediaLibraryDidChangeNotification:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void).cxx_destruct;
-(void)_availableMediaLibrariesDidChangeNotification:(id)arg1 ;
-(void)_mediaLibraryConnectionProgressDidChangeNotification:(id)arg1 ;
-(void)_cancelConnectionAndDismiss;
-(id)_sharedMediaLibraries;
-(void)_updateConnectionProgressForCell:(id)arg1 ;
-(void)_updateNavigationPrompt;
-(void)_updateConnectionProgress;
-(bool)music_shouldPresentModallyInMoreList;
@end

