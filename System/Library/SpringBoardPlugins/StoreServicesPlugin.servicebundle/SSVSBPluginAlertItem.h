/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/StoreServicesPlugin.servicebundle/StoreServicesPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@protocol OS_xpc_object, SSVSBPluginAlertDelegate;
@class NSObject, SSDialog, SSVSBPluginAlertHeaderView, UIViewController;

@interface SSVSBPluginAlertItem : SBAlertItem {

	NSObject<OS_xpc_object>* _connection;
	SSDialog* _dialog;
	SSVSBPluginAlertHeaderView* _headerView;
	UIViewController* _headerViewController;
	NSObject<OS_xpc_object>* _message;
	<SSVSBPluginAlertDelegate>* _storeServicesDelegate;
	long long _storeServicesTag;

}

@property (assign,nonatomic,__weak) <SSVSBPluginAlertDelegate> * storeServicesDelegate;              //@synthesize storeServicesDelegate=_storeServicesDelegate - In the implementation block
@property (nonatomic,readonly) long long storeServicesTag;                                           //@synthesize storeServicesTag=_storeServicesTag - In the implementation block
-(bool)shouldShowInLockScreen;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void).cxx_destruct;
-(void)didDeactivateForReason:(int)arg1 ;
-(bool)dismissOnLock;
-(void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2 ;
-(long long)_cancelButtonIndex;
-(void)_sendReplyWithButtonIndex:(long long)arg1 ;
-(id)initWithMessage:(id)arg1 connection:(id)arg2 ;
-(void)updateWithMessage:(id)arg1 ;
-(id)storeServicesDelegate;
-(void)setStoreServicesDelegate:(id)arg1 ;
-(long long)storeServicesTag;
@end

