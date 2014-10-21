/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIAutoRotatingWindow.h>
#import <UIKit/_UIScreenBasedObject.h>

@class UIScreen;

@interface UITextEffectsWindow : UIAutoRotatingWindow <_UIScreenBasedObject> {

	unsigned _activeEffectsCount;
	bool _inDealloc;
	bool _nonServiceHosted;
	double _defaultWindowLevel;
	CGPoint _hostedWindowOffset;
	int _bgCount;
	unsigned long long _activeRemoteViewCount;
	unsigned long long _windowLevelCount;
	double _windowLevelStack[5];

}

@property (readonly) UIScreen * _intendedScreen; 
@property (readonly) unsigned contextID; 
@property (assign,nonatomic) bool nonServiceHosted;                   //@synthesize nonServiceHosted=_nonServiceHosted - In the implementation block
@property (assign,nonatomic) double defaultWindowLevel;               //@synthesize defaultWindowLevel=_defaultWindowLevel - In the implementation block
@property (assign,nonatomic) CGPoint hostedWindowOffset;              //@synthesize hostedWindowOffset=_hostedWindowOffset - In the implementation block
@property (nonatomic,readonly) CGRect hostedFrame; 
+(id)sharedTextEffectsWindow;
+(id)sharedTextEffectsWindowAboveStatusBar;
+(id)_sharedTextEffectsWindowforScreen:(id)arg1 aboveStatusBar:(bool)arg2 matchesStatusBarOrientationOnAccess:(bool)arg3 ;
+(id)sharedTextEffectsWindowAboveStatusBarForScreen:(id)arg1 ;
+(id)preferredTextEffectsWindow;
+(id)preferredTextEffectsWindowAboveStatusBar;
+(id)sharedTextEffectsWindow:(bool)arg1 ;
+(id)sharedTextEffectsWindowForScreen:(id)arg1 ;
+(void)_releaseSharedInstances;
+(void)raiseTextEffectsWindowsForShowNotificationCenter;
+(void)lowerTextEffectsWindowsForHideNotificationCenter;
-(id)_initWithScreen:(id)arg1 options:(id)arg2 ;
-(bool)_matchingOptions:(id)arg1 ;
-(id)_intendedScreen;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(CGPoint)convertPoint:(CGPoint)arg1 fromView:(id)arg2 ;
-(void)bringSubviewToFront:(id)arg1 ;
-(void)sendSubviewToBack:(id)arg1 ;
-(bool)_isTextEffectsWindow;
-(bool)_shouldTintStatusBar;
-(long long)interfaceOrientation;
-(bool)_canActAsKeyWindowForScreen:(id)arg1 ;
-(bool)_isWindowServerHostingManaged;
-(CGPoint)convertPoint:(CGPoint)arg1 fromWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toView:(id)arg2 ;
-(bool)_usesWindowServerHitTesting;
-(bool)_canAffectStatusBarAppearance;
-(bool)isInternalWindow;
-(void)_updateTransformLayerForClassicPresentation;
-(CGPoint)convertPoint:(CGPoint)arg1 toWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toWindow:(id)arg2 ;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(void)handleStatusBarChangeFromHeight:(double)arg1 toHeight:(double)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromWindow:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 fromView:(id)arg2 ;
-(bool)_disableViewScaling;
-(void)setKeepContextInBackground:(bool)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toView:(id)arg2 ;
-(void)didAddSubview:(id)arg1 ;
-(void)_didRemoveSubview:(id)arg1 ;
-(bool)nonServiceHosted;
-(void)matchDeviceOrientation;
-(id)aboveStatusBar;
-(void)setDefaultWindowLevel:(double)arg1 ;
-(double)defaultWindowLevel;
-(void)_applicationDidFinishLaunching:(id)arg1 ;
-(CGPoint)hostedWindowOffset;
-(CGPoint)_adjustPointForHostedDisplay:(CGPoint)arg1 hasTarget:(bool)arg2 inset:(bool)arg3 ;
-(void)delayHideWindow;
-(void)sortSubviews;
-(void)updateForOrientation:(long long)arg1 ;
-(void)updateForOrientation:(long long)arg1 forceResetTransform:(bool)arg2 ;
-(unsigned)contextID;
-(void)_setWindowLevel:(double)arg1 ;
-(void)_restoreWindowLevel;
-(CGRect)hostedFrame;
-(CGPoint)classicWindowPointForPoint:(CGPoint)arg1 ;
-(CGPoint)magnifierScreenPointForPoint:(CGPoint)arg1 targetWindow:(id)arg2 ;
-(void)resetTransform;
-(void)updateSubviewOrdering;
-(void)setNonServiceHosted:(bool)arg1 ;
-(void)setHostedWindowOffset:(CGPoint)arg1 ;
@end

