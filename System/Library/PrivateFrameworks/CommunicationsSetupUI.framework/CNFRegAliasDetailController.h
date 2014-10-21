/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CNFRegListController.h>

@class CNFRegAlias, PSSpecifier, NSArray;

@interface CNFRegAliasDetailController : CNFRegListController {

	CNFRegAlias* _alias;
	PSSpecifier* _removeGroupSpecifier;
	PSSpecifier* _removeButtonSpecifier;
	NSArray* _resendValidationSpecifierGroup;

}

@property (nonatomic,retain) CNFRegAlias * alias;              //@synthesize alias=_alias - In the implementation block
-(id)alias;
-(void)setAlias:(id)arg1 ;
-(void)dealloc;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(id)bundle;
-(id)specifierList;
-(void)_setupEventHandlers;
-(void)_buildSpecifierCache:(id)arg1 ;
-(id)initWithRegController:(id)arg1 alias:(id)arg2 ;
-(void)_showAliasValidationError:(id)arg1 ;
-(void)_updateUIAnimated:(bool)arg1 ;
-(void)setRemoveAliasEnabled:(bool)arg1 animated:(bool)arg2 ;
-(void)_showResendGroup:(bool)arg1 animated:(bool)arg2 ;
-(void)showRemoveAliasConfirmation;
-(void)forgetAliasTapped:(id)arg1 ;
-(void)resendValidationEmailTapped:(id)arg1 ;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationWillEnterForeground;
@end

