/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/_UIRemoteViewController.h>
#import <QuickLook/QLPreviewContentControllerProtocol.h>
#import <QuickLook/QLPrintPageRendererDataSource.h>

@protocol QLPreviewContentDataSource, QLPreviewContentDelegate;
@class QLPreviewController, NSMapTable, QLPrintPageRenderer, _UIRemoteView;

@interface QLRemotePreviewContentController : _UIRemoteViewController <QLPreviewContentControllerProtocol, QLPrintPageRendererDataSource> {

	QLPreviewController* _previewController;
	<QLPreviewContentDataSource>* _dataSource;
	<QLPreviewContentDelegate>* _delegate;
	long long _currentPreviewItemIndex;
	long long _numberOfPreviewItems;
	NSMapTable* _previewItemsForProxys;
	NSMapTable* _proxysForPreviewItems;
	QLPrintPageRenderer* _printPageRenderer;
	_UIRemoteView* _fullScreenView;
	bool _statusBarWasHidden;
	bool _isHostingFullScreenWindow;

}

@property (assign) QLPreviewController * previewController;                //@synthesize previewController=_previewController - In the implementation block
@property (assign) <QLPreviewContentDataSource> * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) <QLPreviewContentDelegate> * delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign) int previewMode; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
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
-(id)printPageHelper;
-(void)beginScrubbing;
-(void)scrubToValue:(double)arg1 ;
-(void)endScrubbing;
-(long long)numberOfPageInPrintPageRenderer:(id)arg1 withSize:(CGSize)arg2 ;
-(void)printPageRenderer:(id)arg1 prepareForDrawingPages:(NSRange)arg2 ;
-(id)printPageRenderer:(id)arg1 pdfDataForPageAtIndex:(long long)arg2 withSize:(CGSize)arg3 printingDone:(bool*)arg4 ;
-(void)_previewContentControllerGetPreviewItemAtIndex:(long long)arg1 sourceUUID:(long long)arg2 handler:(/*^block*/ id)arg3 ;
-(void)_previewContentControllerWillShowOverlayWithDuration:(double)arg1 ;
-(void)_previewContentControllerWillHideOverlayWithDuration:(double)arg1 ;
-(void)_contentWasTappedInPreviewContentController;
-(void)_overlayWasTappedInPreviewContentController;
-(void)_showContentsWasTappedInPreviewContentController;
-(void)_previewContentControllerWillMoveToItemAtIndex:(long long)arg1 ;
-(void)_previewContentControllerDidMoveToItemAtIndex:(long long)arg1 ;
-(void)_previewContentControllerReceivedTapOnURL:(id)arg1 ;
-(void)_previewContentControllerDidLoadItem:(id)arg1 atIndex:(long long)arg2 withError:(id)arg3 ;
-(void)_setAVState:(id)arg1 forPreviewItem:(id)arg2 ;
-(void)_willEnterFullScreenWithContext:(id)arg1 ;
-(void)_didExitFullScreen;
-(void)_updateNavigationBarVerticalOffset;
-(void)setNumberOfPreviewItems:(long long)arg1 ;
-(id)_proxyForPreviewItem:(id)arg1 ;
-(id)_previewItemFromProxy:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)dataSource;
-(id)delegate;
-(void)viewDidLayoutSubviews;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(bool)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(id)previewController;
-(void)setBlockRemoteImages:(bool)arg1 ;
-(id)printPageRenderer;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setLoadingTextForMissingFiles:(id)arg1 ;
-(void)setCurrentPreviewItemIndex:(long long)arg1 ;
-(void)refreshCurrentPreviewItem;
-(long long)currentPreviewItemIndex;
-(void)setPreviewMode:(int)arg1 ;
-(int)previewMode;
-(void)setPreviewController:(id)arg1 ;
@end

