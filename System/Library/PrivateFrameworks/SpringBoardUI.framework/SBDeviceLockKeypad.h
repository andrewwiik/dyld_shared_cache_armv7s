/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <TelephonyUI/TPLegacyPhonePad.h>

@class UIButton;

@interface SBDeviceLockKeypad : TPLegacyPhonePad {

	UIButton* _deleteButton;
	UIButton* _cancelButton;
	bool _deleteEnabled;
	bool _playKeyboardClicks;

}

@property (assign,nonatomic) bool playsKeyboardClicks; 
@property (assign,nonatomic) bool showsEmergencyCallButton; 
@property (assign,getter=isDeleteEnabled,nonatomic) bool deleteEnabled;              //@synthesize deleteEnabled=_deleteEnabled - In the implementation block
@property (nonatomic,readonly) BOOL deleteKeyChar; 
@property (nonatomic,readonly) BOOL cancelKeyChar; 
@property (nonatomic,readonly) BOOL emergencyKeyChar; 
+(CGSize)defaultSize;
+(id)keypadImage;
+(id)pressedImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setShowsEmergencyCallButton:(bool)arg1 ;
-(void)setPlaysKeyboardClicks:(bool)arg1 ;
-(void)hiddenFromView;
-(void)willBecomeVisible;
-(id)initWithDefaultSizeForStyle:(int)arg1 ;
-(bool)playsKeyboardClicks;
-(bool)showsEmergencyCallButton;
-(BOOL)deleteKeyChar;
-(BOOL)cancelKeyChar;
-(BOOL)emergencyKeyChar;
-(bool)isDeleteEnabled;
-(void)setDeleteEnabled:(bool)arg1 ;
-(id)_keypadImage;
-(id)_pressedImage;
@end

