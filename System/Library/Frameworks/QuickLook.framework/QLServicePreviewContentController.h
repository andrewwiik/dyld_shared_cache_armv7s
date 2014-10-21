/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIViewController.h>
#import <QuickLook/QLRemotePreviewContentControllerProtocol.h>
#import <QuickLook/QLPreviewContentDataSource.h>
#import <QuickLook/QLPreviewContentDelegate.h>

@class NSMutableDictionary, QLPreviewContentController, QLRemotePrintPageHelper, _UIHostedWindow;

@interface QLServicePreviewContentController : UIViewController <QLRemotePreviewContentControllerProtocol, QLPreviewContentDataSource, QLPreviewContentDelegate> {

	NSMutableDictionary* _previewItemCache;
	long long _sourceUUID;
	QLPreviewContentController* _previewContentController;
	long long _numberOfPreviewItems;
	int _previewMode;
	bool _remoteInstantiationFinished;
	bool _blockRemoteImages;
	QLRemotePrintPageHelper* _printPageHelper;
	long long _clientInterfaceOrientation;
	_UIHostedWindow* _hostedWindow;

}

@property (readonly) long long sourceUUID;                                 //@synthesize sourceUUID=_sourceUUID - In the implementation block
@property (assign) <QLPreviewContentDataSource> * dataSource; 
@property (assign) <QLPreviewContentDelegate> * delegate; 
@property (assign) int previewMode; 
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)purgeCache;
-(void)setTransitioning:(bool)arg1 synchronizedWithBlock:(/*^block*/ id)arg2 ;
-(void)checkCurrentPreviewItem;
-(long long)numberOfPreviewItems;
-(void)enterBackground;
-(void)becomeForeground;
-(void)setOverlayHidden:(bool)arg1 duration:(double)arg2 ;
-(void)configureWithParameters:(id)arg1 ;
-(void)willChangeContentFrame;
-(void)setContentFrame:(CGRect)arg1 ;
-(void)forceResignFirstResponder;
-(void)togglePlayState;
-(long long)currentSourceUUIDForPreviewContentController:(id)arg1 ;
-(long long)numberOfPreviewItemsInPreviewContentController:(id)arg1 ;
-(id)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(void)previewContentController:(id)arg1 previewItemAtIndex:(long long)arg2 completionBlock:(/*^block*/ id)arg3 ;
-(void)previewContentController:(id)arg1 willMoveToItemAtIndex:(long long)arg2 ;
-(void)previewContentController:(id)arg1 didMoveToItem:(id)arg2 atIndex:(long long)arg3 ;
-(void)previewContentController:(id)arg1 didLoadItem:(id)arg2 atIndex:(long long)arg3 withError:(id)arg4 ;
-(void)previewContentController:(id)arg1 didFailWithError:(id)arg2 ;
-(void)previewContentController:(id)arg1 willShowOverlayWithDuration:(double)arg2 ;
-(void)previewContentController:(id)arg1 willHideOverlayWithDuration:(double)arg2 ;
-(void)contentWasTappedInPreviewContentController:(id)arg1 ;
-(void)showContentsWasTappedInPreviewContentController:(id)arg1 ;
-(void)overlayWasTappedInPreviewContentController:(id)arg1 ;
-(void)previewContentController:(id)arg1 receivedTapOnURL:(id)arg2 ;
-(id)printPageHelper;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(void)previewContentController:(id)arg1 setAVState:(id)arg2 forPreviewItem:(id)arg3 ;
-(void)previewContentController:(id)arg1 willEnterFullScreenWithHostedWindow:(id)arg2 ;
-(void)previewContentControllerDidExitFullScreen:(id)arg1 ;
-(id)clientProcessAlertViewForPreviewContentController:(id)arg1 ;
-(void)_willAnimateRotationTo:(long long)arg1 ;
-(void)_setNavigationBarVerticalOffset:(double)arg1 ;
-(void)_setTransitioning:(bool)arg1 ;
-(void)_getNumberOfPagesForSize:(CGSize)arg1 withHandler:(/*^block*/ id)arg2 ;
-(void)_prepareForDrawingPages:(NSRange)arg1 ;
-(void)_getPDFPageAtIndex:(long long)arg1 size:(CGSize)arg2 handler:(/*^block*/ id)arg3 ;
-(long long)sourceUUID;
-(void)_setNumberOfPreviewItems:(long long)arg1 ;
-(void)_updateHostedWindowFrame;
-(id)_remotePreviewItemAtIndex:(long long)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)dataSource;
-(id)delegate;
-(void)setBlockRemoteImages:(bool)arg1 ;
-(id)printPageRenderer;
-(void)_willAppearInRemoteViewController;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 ;
-(void)refreshCurrentPreviewItem;
-(long long)currentPreviewItemIndex;
-(void)setPreviewMode:(int)arg1 ;
-(int)previewMode;
@end

