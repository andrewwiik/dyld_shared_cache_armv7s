/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXHearingAidSupport/AXHearingAidSupport-Structs.h>
#import <Preferences/PSListController.h>

@class NSString, AXRemoteHearingAidDevice;

@interface AXHearingDetailViewController : PSListController {

	NSString* _liveListenerUUID;
	AXRemoteHearingAidDevice* _device;

}

@property (nonatomic,retain) AXRemoteHearingAidDevice * device;              //@synthesize device=_device - In the implementation block
-(void)setDevice:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)updateView;
-(id)device;
-(id)deviceSpecifiers;
-(id)_volumeSpecifiers;
-(id)_modeSpecifiers;
-(void)liveListenToggle:(id)arg1 ;
-(id)disconnectedSpecifiers;
-(void)addVolumesForStream:(id)arg1 ;
-(NSRange)programsRange;
-(void)updateLiveListenCell:(id)arg1 ;
-(id)specifierForKey:(id)arg1 ;
-(id)specifiers;
@end
