/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIModalItemContentView.h>

@class UITableView, _UIBackdropView;

@interface _UIModalItemActionSheetContentView : _UIModalItemContentView {

	UITableView* _otherButtonTableView;
	UITableView* _cancelTableView;
	_UIBackdropView* _effectView;

}
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)layout;
-(void)_prepareViewIfNeeded;
-(void)_createOtherButtonTableView;
-(double)numberOfOtherButtonTitles;
-(void)_moveAllSubviewsToEffectContentView;
@end
