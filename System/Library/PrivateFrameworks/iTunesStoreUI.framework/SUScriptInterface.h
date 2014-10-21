/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUScriptObject.h>

@protocol SUScriptInterfaceDelegate;
@class SUScriptAccountManager, SUScriptKeyValueStore, SSAuthenticationContext, SUClientInterface, NSMutableDictionary, WebFrame, SUScriptMediaLibrary, SUScriptNotificationObserver, SUScriptPreviewOverlay, SUScriptPurchaseManager, SUScriptOperationDelegate, SUScriptWindowContext, SUScriptFairPlayContext, SUScriptAppleAccountStore, NSString, SUScriptDevice, SUScriptApplication, SUScriptPassbookLibrary, SUScriptWindow, SUScriptProtocol, SUScriptSectionsController, SUScriptViewController, NSArray, SUScriptAccount, SUScriptNavigationBar, NSNumber;

@interface SUScriptInterface : SUScriptObject {

	SUScriptAccountManager* _accountManager;
	SUScriptKeyValueStore* _applicationLocalStorage;
	SSAuthenticationContext* _authenticationContext;
	SUClientInterface* _clientInterface;
	<SUScriptInterfaceDelegate>* _delegate;
	SUScriptKeyValueStore* _deviceLocalStorage;
	NSMutableDictionary* _downloadQueues;
	WebFrame* _frame;
	SUScriptMediaLibrary* _mediaLibrary;
	SUScriptNotificationObserver* _notificationObserver;
	SUScriptPreviewOverlay* _previewOverlay;
	SUScriptPurchaseManager* _purchaseManager;
	SUScriptOperationDelegate* _scriptOperationDelegate;
	SUScriptWindowContext* _scriptWindowContext;
	id _threadSafeDelegate;

}

@property (readonly) SUScriptFairPlayContext * accountCreationSecureContext; 
@property (readonly) SUScriptAppleAccountStore * appleAccountStore; 
@property (readonly) SUScriptPurchaseManager * purchaseManager; 
@property (readonly) NSString * actionTypeReturnToLibrary; 
@property (readonly) NSString * actionTypeDismissWindows; 
@property (readonly) NSString * actionTypeDismissSheet; 
@property (readonly) SUScriptDevice * device; 
@property (readonly) SUScriptApplication * application; 
@property (readonly) SUScriptPassbookLibrary * passbookLibrary; 
@property (readonly) SUScriptMediaLibrary * mediaLibrary; 
@property (readonly) SUScriptWindow * window; 
@property (readonly) SUScriptProtocol * protocol; 
@property (readonly) SUScriptSectionsController * sectionsController; 
@property (readonly) SUScriptViewController * viewController; 
@property (readonly) NSArray * accounts; 
@property (retain) SUScriptAccount * primaryAccount; 
@property (retain) SUScriptAccount * primaryLockerAccount; 
@property (readonly) NSArray * installedSoftwareApplications; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (retain) SUScriptWindowContext * scriptWindowContext; 
@property (assign) <SUScriptInterfaceDelegate> * delegate; 
@property (readonly) <SUScriptInterfaceDelegate> * threadSafeDelegate; 
@property (retain) SUClientInterface * clientInterface; 
@property (retain) WebFrame * webFrame; 
@property (readonly) id applicationAccessibilityEnabled; 
@property (readonly) SUScriptKeyValueStore * applicationLocalStorage; 
@property (readonly) NSString * clientIdentifier; 
@property (copy) NSString * cookie; 
@property (readonly) SUScriptKeyValueStore * deviceLocalStorage; 
@property (readonly) id globalRootObject; 
@property (readonly) id loggingEnabled; 
@property (readonly) SUScriptNavigationBar * navigationBar; 
@property (readonly) NSNumber * orientation; 
@property (readonly) NSString * referringUserAgent; 
@property (readonly) SUScriptPreviewOverlay * previewOverlay; 
@property (readonly) id screenReaderRunning; 
+(void)initialize;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(long long)purchaseAnimationStyleFromString:(id)arg1 ;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(id)makeStoreSheetViewController;
-(id)makeDonationViewControllerWithCharityIdentifier:(id)arg1 ;
-(id)makeRedeemViewController;
-(id)makeGiftViewController;
-(id)accountCreationSecureContext;
-(id)makeCalloutView;
-(id)makeFacebookSessionWithAccount:(id)arg1 ;
-(id)makeLookupRequest;
-(id)makeActivityItemProviderWithMIMEType:(id)arg1 ;
-(id)appleAccountStore;
-(id)makeActivity;
-(id)makeFacebookRequestWithURL:(id)arg1 requestMethod:(id)arg2 ;
-(id)makeActivityViewControllerWithProviders:(id)arg1 activities:(id)arg2 ;
-(id)getAudioPlayerForURL:(id)arg1 keyURL:(id)arg2 certificateURL:(id)arg3 ;
-(id)activeAudioPlayers;
-(id)makeMediaPlayerViewControllerWithMediaPlayerItem:(id)arg1 ;
-(void)showMediaPlayerWithURLString:(id)arg1 orientation:(id)arg2 title:(id)arg3 subtitle:(id)arg4 bookmarkID:(id)arg5 duration:(id)arg6 type:(id)arg7 imageURL:(id)arg8 ;
-(void)showMediaPreviewWithURLString:(id)arg1 ;
-(id)makeMediaPlayerItemWithProperties:(id)arg1 ;
-(id)makeTweetComposeViewController;
-(id)purchaseManager;
-(id)makeDateFormatter;
-(id)makeScriptActionWithType:(id)arg1 ;
-(id)actionTypeReturnToLibrary;
-(id)actionTypeDismissWindows;
-(id)actionTypeDismissSheet;
-(id)makeDocumentInteractionController;
-(id)makeAccountPageWithURLs:(id)arg1 ;
-(void)setDevice:(id)arg1 ;
-(id)device;
-(id)makeReportAProblemViewControllerWithAdamID:(id)arg1 ;
-(id)makeURLRequestWithURLs:(id)arg1 timeoutInterval:(id)arg2 ;
-(id)makeSegmentedControl;
-(id)makeVolumeViewController;
-(id)application;
-(id)passbookLibrary;
-(void)composeReviewWithURL:(id)arg1 itemIdentifier:(id)arg2 type:(id)arg3 ;
-(id)makeComposeReviewViewControllerWithReview:(id)arg1 ;
-(id)makeReviewWithAdamID:(id)arg1 ;
-(void)addExternalDownloads:(id)arg1 options:(id)arg2 ;
-(void)addExternalDownloadsFromManifestURL:(id)arg1 ;
-(void)addPurchaseWithInfo:(id)arg1 options:(id)arg2 ;
-(void)addExternalDownloads:(id)arg1 ;
-(void)addPurchaseWithInfo:(id)arg1 ;
-(id)mediaLibrary;
-(void)setMediaLibrary:(id)arg1 ;
-(void)deallocMediaLibrary;
-(id)makeLinearGradientWithX0:(double)arg1 y0:(double)arg2 x1:(double)arg3 y1:(double)arg4 ;
-(id)makeRadialGradientWithX0:(double)arg1 y0:(double)arg2 r0:(double)arg3 x1:(double)arg4 y1:(double)arg5 r1:(double)arg6 ;
-(id)makeColorWithHue:(id)arg1 saturation:(id)arg2 brightness:(id)arg3 alpha:(id)arg4 ;
-(id)makeColorWithRed:(id)arg1 green:(id)arg2 blue:(id)arg3 alpha:(id)arg4 ;
-(id)makeColorWithWhite:(id)arg1 alpha:(id)arg2 ;
-(id)makeCanvasWithWidth:(id)arg1 height:(id)arg2 ;
-(id)makeMenuViewController;
-(id)makeSplitViewController;
-(id)makeNumberFormatterWithStyle:(id)arg1 ;
-(id)window;
-(void)setWindow:(id)arg1 ;
-(id)makeWindow;
-(id)protocol;
-(void)handleProtocolPropertyListString:(id)arg1 ;
-(void)pingURL:(id)arg1 ;
-(void)retryAllRestoreDownloads;
-(void)openURL:(id)arg1 ;
-(id)viewController;
-(void)goBack;
-(void)composeEmailWithSubject:(id)arg1 body:(id)arg2 ;
-(void)dismissSheet;
-(void)dismissWindowsWithOptions:(id)arg1 ;
-(void)gotoStoreURL:(id)arg1 ;
-(void)gotoStoreURL:(id)arg1 ofType:(id)arg2 withAuthentication:(bool)arg3 forceAuthentication:(bool)arg4 ;
-(id)makeNavigationControllerWithRootViewController:(id)arg1 ;
-(id)makeStorePageWithURLs:(id)arg1 ;
-(void)redeemCode:(id)arg1 ;
-(void)reloadFooterSection:(id)arg1 withURL:(id)arg2 ;
-(void)selectSectionWithIdentifier:(id)arg1 ;
-(id)sectionsController;
-(id)getDownloadQueueWithQueueType:(id)arg1 ;
-(id)accounts;
-(void)initAuthentication;
-(void)deallocAuthentication;
-(id)accountForDSID:(id)arg1 ;
-(void)authenticateForAccount:(id)arg1 withOptions:(id)arg2 ;
-(id)makeAccount;
-(id)primaryAccount;
-(id)primaryLockerAccount;
-(void)setAccounts:(id)arg1 ;
-(void)setPrimaryAccount:(id)arg1 ;
-(void)setPrimaryLockerAccount:(id)arg1 ;
-(long long)dialogDisplayCountForKey:(id)arg1 ;
-(id)makeDialog;
-(id)makeButtonWithSystemItemString:(id)arg1 action:(id)arg2 ;
-(id)makeButtonWithTitle:(id)arg1 action:(id)arg2 ;
-(id)systemItemAction;
-(id)systemItemAdd;
-(id)systemItemBookmarks;
-(id)systemItemCamera;
-(id)systemItemCancel;
-(id)systemItemCompose;
-(id)systemItemDone;
-(id)systemItemEdit;
-(id)systemItemFastForward;
-(id)systemItemFixedSpace;
-(id)systemItemFlexibleSpace;
-(id)systemItemOrganize;
-(id)systemItemPageCurl;
-(id)systemItemPause;
-(id)systemItemPlay;
-(id)systemItemRedo;
-(id)systemItemRefresh;
-(id)systemItemReplay;
-(id)systemItemRewind;
-(id)systemItemSearch;
-(id)systemItemStop;
-(id)systemItemTrash;
-(id)systemItemUndo;
-(id)makeTextFieldWithStyle:(id)arg1 placeholder:(id)arg2 value:(id)arg3 width:(id)arg4 ;
-(id)makePopOverWithViewController:(id)arg1 ;
-(void)getInstalledSoftwareApplicationsWithCompletionFunction:(id)arg1 ;
-(void)getSoftwareApplicationWithAdamID:(id)arg1 completionFunction:(id)arg2 ;
-(void)getSoftwareApplicationWithBundleID:(id)arg1 completionFunction:(id)arg2 ;
-(id)softwareApplicationWithAdamID:(id)arg1 ;
-(id)softwareApplicationWithBundleID:(id)arg1 ;
-(void)_getSoftwareApplicationWithCompletionFunction:(id)arg1 lookupBlock:(/*^block*/ id)arg2 ;
-(id)installedSoftwareApplications;
-(void)startedTest:(id)arg1 ;
-(void)finishedTest:(id)arg1 extraResults:(id)arg2 ;
-(bool)launchedToTest;
-(bool)isRunningTest;
-(void)log:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)navigationBar;
-(id)orientation;
-(id)parentViewController;
-(id)systemVersion;
-(void)setNavigationBar:(id)arg1 ;
-(void)setOrientation:(id)arg1 ;
-(id)webFrame;
-(id)accountName;
-(id)clientInterface;
-(bool)canSendEmail;
-(id)cookie;
-(void)setCookie:(id)arg1 ;
-(id)attributeKeys;
-(void)setClientInterface:(id)arg1 ;
-(void)_globalEventNotification:(id)arg1 ;
-(void)_scriptUserInfoDidChangeNotification:(id)arg1 ;
-(id)DOMElementWithElement:(id)arg1 ;
-(void)_accessibilityPostLayoutChange;
-(id)clientIdentifier;
-(id)accountDSID;
-(bool)checkCapabilitiesPropertyListString:(id)arg1 showFailureDialog:(bool)arg2 ;
-(id)activeNetworkType;
-(id)diskSpaceAvailable;
-(id)hardwareType;
-(id)_copyDialogWithMessage:(id)arg1 title:(id)arg2 cancelButtonTitle:(id)arg3 okButtonTitle:(id)arg4 ;
-(id)scriptAttributeKeys;
-(void)accessibilityPostLayoutChange;
-(void)accessibilityPostScreenChange;
-(bool)arePodcastsDisabled;
-(void)dispatchGlobalEventWithName:(id)arg1 payload:(id)arg2 ;
-(void)handleDialogPropertyListString:(id)arg1 ;
-(void)handleRootObjectWithPropertyListString:(id)arg1 ;
-(void)handleTrackListWithPropertyListString:(id)arg1 ;
-(bool)haveAccount;
-(bool)isExplicitContentDisabled;
-(id)machineGUID;
-(void)perfLog:(id)arg1 ;
-(void)performPurchaseAnimationForIdentifier:(id)arg1 style:(id)arg2 ;
-(void)registerNavBarButtonWithTitle:(id)arg1 side:(id)arg2 function:(id)arg3 ;
-(void)reportAProblemForIdentifier:(id)arg1 ;
-(void)selectTrackListItemWithIdentifier:(id)arg1 ;
-(void)sendPostOfType:(id)arg1 withOptions:(id)arg2 ;
-(void)setLibraryIdentifierWithType:(id)arg1 value:(id)arg2 ;
-(bool)shouldRestrictContentOfSystem:(id)arg1 level:(id)arg2 ;
-(void)showAlertWithMessage:(id)arg1 title:(id)arg2 buttonTitle:(id)arg3 ;
-(bool)showConfirmWithMessage:(id)arg1 title:(id)arg2 okButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
-(id)showPromptWithMessage:(id)arg1 initialValue:(id)arg2 title:(id)arg3 okButtonTitle:(id)arg4 cancelButtonTitle:(id)arg5 ;
-(void)signOutPrimaryAccount;
-(id)authenticationContext;
-(OpaqueJSContextRef)copyJavaScriptContext;
-(id)deviceLocalStorage;
-(id)scriptWindowContext;
-(void)setAuthenticationContext:(id)arg1 ;
-(void)setScriptWindowContext:(id)arg1 ;
-(void)setWebFrame:(id)arg1 ;
-(id)threadSafeDelegate;
-(id)applicationAccessibilityEnabled;
-(id)applicationLocalStorage;
-(id)_className;
-(id)globalRootObject;
-(id)loggingEnabled;
-(id)referringUserAgent;
-(id)requestInfo;
-(id)previewOverlay;
-(id)screenReaderRunning;
-(void)setGlobalRootObject:(id)arg1 ;
-(void)setLoggingEnabled:(id)arg1 ;
-(void)setReferringUserAgent:(id)arg1 ;
@end

