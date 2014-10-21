/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/AVController.h>

@interface RCAVController : AVController {

	bool _hasInitializedRouteControllerSettings;
	bool _audioRouteNeedsReactivationFromSuspension;
	bool _resetVoiceMemoSettingsEnabledValue;

}
+(id)sharedController;
+(void)_controllerConnectionInvalidatedNotification:(id)arg1 ;
+(void)recreateSharedAVInstance;
-(void)initializeOutputRouteCategory;
-(void)_deactivateAudioCategoryIfSuspended;
-(void)_reactivateAudioCategoryFromSuspension;
-(void)switchBackToOutputRouteCategory;
-(void)_switchBackToOutputRouteCategoryIgnoringApplicationState:(bool)arg1 ;
@end
