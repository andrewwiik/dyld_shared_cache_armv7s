/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:32 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSArray, NSString;

@interface SUScriptMediaPickerController : SUScriptViewController

@property (assign) bool allowsPickingMultipleItems; 
@property (readonly) NSArray * mediaTypes; 
@property (retain) NSString * prompt; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)initWithMediaTypes:(id)arg1 ;
-(bool)allowsPickingMultipleItems;
-(void)setAllowsPickingMultipleItems:(bool)arg1 ;
-(id)prompt;
-(void)setPrompt:(id)arg1 ;
-(id)mediaTypes;
-(id)attributeKeys;
-(id)scriptAttributeKeys;
-(id)_className;
-(void)setNativeViewController:(id)arg1 ;
-(id)newNativeViewController;
@end

