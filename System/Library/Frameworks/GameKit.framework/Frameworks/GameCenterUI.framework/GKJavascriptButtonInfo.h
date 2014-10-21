/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:38 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, WebScriptObject;

@interface GKJavascriptButtonInfo : NSObject {

	bool _defaultItem;
	bool _enabled;
	bool _cancel;
	NSString* _label;
	NSString* _callbackScript;
	WebScriptObject* _callback;

}

@property (nonatomic,retain) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSString * callbackScript;                      //@synthesize callbackScript=_callbackScript - In the implementation block
@property (assign,getter=isDefault,nonatomic) bool defaultItem;              //@synthesize defaultItem=_defaultItem - In the implementation block
@property (assign,getter=isEnabled,nonatomic) bool enabled;                  //@synthesize enabled=_enabled - In the implementation block
@property (assign,getter=isCancel,nonatomic) bool cancel;                    //@synthesize cancel=_cancel - In the implementation block
@property (nonatomic,retain) WebScriptObject * callback;                     //@synthesize callback=_callback - In the implementation block
+(id)buttonInfoWithLabel:(id)arg1 callbackScript:(id)arg2 default:(bool)arg3 ;
+(id)buttonInfoWithWebScriptObject:(id)arg1 ;
-(id)initWithWebScriptObject:(id)arg1 ;
-(id)initWithLabel:(id)arg1 callbackScript:(id)arg2 default:(bool)arg3 ;
-(id)callback;
-(id)callbackScript;
-(void)invokeCallbackWithWebView:(id)arg1 ;
-(void)setCallbackScript:(id)arg1 ;
-(bool)isDefault;
-(void)setDefaultItem:(bool)arg1 ;
-(bool)isCancel;
-(void)setCancel:(bool)arg1 ;
-(void)setCallback:(id)arg1 ;
-(void)dealloc;
-(bool)isEnabled;
-(void)setEnabled:(bool)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
@end

