/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CADisplayLink, NSMutableSet;

@interface AXDisplayLinkManager : NSObject {

	bool _hasUpdatedTargetActions;
	bool _handlingDisplayRefresh;
	CADisplayLink* _storedDisplayLink;
	NSMutableSet* _activeTargetActions;
	NSMutableSet* _updatedTargetActions;
	unsigned long long _warmUpModeRequirementsCount;

}

@property (getter=isPaused,nonatomic,readonly) bool paused; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) unsigned long long frameInterval; 
@property (nonatomic,retain) CADisplayLink * displayLink; 
@property (nonatomic,retain) CADisplayLink * storedDisplayLink;                                        //@synthesize storedDisplayLink=_storedDisplayLink - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeTargetActions;                                       //@synthesize activeTargetActions=_activeTargetActions - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedTargetActions;                                      //@synthesize updatedTargetActions=_updatedTargetActions - In the implementation block
@property (assign,nonatomic) bool hasUpdatedTargetActions;                                             //@synthesize hasUpdatedTargetActions=_hasUpdatedTargetActions - In the implementation block
@property (assign,getter=isHandlingDisplayRefresh,nonatomic) bool handlingDisplayRefresh;              //@synthesize handlingDisplayRefresh=_handlingDisplayRefresh - In the implementation block
@property (assign,nonatomic) unsigned long long warmUpModeRequirementsCount;                           //@synthesize warmUpModeRequirementsCount=_warmUpModeRequirementsCount - In the implementation block
@property (getter=isWarmUpModeEnabled,nonatomic,readonly) bool warmUpModeEnabled; 
+(void)_releaseCurrentDisplayLinkManager;
+(id)currentDisplayLinkManager;
-(bool)isPaused;
-(void)dealloc;
-(id)init;
-(double)timestamp;
-(double)duration;
-(unsigned long long)frameInterval;
-(void)setDisplayLink:(id)arg1 ;
-(id)displayLink;
-(void)setActiveTargetActions:(id)arg1 ;
-(void)setUpdatedTargetActions:(id)arg1 ;
-(id)storedDisplayLink;
-(void)_displayDidRefresh:(id)arg1 ;
-(void)setStoredDisplayLink:(id)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 frameInterval:(unsigned long long)arg3 ;
-(bool)isHandlingDisplayRefresh;
-(id)_prepareUpdatedTargetActionsForModification;
-(id)activeTargetActions;
-(void)_didAddFirstTargetAction;
-(void)_didRemoveLastTargetAction;
-(id)updatedTargetActions;
-(bool)hasUpdatedTargetActions;
-(void)setHasUpdatedTargetActions:(bool)arg1 ;
-(bool)isWarmUpModeEnabled;
-(unsigned long long)warmUpModeRequirementsCount;
-(void)setWarmUpModeRequirementsCount:(unsigned long long)arg1 ;
-(void)setHandlingDisplayRefresh:(bool)arg1 ;
-(void)addTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)removeTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)beginRequiringWarmUpMode;
-(void)endRequiringWarmUpMode;
@end

