/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString;

@interface SUScriptRedeemViewController : SUScriptViewController {

	long long _category;
	NSString* _initialCode;

}

@property (nonatomic,copy) NSString * initialCode; 
@property (nonatomic,readonly) long long redeemCategoryApps; 
@property (nonatomic,readonly) long long redeemCategoryBooks; 
@property (nonatomic,readonly) long long redeemCategoryMedia; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(id)newNativeViewController;
-(void)setInitialCode:(id)arg1 ;
-(void)setRedeemStyle:(long long)arg1 ;
-(id)initialCode;
-(long long)redeemCategoryApps;
-(long long)redeemCategoryBooks;
-(long long)redeemCategoryMedia;
@end

