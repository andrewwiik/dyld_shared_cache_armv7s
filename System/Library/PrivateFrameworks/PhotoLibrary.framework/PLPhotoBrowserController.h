/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIViewController.h>
#import <PhotoLibrary/PLAirPlaySessionDataSource.h>
#import <PhotoLibrary/PLDeletePhotosActionControllerDelegate.h>
#import <PhotoLibrary/PLPhotoScrubberSpeedDelegate.h>
#import <UIKit/UIPageControllerDelegate.h>
#import <PhotoLibrary/PLPhotoTileViewControllerDelegate.h>
#import <PhotoLibrary/PLVideoViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <PhotoLibrary/PLPhotoScrubberDataSource.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <PhotoLibrary/PLSlideshowPluginDelegate.h>
#import <PhotoLibrary/AirPlayRemoteSlideshowDelegate.h>
#import <PhotoLibrary/PLDismissableViewController.h>
#import <PhotoLibrary/PLAssetContainerObserver.h>
#import <PhotoLibraryServices/PLAssetContainerListChangeObserver.h>
#import <PhotoLibraryServices/PLAssetChangeObserver.h>

@protocol PLPhotoBrowserControllerDelegate;
@class NSMutableDictionary, UIPageController, UIScrollView, UIView, UITransitionView, NSIndexPath, NSNumberFormatter, UIActionSheet, UIAlertView, PLProgressHUD, NSTimer, PLManagedAsset, UIWindow, UIViewController, PLProgressView, PLVideoRemaker, UINavigationController, UILongPressGestureRecognizer, PLEditPhotoController, NSArray, PLLibraryImageDataProvider, NSMutableSet, UIImage, PLPhotoScrubber, PLPhotoTileViewController, PLPictureFramePlugin, NSString, PLAirPlaySession, PLAirPlayBackgroundView, PLDeletePhotosActionController, UINavigationBar, NSMutableArray, NSManagedObjectID, PLAssetContainerDataSource, PLVideoView, NSDictionary;

@interface PLPhotoBrowserController : UIViewController <PLAirPlaySessionDataSource, PLDeletePhotosActionControllerDelegate, PLPhotoScrubberSpeedDelegate, UIPageControllerDelegate, PLPhotoTileViewControllerDelegate, PLVideoViewDelegate, UIScrollViewDelegate, UINavigationControllerDelegate, UIAlertViewDelegate, UIActionSheetDelegate, PLPhotoScrubberDataSource, UIPopoverControllerDelegate, PLSlideshowPluginDelegate, AirPlayRemoteSlideshowDelegate, PLDismissableViewController, PLAssetContainerObserver, PLAssetContainerListChangeObserver, PLAssetChangeObserver> {

	<PLPhotoBrowserControllerDelegate>* __delegate;
	NSMutableDictionary* _tileCache;
	UIPageController* _pageController;
	UIScrollView* _scroller;
	UIView* _fadeToBlackView;
	UITransitionView* _slideshowTransitionView;
	UITransitionView* _cameraTransitionView;
	NSIndexPath* _currentIndexPath;
	NSIndexPath* _deletedIndexPath;
	NSIndexPath* _priorIndexPath;
	NSNumberFormatter* _scrubOverlayTitleFormatter;
	int _slideshowStatus;
	bool _showingNextImage;
	bool _tvOutOn;
	bool _playingVideo;
	bool _animating;
	CGSize _contentStartSize;
	float _startScale;
	float _endScale;
	UIView* _remakerContainerView;
	UIActionSheet* _actionView;
	UIAlertView* _alertView;
	PLProgressHUD* _savingPhotoHud;
	double _slideshowDelay;
	NSTimer* _slideshowTimer;
	SEL _photoAction;
	id _photoActionInvoker;
	PLManagedAsset* _pendingPhoto;
	UIWindow* _tvOutWindow;
	UIPageController* _tvOutPageController;
	UIScrollView* _tvOutScroller;
	NSMutableDictionary* _tvOutTileCache;
	UITransitionView* _tvOutTransitionView;
	CGRect _animationFrame;
	UIView* _animationView;
	UIViewController* _composeSheetViewController;
	unsigned _didDisplayComposeSheet : 1;
	unsigned _didSlideImageDown : 1;
	unsigned _isAnimatingSendToEmail : 1;
	id _attachmentIdentifier;
	PLProgressView* _progressView;
	int _remakerMode;
	PLVideoRemaker* _remaker;
	PLManagedAsset* _currentVideo;
	UINavigationController* _mmsController;
	double _maximumTrimLength;
	UILongPressGestureRecognizer* _recognizer;
	SEL _actionAfterForcedRotation;
	bool _canDelayImageLoading;
	bool _delayImageLoading;
	int _autohideControlCount;
	PLEditPhotoController* _editController;
	NSArray* _currentAirplayRoutes;
	unsigned _statusBarIsLocked;
	unsigned _rotationDisabled;
	unsigned _videoEditingMode : 1;
	unsigned _remaking : 1;
	unsigned _isEditingPhoto : 1;
	unsigned _clearingFullScreenView : 1;
	unsigned _scrolling : 1;
	unsigned _canShowCopyCallout : 1;
	unsigned _viewIsDisappearing : 1;
	unsigned _didRotate : 1;
	unsigned _navigationBarDisabled;
	unsigned _bottomBarDisabled;
	unsigned _appInteractionDisabled;
	unsigned _isAnimatingTrash : 1;
	unsigned _isPlayingMusic : 1;
	unsigned _didStartMusicPlayback : 1;
	unsigned _rotationDisabledUnderCropOverlay : 1;
	unsigned _didSetSimpleRemotePriority : 1;
	unsigned _paging : 1;
	unsigned _collapsing : 1;
	unsigned _rotating : 1;
	unsigned _reloadPhotoScrubber : 1;
	unsigned _videoViewWillBeginEditing : 1;
	unsigned _playVideoOnActivation : 1;
	unsigned _remakingWasCancelled : 1;
	unsigned _canUploadHDVideoOver3G : 1;
	unsigned _didSetHDVideoUploadCapability : 1;
	unsigned _didShowHDRPrompt : 1;
	unsigned _imagesAreShuffled : 1;
	unsigned _isEditingComment : 1;
	bool _ignoringInteractionEventsForVideoViewRemaking;
	NSIndexPath* _scrubbedImageIndexPath;
	long long _scrubberAssetContainerIndex;
	PLLibraryImageDataProvider* _imageDataProvider;
	NSMutableSet* _imageRequests;
	UIImage* _loadedImage;
	PLPhotoScrubber* _photoScrubber;
	PLPhotoTileViewController* _deletedTile;
	int _currentAirTunesMode;
	unsigned long long _slideshowItemsToShow;
	unsigned long long _slideshowItemsShown;
	NSIndexPath* _slideshowEndIndexPath;
	bool _fadingToBlack;
	bool _slideshowIsOrigami;
	bool _slideshowStartedInFullScreen;
	bool _slideshowIsLoading;
	bool _slideshowIsEnding;
	PLPictureFramePlugin* _slideshowPlugin;
	UIView* _slideshowView;
	NSIndexPath* _lastStreamedPhotoIndexPath;
	NSIndexPath* _lastDisplayedRemoteSlideshowPhotoIndexPath;
	NSString* _currentAirTunesTransition;
	NSArray* _availableAirTunesServices;
	PLAirPlaySession* _airplaySession;
	unsigned _slideShowIsStreamed : 1;
	unsigned _airTunesSlideShowIsEnding : 1;
	PLAirPlayBackgroundView* _airTunesBackgroundView;
	PLDeletePhotosActionController* _deleteController;
	int _commentsInteractionMode;
	UINavigationBar* _commentsEditBar;
	bool _commentsTableWasVisible;
	NSMutableArray* _pendingCollectionListChangeNotifications;
	NSMutableArray* _pendingSingleCollectionChangeNotifications;
	NSMutableArray* _pendingAssetChangeNotifications;
	NSManagedObjectID* _currentAssetObjectID;
	NSString* _currentAssetPublicGlobalUUID;
	NSString* _currentAssetContainerUUID;
	id _activityTarget;
	SEL _activityAction;
	bool shouldShowOverlaysWhenViewAppears;
	bool shouldShowOverlaysWhenViewDisappears;
	bool _isCameraApp;
	bool _deletesDuplicatesWhenNecessary;
	bool _shouldPlayVideoWhenViewAppears;
	bool _showsAirTunesOption;
	int _photoThumbnailFormat;
	PLAssetContainerDataSource* _assetContainerDataSource;
	PLPhotoTileViewController* _mostRecentlyActiveTile;

}

@property (assign,nonatomic) <PLPhotoBrowserControllerDelegate> * delegate; 
@property (nonatomic,readonly) int albumFilter; 
@property (nonatomic,readonly) PLLibraryImageDataProvider * imageDataProvider; 
@property (assign,nonatomic) bool isCameraApp;                                                                                                              //@synthesize isCameraApp=_isCameraApp - In the implementation block
@property (assign,nonatomic) unsigned long long currentTileIndex; 
@property (nonatomic,retain) NSIndexPath * currentIndexPath; 
@property (assign,nonatomic) PLManagedAsset * currentAsset; 
@property (nonatomic,readonly) <PLAssetContainer> * currentAssetContainer; 
@property (nonatomic,readonly) <PLAssetContainerList> * assetContainerList; 
@property (nonatomic,readonly) unsigned long long allAssetsCount; 
@property (nonatomic,readonly) PLVideoView * currentVideoView; 
@property (nonatomic,readonly) PLPhotoTileViewController * currentTile; 
@property (nonatomic,readonly) bool isPlayingSlideshow; 
@property (nonatomic,readonly) UIView * remakerContainerView; 
@property (nonatomic,readonly) UIScrollView * mainScroller; 
@property (nonatomic,retain) PLPhotoScrubber * photoScrubber; 
@property (nonatomic,readonly) UIView * commentsView; 
@property (nonatomic,readonly) UIPageController * pageController; 
@property (nonatomic,readonly) UIView * pageControllerView; 
@property (assign,nonatomic) bool deletesDuplicatesWhenNecessary;                                                                                           //@synthesize deletesDuplicatesWhenNecessary=_deletesDuplicatesWhenNecessary - In the implementation block
@property (assign,nonatomic) bool shouldShowOverlaysWhenViewAppears; 
@property (assign,nonatomic) bool shouldShowOverlaysWhenViewDisappears; 
@property (assign,nonatomic) bool shouldPlayVideoWhenViewAppears;                                                                                           //@synthesize shouldPlayVideoWhenViewAppears=_shouldPlayVideoWhenViewAppears - In the implementation block
@property (assign,nonatomic) bool canDelayImageLoading; 
@property (assign,nonatomic) bool delayImageLoading; 
@property (nonatomic,readonly) bool showsAirTunesOption;                                                                                                    //@synthesize showsAirTunesOption=_showsAirTunesOption - In the implementation block
@property (assign,nonatomic) bool canShowCopyCallout; 
@property (nonatomic,readonly) bool canEditVideo; 
@property (nonatomic,readonly) bool canEditPhoto; 
@property (nonatomic,retain) UIScrollView * pageControllerScrollView; 
@property (nonatomic,copy) NSDictionary * slideshowSettingsForCurrentAssetContainer; 
@property (nonatomic,readonly) PLAssetContainerDataSource * assetContainerDataSource;                                                                       //@synthesize assetContainerDataSource=_assetContainerDataSource - In the implementation block
@property (nonatomic,readonly) <PLRootLibraryNavigationController> * rootNavigationController; 
@property (nonatomic,retain) PLPhotoTileViewController * mostRecentlyActiveTile;                                                                            //@synthesize mostRecentlyActiveTile=_mostRecentlyActiveTile - In the implementation block
@property (nonatomic,readonly) PLManagedAsset * currentAssetForZoomTransition; 
@property (nonatomic,readonly) <PLAssetContainer> * currentAssetContainerForZoomTransition; 
@property (nonatomic,readonly) PLPhotoTileViewController * currentTileForZoomTransition; 
@property (assign,nonatomic) int photoThumbnailFormat;                                                                                                      //@synthesize photoThumbnailFormat=_photoThumbnailFormat - In the implementation block
@property (setter=_setPriorIndexPath:,nonatomic,retain) NSIndexPath * _priorIndexPath;                                                                      //@synthesize priorIndexPath=_priorIndexPath - In the implementation block
@property (setter=_setDeletedIndexPath:,nonatomic,retain) NSIndexPath * _deletedIndexPath;                                                                  //@synthesize deletedIndexPath=_deletedIndexPath - In the implementation block
@property (setter=_setSlideshowEndIndexPath:,nonatomic,retain) NSIndexPath * _slideshowEndIndexPath;                                                        //@synthesize slideshowEndIndexPath=_slideshowEndIndexPath - In the implementation block
@property (setter=_setScrubbedImageIndexPath:,nonatomic,retain) NSIndexPath * _scrubbedImageIndexPath;                                                      //@synthesize scrubbedImageIndexPath=_scrubbedImageIndexPath - In the implementation block
@property (setter=_setLastDisplayedRemoteSlideshowPhotoIndexPath:,nonatomic,retain) NSIndexPath * _lastDisplayedRemoteSlideshowPhotoIndexPath;              //@synthesize lastDisplayedRemoteSlideshowPhotoIndexPath=_lastDisplayedRemoteSlideshowPhotoIndexPath - In the implementation block
+(void)setPageControllerScrollViewClass:(Class)arg1 ;
-(void)viewDidAppear;
-(void)_fadeOut;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)delegate;
-(id)navigationBar;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)applicationWillEnterForeground:(id)arg1 ;
-(bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)willPresentActionSheet:(id)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)animationDidStop:(id)arg1 finished:(bool)arg2 ;
-(void)viewWillLayoutSubviews;
-(bool)isEditing;
-(double)durationForTransition:(int)arg1 ;
-(void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3 ;
-(id)contentScrollView;
-(void)viewDidDisappear:(bool)arg1 ;
-(id)rotatingFooterView;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_PL3*)arg1 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)copy:(id)arg1 ;
-(void)_longPressRecognized:(id)arg1 ;
-(void)setRotationDisabled:(bool)arg1 ;
-(id)pageController:(id)arg1 viewControllerAtIndex:(long long)arg2 ;
-(id)pageController;
-(Class)_pageControllerScrollViewClass;
-(void)pageControllerWillBeginPaging:(id)arg1 ;
-(void)pageControllerDidEndPaging:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)setPageControllerScrollView:(id)arg1 ;
-(void)applicationResumed:(id)arg1 ;
-(void)_simpleRemoteActionDidOccur:(id)arg1 ;
-(void)_externalScreenConnected:(id)arg1 ;
-(void)_externalScreenDisconnected:(id)arg1 ;
-(void)setShouldShowOverlaysWhenViewDisappears:(bool)arg1 ;
-(void)_removeTVOutWindow;
-(void)_clearFullScreenView;
-(void)_forceDismissActionSheet:(bool)arg1 enableToolbarTimer:(bool)arg2 ;
-(void)_forceDismissAlertView:(bool)arg1 enableToolbarTimer:(bool)arg2 ;
-(void)_forceDismissDeleteController:(bool)arg1 enableToolbarTimer:(bool)arg2 ;
-(void)_flushTileCache;
-(void)_cleanUpCurrentAirplaySession;
-(bool)wantsPhotoBrowserStyleStatusBar;
-(void)_setCurrentIndexPath:(id)arg1 ;
-(bool)delayImageLoading;
-(id)_lowResolutionPreviewImageForPhoto:(id)arg1 ;
-(void)_configureVideoViewInTile:(id)arg1 ;
-(void)_willDisplayTileController:(id)arg1 ;
-(void)photoTileViewControllerCancelImageRequests:(id)arg1 ;
-(bool)canEditVideo;
-(bool)_slideshowNotRunning;
-(id)mostRecentlyActiveTile;
-(void)_updateTileImageAfterZoomTransition;
-(id)_fullScreenPreviewImageForPhoto:(id)arg1 ;
-(id)_tileForAsset:(id)arg1 shouldCreate:(bool)arg2 tileCache:(id)arg3 ;
-(void)_slideshowPlayTimerFired:(id)arg1 ;
-(void)_disableIdleTimer;
-(void)_forceRemoveSavingPhotoHUD;
-(id)_playbackVideoView;
-(bool)_shouldPauseOrStopVideo;
-(void)_displayLastImageForSlideshowPlugin:(id)arg1 ;
-(void)_endSlideshow;
-(void)_commonDidFinishEmailAnimation:(bool)arg1 ;
-(void)_stopAirTunesSlideShow:(bool)arg1 ;
-(void)_disableStreamingSlideshow;
-(void)_stopStreamingPhotosToAirTunes;
-(void)_prepareForTVOut;
-(void)_cancelRemaking;
-(void)_enableStreamingSlideshow;
-(id)_updateIndexPath:(id)arg1 insertedSections:(id)arg2 deletedSections:(id)arg3 ;
-(id)_slideshowEndIndexPath;
-(void)_setSlideshowEndIndexPath:(id)arg1 ;
-(id)_lastDisplayedRemoteSlideshowPhotoIndexPath;
-(void)_setLastDisplayedRemoteSlideshowPhotoIndexPath:(id)arg1 ;
-(id)_deletedIndexPath;
-(void)_setDeletedIndexPath:(id)arg1 ;
-(void)_cancelEditControllerIfEditedPhotoDeleted;
-(void)_invalidateAirplayCache;
-(void)_updateCachedIndexesForAssetContainerDidChange:(id)arg1 ;
-(void)_removeSavingPhotoHUDForPhoto:(id)arg1 ;
-(void)updateBarsAnimated:(bool)arg1 ;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1 ;
-(void)_processAssetContainerListDidChangeNotification:(id)arg1 ;
-(void)_processAssetContainerDidChange:(id)arg1 withCurrentContainer:(id)arg2 ;
-(void)_validateTileCache:(id)arg1 ;
-(void)_processAssetsDidChange:(id)arg1 ;
-(void)_updateAfterAnimation;
-(void)togglePlayPause:(id)arg1 ;
-(void)displayNextPhoto:(id)arg1 ;
-(void)displayPreviousPhoto:(id)arg1 ;
-(bool)_mainScrollerIsVisible;
-(void)_setMusicIsPlaying:(bool)arg1 ;
-(void)animateToIndex;
-(void)_didLoadImage:(id)arg1 forObjectID:(id)arg2 ;
-(bool)barsAreVisible;
-(void)_redisplayActionSheet:(id)arg1 ;
-(void)_redisplayDeleteController:(id)arg1 ;
-(id)remakerContainerView;
-(void)_flushTileCache:(id)arg1 preservingTilesInPageController:(id)arg2 ;
-(void)_setPriorIndexPath:(id)arg1 ;
-(void)_hideCallout;
-(void)_pauseVideoPlaybackForIndexPath:(id)arg1 ;
-(void)_updateCurrentIndexForPageController:(id)arg1 ;
-(void)_showHDRPromptIfNeeded;
-(void)_showCommentTableIfNecessary:(double)arg1 ;
-(void)_hideCommentsTableIfNecessary:(double)arg1 ;
-(void)setMainScrollerEnabled:(bool)arg1 ;
-(void)_updateStatusBarVisibilityWithDuration:(double)arg1 ;
-(id)newNavigationBar;
-(void)_updateForCommentsControllerEditMode:(id)arg1 ;
-(void)_photoScrubberDidBeginScrubbing:(id)arg1 ;
-(void)_photoScrubberValueDidChange:(id)arg1 ;
-(void)_photoScrubberDidEndScrubbing:(id)arg1 ;
-(void)_setupPhotoScrubber:(bool)arg1 ;
-(void)_discardPhotoScrubber;
-(bool)showingCommentsTable;
-(void)_scrubberDidBeginScrubbing:(id)arg1 ;
-(void)_setScrubbedImageIndexPath:(id)arg1 ;
-(void)showCommentsTable;
-(void)_streamPhoto:(id)arg1 withTransition:(id)arg2 ;
-(void)_scrubberDidEndScrubbing:(id)arg1 ;
-(void)_updateFilteredImagesAndShuffle:(bool)arg1 ;
-(bool)canDelayImageLoading;
-(void)setDelayImageLoading:(bool)arg1 ;
-(void)_makeTilesPerformSelector:(SEL)arg1 withObject:(id)arg2 ;
-(void)setStatusBarIsLocked:(bool)arg1 ;
-(void)_stopVideoPlaybackForIndexPath:(id)arg1 ;
-(void)setVideoEditingMode:(bool)arg1 animated:(bool)arg2 ;
-(void)_stopSlideshowTimer;
-(bool)_stopSlideshow;
-(bool)_startingSlideshow;
-(bool)_playSlideshow;
-(bool)_pauseSlideshow;
-(bool)isActiveViewControllerInNavigationController;
-(void)_slideshowWillBegin;
-(void)_slideshowPlayCurrentSlide;
-(id)_preloadNextTileInCache:(id)arg1 insideCurrentAssetContainer:(bool)arg2 ;
-(unsigned long long)currentTileIndex;
-(void)_slideshowWillEnd;
-(void)showNextImageWithTransition:(int)arg1 insideCurrentAssetContainer:(bool)arg2 ;
-(void)setCurrentTileIndex:(unsigned long long)arg1 ;
-(bool)_currentItemIsVideo;
-(void)_startSlideshowTimer;
-(void)_setMusicIsPlaying:(bool)arg1 forPhoto:(id)arg2 ;
-(void)_loadSlideshowPlugin;
-(void)_fadeIn;
-(void)_prepareToFade;
-(void)_fadeToViewContents;
-(void)_slideshowViewWasTapped:(id)arg1 ;
-(void)setUsesPhotoBrowserStyleStatusBar:(bool)arg1 animated:(bool)arg2 ;
-(void)_removeAirTunesSlideShowViewAndReset;
-(void)_airTunesSlideShowViewWasTapped;
-(void)_startAirTunesSlideShow;
-(void)setAppInteractionDisabled:(bool)arg1 ;
-(void)_pauseVideoPlaybackForIndexPath:(id)arg1 fullStop:(bool)arg2 ;
-(void)updateAfterCollapse;
-(id)_priorIndexPath;
-(id)_suppresionContexts;
-(id)_albumAssetsForSlideShow:(id)arg1 startingAtIndex:(unsigned long long)arg2 ;
-(id)_currentTVOutTile;
-(id)_currentTVOutVideoView;
-(void)setCurrentTileIndex:(unsigned long long)arg1 updateAfterAnimation:(bool)arg2 ;
-(void)setCurrentIndexPath:(id)arg1 updateAfterAnimation:(bool)arg2 ;
-(void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 transitionView:(id)arg5 insideCurrentAssetContainer:(bool)arg6 ;
-(void)_dereferenceTile:(id)arg1 ;
-(void)_performCATransition:(id)arg1 ;
-(void)_transitionToImage:(id)arg1 fromOldIndex:(long long)arg2 toNewIndex:(long long)arg3 transition:(int)arg4 insideCurrentAssetContainer:(bool)arg5 ;
-(void)_prepareForDelete;
-(void)_finishRemoveAsset:(id)arg1 atIndexPath:(id)arg2 ;
-(void)showPreviousImageWithTransition:(int)arg1 insideCurrentAssetContainer:(bool)arg2 ;
-(void)_didDeleteCurrentAsset;
-(void)mainScrollerDidEndSmoothScroll;
-(void)_showSavingPhotoHUDForPhoto:(id)arg1 ;
-(void)setVideoEditingMode:(bool)arg1 ;
-(id)_currentAirplayRoute;
-(id)_scrubbedImageIndexPath;
-(void)didLoadFullScreenImage:(id)arg1 forPhotoAtIndex:(unsigned long long)arg2 ;
-(void)_loadImageForTile:(id)arg1 format:(int)arg2 ;
-(void)setMostRecentlyActiveTile:(id)arg1 ;
-(bool)_isScrolling;
-(id)newToolbar;
-(void)_configureEditNavigationController:(id)arg1 ;
-(long long)_presentEditPhotoController;
-(void)_dismissEditControllerWithOldStatusBarStyle:(long long)arg1 ;
-(void)didEndEditingPhoto;
-(id)rootNavigationController;
-(void)_composeSheetDidDisplay;
-(id)_mailComposeViewControllerWithPhoto:(id)arg1 attachmentIdentifier:(id*)arg2 ;
-(void)_setComposeSheetViewController:(id)arg1 ;
-(void)_performSendViaEmail;
-(double)_durationForCurrentVideo;
-(void)_transcodeVideoUsingMode:(int)arg1 ;
-(void)_reallySendViaEmail:(id)arg1 ;
-(void)_animateSendToEmail;
-(void)_displayComposeSheet;
-(CGRect)_animationDestinationRectForImageSize:(CGSize)arg1 ;
-(void)_finishedSlidingImageUp:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_finishedSlidingImageDown:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_showMMSComposeSheet;
-(void)_dismissModalViewControllerAnimated:(bool)arg1 ;
-(bool)_canTrimCurrentVideoInPlace;
-(void)_showConfirmationForPassthroughTrimming:(id)arg1 ;
-(void)_delayedExitEditingMode;
-(void)_setIgnoreInteractionEventsForVideoViewRemaking:(bool)arg1 ;
-(void)_commonDidBeginRemaking;
-(void)updateProgressView;
-(void)_commonRemakingProgressDidChange:(float)arg1 ;
-(void)_commonDidEndRemaking:(id)arg1 pathToTrimmedFile:(id)arg2 didSucceed:(bool)arg3 ;
-(id)photoCountFormatter;
-(void)removeRemakerContainerView;
-(void)_removeProgressView;
-(bool)statusBarIsLocked;
-(void)_enterVideoEditingMode;
-(void)removeCurrentPhoto:(id)arg1 ;
-(id)_buttonItemViewWithTag:(int)arg1 ;
-(void)_updateTVOutAfterAnimation;
-(void)_configureTVOutPageController;
-(id)_mediaControlClient;
-(id)_airplayRemoteSlideshow;
-(void)_airplayRouteWasPicked:(id)arg1 ;
-(id)_newSessionForRoute:(id)arg1 ;
-(void)_airTunesServiceDidDisconnect:(id)arg1 ;
-(void)setAirTunesMode:(int)arg1 ;
-(void)_airTunesSlideShowTimerFired;
-(id)_nextAirTunesSlideshowPhoto;
-(id)airPlaySession:(id)arg1 previousPhotoForPhoto:(id)arg2 ;
-(id)airPlaySession:(id)arg1 nextPhotoForPhoto:(id)arg2 ;
-(void)airPlaySession:(id)arg1 didFailToStreamPhotoWithError:(id)arg2 ;
-(void)photoScrubber:(id)arg1 scrubbingSpeedDidChange:(long long)arg2 ;
-(void)photoTileViewController:(id)arg1 willAppear:(bool)arg2 ;
-(void)photoTileViewController:(id)arg1 didAppear:(bool)arg2 ;
-(void)photoTileViewController:(id)arg1 didDisappear:(bool)arg2 ;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg1 ;
-(void)photoTileViewControllerSingleTap:(id)arg1 ;
-(void)photoTileViewControllerDoubleTap:(id)arg1 ;
-(void)photoTileViewControllerWillBeginGesture:(id)arg1 ;
-(void)photoTileViewControllerDidEndGesture:(id)arg1 ;
-(bool)photoTileViewControllerAllowsEditing:(id)arg1 ;
-(bool)isPhotoTileParentPageControllerAnimating:(id)arg1 ;
-(void)photoTileViewControllerDidSetHDRTypeForPhoto:(id)arg1 ;
-(void)photoTileViewController:(id)arg1 willEnterEditModeInCommentsController:(id)arg2 ;
-(void)photoTileViewController:(id)arg1 didExitEditModeInCommentsController:(id)arg2 ;
-(void)photoTileViewController:(id)arg1 commentsControllerWillBeginScrolling:(id)arg2 ;
-(void)videoViewDidCreateAttachments:(id)arg1 ;
-(bool)videoViewCanBeginPlayback:(id)arg1 ;
-(void)videoViewDidBeginPlayback:(id)arg1 ;
-(void)videoViewDidPausePlayback:(id)arg1 ;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(bool)arg2 ;
-(void)videoViewDidEndScrubbing:(id)arg1 ;
-(void)videoViewDidBeginRemaking:(id)arg1 ;
-(void)videoViewDidEndRemaking:(id)arg1 didSucceed:(bool)arg2 ;
-(void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2 ;
-(void)videoViewWillBeginEditing:(id)arg1 ;
-(void)videoViewDidBeginEditing:(id)arg1 ;
-(void)videoViewDidCancelEditing:(id)arg1 ;
-(void)videoView:(id)arg1 displayPlayOverlay:(id)arg2 ;
-(bool)videoViewShouldRespondToPlayOverlayTap:(id)arg1 ;
-(bool)videoViewCanCreateMetadata:(id)arg1 ;
-(id)videoViewRequestsPickedAirplayRoute:(id)arg1 ;
-(long long)numPhotosInAlbumForPhotoScrubber:(id)arg1 ;
-(id)photoScrubber:(id)arg1 loadImageSynchronously:(bool)arg2 atIndex:(long long)arg3 forLoupe:(bool)arg4 ;
-(void)slideshowPluginReadyToBegin:(id)arg1 ;
-(void)slideshowPluginDidDisplayFinalImage:(id)arg1 ;
-(bool)airplayRemoteSlideshow:(id)arg1 requestAssetWithInfo:(id)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)airplayRemoteSlideshow:(id)arg1 handleEvent:(id)arg2 ;
-(id)initWithImageDataProvider:(id)arg1 ;
-(bool)isRotationEnabled;
-(void)storeCurrentConfiguration:(id)arg1 ;
-(void)loadCurrentConfiguration:(id)arg1 ;
-(int)albumFilter;
-(id)mainScroller;
-(void)setPhotoScrubber:(id)arg1 ;
-(void)viewWillAppear;
-(void)viewWillDisappear;
-(void)_showTileCache;
-(void)setNavigationBarDisabled:(bool)arg1 ;
-(void)setBottomBarDisabled:(bool)arg1 ;
-(void)imageViewWillSwitchToFullSizeImage:(id)arg1 ;
-(void)imageViewDidSwitchToFullSizeImage:(id)arg1 ;
-(bool)photoTileViewControllerIsDisplayingLandscape:(id)arg1 ;
-(void)setCanDelayImageLoading:(bool)arg1 ;
-(void)_performPostAlbumStreamTasksWithNewlyCreatedAlbum:(NSObject*)arg1 ;
-(void)prepareToSendViaEmail;
-(void)sendViaEmailClicked;
-(void)slideImageOverMessage;
-(void)sendViaMMSClicked;
-(void)smsComposeControllerDataInserted:(id)arg1 ;
-(void)smsComposeControllerCancelled:(id)arg1 ;
-(void)smsComposeControllerSendStarted:(id)arg1 ;
-(void)_repositionPopoversIfNecessary;
-(void)setCanShowCopyCallout:(bool)arg1 ;
-(bool)canShowCopyCallout;
-(id)airPlayRemoteSlideshowAssetKeys:(id)arg1 ;
-(bool)_canUploadHDVideo;
-(bool)shouldShowActionMenu;
-(bool)shouldShowPlayButton;
-(bool)currentItemIsPlaying;
-(bool)canEditPhoto;
-(bool)_didSetDataForCurrentItem;
-(bool)shouldShowOverlaysWhenViewDisappears;
-(bool)showsAirTunesOption;
-(void)assetContainerDidChange:(id)arg1 ;
-(void)assetContainerListDidChange:(id)arg1 ;
-(void)assetsDidChange:(id)arg1 ;
-(id)assetContainerList;
-(void)_didFinishPostingNotifications:(id)arg1 ;
-(bool)deletesDuplicatesWhenNecessary;
-(bool)prepareForDismissingForced:(bool)arg1 ;
-(void)setDeletesDuplicatesWhenNecessary:(bool)arg1 ;
-(void)_showVideoTooLongAlert;
-(bool)isCameraApp;
-(id)currentIndexPath;
-(void)videoRemakerDidBeginRemaking:(id)arg1 ;
-(void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2 ;
-(bool)_appAllowsSupressionOfAlerts;
-(void)videoRemaker:(id)arg1 progressDidChange:(float)arg2 ;
-(int)photoThumbnailFormat;
-(void)setPhotoThumbnailFormat:(int)arg1 ;
-(id)pageControllerView;
-(bool)canShowPreviousImage;
-(bool)canShowNextImage;
-(id)pageControllerScrollView;
-(id)assetContainerDataSource;
-(id)photoScrubber;
-(void)revealComment:(id)arg1 ;
-(void)hideCommentsTable;
-(bool)setNextSlideshowState:(int)arg1 ;
-(void)playSlideshowFromAlbumUsingOrigami:(bool)arg1 ;
-(id)currentAsset;
-(id)currentAssetForZoomTransition;
-(id)currentTile;
-(id)currentTileForZoomTransition;
-(id)currentAssetContainer;
-(id)currentAssetContainerForZoomTransition;
-(bool)shouldPlayVideoWhenViewAppears;
-(void)setShouldPlayVideoWhenViewAppears:(bool)arg1 ;
-(void)setAssetContainerList:(id)arg1 currentImageIndexPath:(id)arg2 ;
-(void)transitionWillBegin;
-(void)transitionDidEndWithOperation:(long long)arg1 ;
-(id)imageDataProvider;
-(id)commentsView;
-(void)beginEditingPhoto;
-(void)endEditingPhoto;
-(id)photoScrollerTitle;
-(void)currentAirplayRouteChanged;
-(void)setSlideshowSettingsForCurrentAssetContainer:(id)arg1 ;
-(void)beginLocalOrigamiSlideshowWithSettings:(id)arg1 ;
-(void)beginLocalSlideshowWithSettings:(id)arg1 ;
-(void)beginRemoteSlideshowToRouteID:(id)arg1 settings:(id)arg2 ;
-(void)saveSelectionOfMusic:(id)arg1 transition:(id)arg2 ;
-(id)slideshowSettingsForCurrentAssetContainer;
-(bool)prepareToDisplayActivitySheet;
-(bool)dismissPopovers;
-(void)deleteImageClicked:(id)arg1 ;
-(void)playCurrentMedia:(id)arg1 ;
-(void)pauseCurrentMedia:(id)arg1 ;
-(void)trimVideo:(id)arg1 ;
-(void)cancelVideoEditingMode:(id)arg1 ;
-(int)videoRemakerMode;
-(id)currentVideoView;
-(int)allowedDeleteOperationForAsset:(id)arg1 ;
-(bool)isPlayingSlideshow;
-(bool)isEditingVideo;
-(void)setCurrentIndexPath:(id)arg1 ;
-(unsigned long long)allAssetsCount;
-(bool)shouldShowOverlaysWhenViewAppears;
-(void)setShouldShowOverlaysWhenViewAppears:(bool)arg1 ;
-(void)setIsCameraApp:(bool)arg1 ;
-(id)_actionViewRootView;
-(void)setCurrentAsset:(id)arg1 ;
-(void)updateOverlaysAnimated:(bool)arg1 ;
@end
