/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary, NSString, SSDialogButton, NSDictionary;

@interface SSDialog : NSObject {

	NSArray* _buttons;
	NSMutableDictionary* _dialogDictionary;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSArray * buttons; 
@property (nonatomic,retain) SSDialogButton * defaultButton; 
@property (nonatomic,readonly) NSDictionary * dialogDictionary; 
@property (nonatomic,readonly) NSString * dialogKind; 
-(id)initWithDialogDictionary:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)message;
-(id)defaultButton;
-(void)setDefaultButton:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)buttons;
-(id)valueForProperty:(id)arg1 ;
-(id)dialogKind;
-(void)setButtons:(id)arg1 ;
-(id)dialogDictionary;
@end

