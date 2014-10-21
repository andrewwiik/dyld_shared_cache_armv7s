/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol AFUISiriLanguageDelegate;
@class NSString;

@interface AFUISiriLanguage : NSObject {

	NSString* _spokenLanguageCode;
	<AFUISiriLanguageDelegate>* _delegate;

}

@property (nonatomic,copy) NSString * spokenLanguageCode;                                           //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (getter=_delegate,nonatomic,readonly) <AFUISiriLanguageDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id)_delegate;
-(void).cxx_destruct;
-(id)_computeSpokenLanguageCode;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(void)_updateSpokenLanguageCode;
-(void)_setSpokenLanguageCode:(id)arg1 ;
-(id)spokenLanguageCode;
-(id)initWithDelegate:(id)arg1 ;
@end

