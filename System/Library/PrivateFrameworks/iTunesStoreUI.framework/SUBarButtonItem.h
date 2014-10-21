/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKit/UIBarButtonItem.h>

@class UIView, SUUIAppearance, UINavigationItem, NSString, SUTouchCaptureView;

@interface SUBarButtonItem : UIBarButtonItem {

	UIView* _accessoryView;
	UIEdgeInsets _accessoryViewInsets;
	SUUIAppearance* _confirmationAppearance;
	UINavigationItem* _lastNavigationItem;
	NSString* _preConfirmationTitle;
	SUTouchCaptureView* _touchCaptureView;

}

@property (nonatomic,retain) UIView * accessoryView;                                               //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets accessoryViewInsets;                                     //@synthesize accessoryViewInsets=_accessoryViewInsets - In the implementation block
@property (assign,getter=isLoading,nonatomic) bool loading; 
@property (getter=isShowingConfirmation,nonatomic,readonly) bool showingConfirmation; 
+(Class)classForNavigationButton;
-(void)setLoading:(bool)arg1 ;
-(bool)isShowingConfirmation;
-(void)dealloc;
-(id)createViewForNavigationItem:(id)arg1 ;
-(bool)isLoading;
-(void)setAccessoryView:(id)arg1 ;
-(id)accessoryView;
-(void)setAccessoryViewInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)accessoryViewInsets;
-(void)configureFromScriptButton:(id)arg1 ;
-(void)hideConfirmationWithAppearance:(id)arg1 animated:(bool)arg2 ;
-(void)showConfirmationWithTitle:(id)arg1 appearance:(id)arg2 animated:(bool)arg3 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(void)_removeTouchCaptureView;
-(void)_setTitle:(id)arg1 isConfirmation:(bool)arg2 appearance:(id)arg3 animated:(bool)arg4 ;
-(id)_navigationButton;
-(void)_updateViewForAccessoryChange;
-(void)_addTouchCaptureViewForNavigationButton:(id)arg1 ;
@end

