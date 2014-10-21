/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfigurationUI/MCURLListenerListController.h>
#import <UIKit/UITableViewDelegate.h>

@class UIImage;

@interface MCProfileListController : MCURLListenerListController <UITableViewDelegate> {

	UIImage* _profileListIcon;

}

@property (nonatomic,retain) UIImage * profileListIcon;              //@synthesize profileListIcon=_profileListIcon - In the implementation block
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void).cxx_destruct;
-(void)_profileListChanged:(id)arg1 ;
-(id)profileListIcon;
-(void)setProfileListIcon:(id)arg1 ;
-(id)specifiers;
@end

