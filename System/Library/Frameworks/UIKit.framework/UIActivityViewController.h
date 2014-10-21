/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <UIKit/SFAirDropActivityViewControllerDelegate.h>

@protocol UIActivityViewControllerDelegate;
@class NSArray, UIActivity, NSString, UIActivityGroupListViewController, NSOperationQueue, UIViewController, SFAirDropActivityViewController;

@interface UIActivityViewController : UIViewController <UIViewControllerRestoration, SFAirDropActivityViewControllerDelegate> {

	bool _useBlackPopoverStyle;
	bool _showKeyboardAutomatically;
	bool _allowsEmbedding;
	bool _airdropped;
	/*^block*/ id _completionHandler;
	NSArray* _excludedActivityTypes;
	UIActivity* _activity;
	NSArray* _includedActivityTypes;
	long long _excludedActivityCategories;
	NSArray* _activityTypeOrder;
	NSString* _mailAutosaveIdentifier;
	/*^block*/ id _preCompletionHandler;
	<UIActivityViewControllerDelegate>* _airDropDelegate;
	NSArray* _activityItems;
	NSArray* _applicationActivities;
	UIActivityGroupListViewController* _activityGroupListViewController;
	NSOperationQueue* _activityItemProviderOperationQueue;
	long long _totalProviderCount;
	long long _completedProviderCount;
	unsigned long long _backgroundTaskIdentifier;
	long long _originalPopoverBackgroundStyle;
	Class _originalPopoverBackgroundViewClass;
	NSString* _subject;
	UIViewController* _activityViewController;
	SFAirDropActivityViewController* _airDropViewController;

}

@property (nonatomic,copy) id completionHandler;                                                               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSArray * excludedActivityTypes;                                                    //@synthesize excludedActivityTypes=_excludedActivityTypes - In the implementation block
@property (nonatomic,retain) UIActivity * activity;                                                            //@synthesize activity=_activity - In the implementation block
@property (assign,nonatomic) bool useBlackPopoverStyle;                                                        //@synthesize useBlackPopoverStyle=_useBlackPopoverStyle - In the implementation block
@property (assign,nonatomic) bool showKeyboardAutomatically;                                                   //@synthesize showKeyboardAutomatically=_showKeyboardAutomatically - In the implementation block
@property (nonatomic,copy) NSArray * includedActivityTypes;                                                    //@synthesize includedActivityTypes=_includedActivityTypes - In the implementation block
@property (assign,nonatomic) long long excludedActivityCategories;                                             //@synthesize excludedActivityCategories=_excludedActivityCategories - In the implementation block
@property (nonatomic,copy) NSArray * activityTypeOrder;                                                        //@synthesize activityTypeOrder=_activityTypeOrder - In the implementation block
@property (assign,nonatomic) bool allowsEmbedding;                                                             //@synthesize allowsEmbedding=_allowsEmbedding - In the implementation block
@property (nonatomic,retain) NSString * mailAutosaveIdentifier;                                                //@synthesize mailAutosaveIdentifier=_mailAutosaveIdentifier - In the implementation block
@property (nonatomic,readonly) bool sourceIsManaged; 
@property (nonatomic,copy) id preCompletionHandler;                                                            //@synthesize preCompletionHandler=_preCompletionHandler - In the implementation block
@property (assign,nonatomic) <UIActivityViewControllerDelegate> * airDropDelegate;                             //@synthesize airDropDelegate=_airDropDelegate - In the implementation block
@property (nonatomic,copy) NSArray * activityItems;                                                            //@synthesize activityItems=_activityItems - In the implementation block
@property (nonatomic,copy) NSArray * applicationActivities;                                                    //@synthesize applicationActivities=_applicationActivities - In the implementation block
@property (nonatomic,retain) UIActivityGroupListViewController * activityGroupListViewController;              //@synthesize activityGroupListViewController=_activityGroupListViewController - In the implementation block
@property (nonatomic,retain) NSOperationQueue * activityItemProviderOperationQueue;                            //@synthesize activityItemProviderOperationQueue=_activityItemProviderOperationQueue - In the implementation block
@property (assign,nonatomic) long long totalProviderCount;                                                     //@synthesize totalProviderCount=_totalProviderCount - In the implementation block
@property (assign,nonatomic) long long completedProviderCount;                                                 //@synthesize completedProviderCount=_completedProviderCount - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskIdentifier;                                      //@synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier - In the implementation block
@property (assign,nonatomic) long long originalPopoverBackgroundStyle;                                         //@synthesize originalPopoverBackgroundStyle=_originalPopoverBackgroundStyle - In the implementation block
@property (assign,nonatomic) Class originalPopoverBackgroundViewClass;                                         //@synthesize originalPopoverBackgroundViewClass=_originalPopoverBackgroundViewClass - In the implementation block
@property (nonatomic,copy) NSString * subject;                                                                 //@synthesize subject=_subject - In the implementation block
@property (nonatomic,retain) UIViewController * activityViewController;                                        //@synthesize activityViewController=_activityViewController - In the implementation block
@property (nonatomic,retain) SFAirDropActivityViewController * airDropViewController;                          //@synthesize airDropViewController=_airDropViewController - In the implementation block
@property (assign,nonatomic) bool airdropped;                                                                  //@synthesize airdropped=_airdropped - In the implementation block
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
+(id)_subjectForActivityItem:(id)arg1 activity:(id)arg2 ;
+(id)_dataTypeIdentifierForActivityItem:(id)arg1 activity:(id)arg2 ;
+(id)_thumbnailImageForActivityItem:(id)arg1 activity:(id)arg2 ;
+(id)_attachmentNameForActivityItem:(id)arg1 activity:(id)arg2 ;
+(id)_builtinActivities;
+(void)_reloadImageForActivity:(id)arg1 ;
+(void)_addActivityItem:(id)arg1 activityViewController:(id)arg2 originalActivityItem:(id)arg3 ;
+(void)_clearActivityItems:(id)arg1 ;
+(bool)_hasSystemActivityForActivityItems:(id)arg1 ;
-(void)_gkCallOnSuperSkippingSelf_viewDidAppear:(bool)arg1 ;
-(void)dealloc;
-(long long)preferredStatusBarStyle;
-(unsigned long long)supportedInterfaceOrientations;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(/*^block*/ id)completionHandler;
-(bool)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillAppear:(bool)arg1 ;
-(void)_setPopoverController:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)_didResignContentViewControllerOfPopover:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_performActivity:(id)arg1 ;
-(bool)sourceIsManaged;
-(void)setSubject:(id)arg1 ;
-(bool)_shouldShowSystemActivity:(id)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
-(id)activityViewController;
-(id)activity;
-(id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2 ;
-(void)setExcludedActivityTypes:(id)arg1 ;
-(void)setActivityViewController:(id)arg1 ;
-(void)setCompletionHandler:(/*^block*/ id)arg1 ;
-(void)_cancel;
-(id)airDropViewController;
-(void)setAirDropViewController:(id)arg1 ;
-(void)_reloadImageForActivity:(id)arg1 ;
-(void)setActivityItems:(id)arg1 ;
-(void)setApplicationActivities:(id)arg1 ;
-(void)setBackgroundTaskIdentifier:(unsigned long long)arg1 ;
-(void)_notifyReloadImageForActivity:(id)arg1 ;
-(id)excludedActivityTypes;
-(long long)excludedActivityCategories;
-(id)includedActivityTypes;
-(id)activityItems;
-(id)activityTypeOrder;
-(id)_activityItemValues;
-(id)_availableActivitiesForItems:(id)arg1 ;
-(id)_availableActivities;
-(bool)allowsEmbedding;
-(void)setAirdropped:(bool)arg1 ;
-(void)_setDarkStyleOnLegacyApp;
-(bool)airdropped;
-(void)setPreCompletionHandler:(/*^block*/ id)arg1 ;
-(void)setActivity:(id)arg1 ;
-(void)setActivityItemProviderOperationQueue:(id)arg1 ;
-(void)_cleanupActivityWithSuccess:(bool)arg1 ;
-(bool)showKeyboardAutomatically;
-(id)mailAutosaveIdentifier;
-(id)subject;
-(void)_resetAfterActivity:(bool)arg1 ;
-(void)_executeActivity;
-(bool)useBlackPopoverStyle;
-(id)activityItemProviderOperationQueue;
-(void)airDropActivityRequestingSharedItemsWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)airDropActivityDidSuccessfullyCompleteTransfer;
-(void)airDropActivityDidSuccessfullyStartTransfer;
-(void)_updateActivityItems:(id)arg1 ;
-(double)_displayHeight;
-(void)_mailAutosaveWithHandler:(/*^block*/ id)arg1 ;
-(id)_titleForActivity:(id)arg1 ;
-(void)_performActivityOfType:(id)arg1 ;
-(void)setUseBlackPopoverStyle:(bool)arg1 ;
-(void)setShowKeyboardAutomatically:(bool)arg1 ;
-(void)setIncludedActivityTypes:(id)arg1 ;
-(void)setExcludedActivityCategories:(long long)arg1 ;
-(void)setActivityTypeOrder:(id)arg1 ;
-(void)setAllowsEmbedding:(bool)arg1 ;
-(void)setMailAutosaveIdentifier:(id)arg1 ;
-(/*^block*/ id)preCompletionHandler;
-(id)airDropDelegate;
-(void)setAirDropDelegate:(id)arg1 ;
-(id)applicationActivities;
-(id)activityGroupListViewController;
-(void)setActivityGroupListViewController:(id)arg1 ;
-(long long)totalProviderCount;
-(void)setTotalProviderCount:(long long)arg1 ;
-(long long)completedProviderCount;
-(void)setCompletedProviderCount:(long long)arg1 ;
-(unsigned long long)backgroundTaskIdentifier;
-(long long)originalPopoverBackgroundStyle;
-(void)setOriginalPopoverBackgroundStyle:(long long)arg1 ;
-(Class)originalPopoverBackgroundViewClass;
-(void)setOriginalPopoverBackgroundViewClass:(Class)arg1 ;
@end

