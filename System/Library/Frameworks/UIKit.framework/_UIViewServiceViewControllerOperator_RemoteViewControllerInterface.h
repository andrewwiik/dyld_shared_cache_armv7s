/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol _UIViewServiceViewControllerOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface,_UIViewServiceUIBehaviorInterface>
@required
-(void)__setContentSize:(id)arg1;
-(void)__createViewController:(id)arg1 withAppearanceSerializedRepresentations:(id)arg2 legacyAppearance:(bool)arg3 hostAccessibilityServerPort:(id)arg4 canShowTextServices:(bool)arg5 replyHandler:(/*^block*/ id)arg6;
-(void)__hostReadyToReceiveMessagesFromServiceViewController;
-(void)__hostViewWillAppear:(bool)arg1 inInterfaceOrientation:(long long)arg2 statusBarHeight:(double)arg3 completionHandler:(/*^block*/ id)arg4;
-(void)__hostViewDidAppear:(bool)arg1;
-(void)__hostViewWillDisappear:(bool)arg1;
-(void)__hostViewDidDisappear:(bool)arg1;
-(void)__hostViewDidMoveToScreenWithIntegerDisplayID:(unsigned)arg1 newHostingHandleReplyHandler:(/*^block*/ id)arg2;
-(void)__setServiceInPopover:(bool)arg1;
-(void)__hostWillEnterForeground;
-(void)__hostDidEnterBackground;
-(void)__hostDidChangeStatusBarOrientationToInterfaceOrientation:(long long)arg1;
-(void)__hostDidChangeStatusBarHeight:(double)arg1;
-(void)__hostWillRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
-(void)__hostWillAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 skipSelf:(bool)arg3;
-(void)__hostDidRotateFromInterfaceOrientation:(long long)arg1 skipSelf:(bool)arg2;
-(void)__hostDidPromoteFirstResponder;
-(void)__hostedActionSheetDidPresent;
-(void)__hostedActionSheetClickedButtonAtIndex:(long long)arg1;
-(void)__hostedActionSheetDidDismissWithClickedButtonIndex:(long long)arg1;
-(void)__scrollToTopFromTouchAtViewLocation:(id)arg1 resultHandler:(/*^block*/ id)arg2;
-(void)__hostDidUpdateAppearanceWithSerializedRepresentations:(id)arg1 originalSource:(id)arg2 legacyAppearance:(bool)arg3;
-(void)__setHostTintColor:(id)arg1 tintAdjustmentMode:(long long)arg2;
-(void)__textServiceDidDismiss;
-(void)__dimmingViewWasTapped;
-(void)__saveStateForSession:(id)arg1 restorationAnchor:(id)arg2 completionHandler:(/*^block*/ id)arg3;
-(void)__restoreStateForSession:(id)arg1 restorationAnchor:(id)arg2;
@end

