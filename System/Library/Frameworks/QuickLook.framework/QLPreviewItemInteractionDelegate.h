/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol QLPreviewItemInteractionDelegate <NSObject>
@required
-(void)previewItemWillLoad:(id)arg1;
-(void)previewItemDidLoad:(id)arg1 atIndex:(long long)arg2 withError:(id)arg3;
-(void)previewItem:(id)arg1 requiresDisplayBundle:(id)arg2 withHints:(id)arg3;
-(void)viewDidUpdateForPreviewItem:(id)arg1;
-(void)showContentsWasTappedForPreviewItem:(id)arg1;
-(id)previewItem:(id)arg1 willSendRequest:(id)arg2;
-(void)previewItem:(id)arg1 receivedTapOnURL:(id)arg2;
-(id)clientProcessAlertViewForPreviewItem:(id)arg1;
-(void)overlayWasInteractedWithOnPreviewItem:(id)arg1;
-(void)viewWasTappedOnPreviewItem:(id)arg1;
-(void)previewItem:(id)arg1 willShowOverlayWithDuration:(double)arg2;
-(void)previewItem:(id)arg1 willHideOverlayWithDuration:(double)arg2;
-(void)previewItem:(id)arg1 setAVState:(id)arg2;
-(void)previewItem:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2;
-(void)previewItemDidExitFullScreen:(id)arg1;
@end

