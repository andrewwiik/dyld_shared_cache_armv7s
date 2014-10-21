/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIBarButtonItem.h>

@class UIView, UIButton, UIColor;

@interface RCAudioRouteBarButtonItem : UIBarButtonItem {

	UIView* _contentView;
	UIButton* _button;
	UIColor* _toggleSpeakerSpeakerRouteChosenColor;
	UIColor* _toggleSpeakerOtherRouteChosenColor;

}
+(id)newAudioRouteItem;
-(void)dealloc;
-(void).cxx_destruct;
-(id)initAudioRouteItem;
-(void)_audioRouteControllerAvailableRoutesMaskDidChangeNotification:(id)arg1 ;
-(void)_audioRouteControllerPickedRouteDidChangeNotification:(id)arg1 ;
-(void)_showAvailableRoutesAction;
-(void)_toggleSpeakerAction;
-(void)_updateButton;
@end

