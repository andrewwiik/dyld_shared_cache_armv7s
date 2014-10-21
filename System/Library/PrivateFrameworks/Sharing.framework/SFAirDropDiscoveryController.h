/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryActionSheetDelegate;
@class UIActionSheet;

@interface SFAirDropDiscoveryController : NSObject <UIActionSheetDelegate> {

	bool _isVisible;
	SFOperationRef _controller;
	UIActionSheet* _actionSheet;
	long long _discoverableMode;
	<SFAirDropDiscoveryControllerDelegate>* _delegate;
	<SFAirDropDiscoveryActionSheetDelegate>* _actionSheetDelegate;

}

@property (getter=isVisible,readonly) bool visible; 
@property (assign,nonatomic) long long discoverableMode; 
@property (__weak) <SFAirDropDiscoveryControllerDelegate> * delegate;                          //@synthesize delegate=_delegate - In the implementation block
@property (__weak) <SFAirDropDiscoveryActionSheetDelegate> * actionSheetDelegate;              //@synthesize actionSheetDelegate=_actionSheetDelegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(bool)isVisible;
-(void).cxx_destruct;
-(long long)operationDiscoverableModeToInteger:(id)arg1 ;
-(id)discoverableModeToString:(long long)arg1 ;
-(void)setDiscoverableMode:(long long)arg1 ;
-(void)handleOperationCallback:(SFOperationRef)arg1 event:(long long)arg2 withResults:(id)arg3 ;
-(id)discoverableModeActionSheet;
-(long long)discoverableMode;
-(id)actionSheetDelegate;
-(void)setActionSheetDelegate:(id)arg1 ;
@end

