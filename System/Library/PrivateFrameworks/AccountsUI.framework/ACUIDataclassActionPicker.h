/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, ACAccount, NSArray, ACDataclassAction;

@interface ACUIDataclassActionPicker : NSObject {

	NSMutableArray* _affectedDataclasses;
	ACAccount* _affectedAccount;
	NSArray* _actions;

}

@property (nonatomic,readonly) NSArray * actions;                                       //@synthesize actions=_actions - In the implementation block
@property (nonatomic,copy) NSArray * affectedDataclasses;                               //@synthesize affectedDataclasses=_affectedDataclasses - In the implementation block
@property (nonatomic,readonly) ACAccount * affectedAccount;                             //@synthesize affectedAccount=_affectedAccount - In the implementation block
@property (nonatomic,readonly) bool hasDestructiveActions; 
@property (nonatomic,readonly) ACDataclassAction * firstDestructiveAction; 
@property (nonatomic,readonly) long long priorityIndex; 
-(id)title;
-(id)message;
-(void).cxx_destruct;
-(id)actions;
-(id)showInViewController:(id)arg1 ;
-(id)firstDestructiveAction;
-(bool)hasDestructiveActions;
-(id)descriptionForDataclassAction:(id)arg1 ;
-(id)affectedDataclasses;
-(bool)hasActionOfType:(long long)arg1 ;
-(id)affectedAccount;
-(id)initWithActions:(id)arg1 affectingAccount:(id)arg2 ;
-(void)addAffectedDataclass:(id)arg1 ;
-(long long)priorityIndex;
-(void)setAffectedDataclasses:(id)arg1 ;
@end

