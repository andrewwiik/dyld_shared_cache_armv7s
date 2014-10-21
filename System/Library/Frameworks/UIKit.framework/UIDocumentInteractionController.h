/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol UIDocumentInteractionControllerDelegate;
@class NSArray, NSString, UIViewController, UIView, UIBarButtonItem, UIPopoverController, UIActivityViewController, NSURL, _UIPreviewItemProxy;

@interface UIDocumentInteractionController : NSObject <UIActionSheetDelegate> {

	<UIDocumentInteractionControllerDelegate>* _delegate;
	id _previewItemProxy;
	NSArray* _icons;
	id _annotation;
	NSString* _uniqueIdentifier;
	UIViewController* _presentingViewController;
	id _previewController;
	NSArray* _gestureRecognizers;
	CGRect _presentRect;
	UIView* _presentView;
	UIBarButtonItem* _presentItem;
	NSArray* _availableApplications;
	UIPopoverController* _popoverController;
	UIActivityViewController* _activityViewController;
	bool _shouldUnzipDocument;
	bool _sourceIsManaged;
	NSURL* _unzippedDocumentURL;
	id _applicationToOpen;
	NSURL* _tmpURLToDeleteOnDealloc;
	struct {
		unsigned delegateViewControllerForPreview : 1;
		unsigned delegateRectForPreview : 1;
		unsigned delegateViewForPreview : 1;
		unsigned transitionImageForPreview : 1;
		unsigned documentProxyForPreview : 1;
		unsigned delegateWillBeginPreview : 1;
		unsigned delegateDidEndPreviewPreview : 1;
		unsigned delegateWillEndPreviewPreview : 1;
		unsigned delegateWillPresentOptionsMenu : 1;
		unsigned delegateDidDismissOptionsMenu : 1;
		unsigned delegateWillPresentOpenInMenu : 1;
		unsigned delegateDidDismissOpenInMenu : 1;
		unsigned delegateWillBeginSendingToApplication : 1;
		unsigned delegateDidEndSendingToApplication : 1;
		unsigned delegateCanPerformAction : 1;
		unsigned delegatePerformAction : 1;
		unsigned delegateUnzipURL : 1;
		unsigned showingOptionsMenu : 1;
		unsigned showingOpenInMenu : 1;
		unsigned delegateExcludesActivities : 1;
		unsigned delegateCanBlockRemoteImages : 1;
		unsigned delegateAddsActivities : 1;
		unsigned delegateProvidesActivityItem : 1;
		unsigned delegateProvidesPrintInfo : 1;
		unsigned performingActivity : 1;
	}  _documentInteractionControllerFlags;

}

@property (getter=isArchive,nonatomic,readonly) bool archive; 
@property (nonatomic,@dynamic,retain) NSString * uniqueIdentifier; 
@property (assign,nonatomic,@dynamic) bool shouldUnzipDocument; 
@property (assign,nonatomic,@dynamic) bool sourceIsManaged; 
@property (assign,nonatomic) <UIDocumentInteractionControllerDelegate> * delegate;                                           //@synthesize delegate=_delegate - In the implementation block
@property (retain) NSURL * URL; 
@property (nonatomic,copy) NSString * UTI; 
@property (copy) NSString * name; 
@property (nonatomic,readonly) NSArray * icons; 
@property (nonatomic,retain) id annotation;                                                                                  //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers; 
@property (nonatomic,retain) NSString * uniqueIdentifier;                                                                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (assign,nonatomic) bool shouldUnzipDocument;                                                                       //@synthesize shouldUnzipDocument=_shouldUnzipDocument - In the implementation block
@property (assign,nonatomic) bool sourceIsManaged;                                                                           //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (nonatomic,retain) UIActivityViewController * activityViewController;                                              //@synthesize activityViewController=_activityViewController - In the implementation block
@property (assign,setter=_setPerformingActivity:,getter=_performingActivity,nonatomic) bool performingActivity; 
@property (nonatomic,readonly) id previewController; 
@property (nonatomic,retain) UIPopoverController * popoverController;                                                        //@synthesize popoverController=_popoverController - In the implementation block
@property (nonatomic,readonly) _UIPreviewItemProxy * previewItemProxy; 
+(id)_applicationsForDocumentProxy:(id)arg1 ;
+(id)allActionSelectorNames;
+(void)initialize;
+(id)_UTIForFileURL:(id)arg1 ;
+(id)_unzippingQueue;
+(id)interactionControllerWithURL:(id)arg1 ;
+(id)_pathFilterPredicate;
-(bool)isArchive;
-(id)subitemsInArchive:(/*^block*/ id)arg1 ;
-(id)extractSubitemFromArchive:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(id)_documentProxySourceIsManaged:(bool)arg1 ;
-(bool)_delegateExistsAndImplementsRequiredMethods:(id*)arg1 ;
-(void)setPreviewURLOverride:(id)arg1 ;
-(unsigned long long)applicationCount;
-(void)openDocumentWithDefaultApplication;
-(void)_dismissEverythingWithExtremePrejudiceAnimated:(bool)arg1 ;
-(void)popoverController:(id)arg1 animationCompleted:(long long)arg2 ;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(CGRect)previewController:(id)arg1 frameForPreviewItem:(id)arg2 inSourceView:(id*)arg3 ;
-(void)previewControllerWillDismiss:(id)arg1 ;
-(void)previewControllerDidDismiss:(id)arg1 ;
-(id)previewController:(id)arg1 transitionImageForPreviewItem:(id)arg2 contentRect:(CGRect*)arg3 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)gestureRecognizers;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(id)icons;
-(void)setPopoverController:(id)arg1 ;
-(void)_invalidate;
-(void)_openDocumentWithApplication:(id)arg1 ;
-(bool)presentPreviewAnimated:(bool)arg1 ;
-(bool)_delegatePerformAction:(SEL)arg1 ;
-(bool)sourceIsManaged;
-(id)popoverController;
-(void)_activityControllerViewDidDismiss;
-(bool)_performingActivity;
-(void)_setPerformingActivity:(bool)arg1 ;
-(bool)_isVideo;
-(id)UTI;
-(id)_applications:(bool)arg1 ;
-(void)_setApplicationToOpen:(id)arg1 ;
-(void)_openDocumentWithCurrentApplication;
-(id)previewItemProxy;
-(id)activityViewController;
-(bool)_canUnzipDocument;
-(void)setShouldUnzipDocument:(bool)arg1 ;
-(void)_interfaceOrientationWillChange:(id)arg1 ;
-(bool)_isFilenameValidForUnzipping:(id)arg1 allowsArchiveZip:(bool)arg2 ;
-(bool)_isImage;
-(bool)_canPreviewUnzippedDocument;
-(bool)_canUnzipDocumentAndPresentOptions;
-(bool)_setupForOptionsMenu;
-(void)_unzipFileAndSetupPayload:(/*^block*/ id)arg1 ;
-(bool)_canUnzipDocumentForPreview;
-(bool)_documentNeedsHelpUnzippingForPreview;
-(bool)_setupPreviewController;
-(id)previewController;
-(void)setSourceIsManaged:(bool)arg1 ;
-(bool)_canUnzipDocumentAndPresentOpenIn;
-(bool)_setupForOpenInMenu;
-(void)_presentPreview:(id)arg1 ;
-(void)_presentOptionsMenu:(id)arg1 ;
-(bool)presentOptionsMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(bool)arg3 ;
-(bool)presentOpenInMenuFromRect:(CGRect)arg1 inView:(id)arg2 animated:(bool)arg3 ;
-(id)annotation;
-(void)_finishedCopyingResource;
-(id)_applicationToOpen;
-(void)_fixupFileExtensionIfNeeded;
-(bool)_delegateImplementsLegacyActions;
-(bool)_delegateCanPerformAction:(SEL)arg1 ;
-(bool)_isImageOrVideo;
-(void)setActivityViewController:(id)arg1 ;
-(bool)_isValidURL:(id)arg1 ;
-(id)_unzipFileAndSetupPayload:(id)arg1 completion:(/*^block*/ id)arg2 ;
-(void)dismissMenuAnimated:(bool)arg1 ;
-(void)setUTI:(id)arg1 ;
-(bool)shouldUnzipDocument;
-(bool)presentOptionsMenuFromBarButtonItem:(id)arg1 animated:(bool)arg2 ;
-(id)presentingNavigationController;
-(bool)presentOpenInMenuFromBarButtonItem:(id)arg1 animated:(bool)arg2 ;
-(void)dismissPreviewAnimated:(bool)arg1 ;
-(void)_presentOpenIn:(id)arg1 ;
-(void)openResourceOperation:(id)arg1 didFinishCopyingResource:(id)arg2 ;
-(id)_pathsInArchive:(/*^block*/ id)arg1 ;
-(void)_setUnzippedDocumentURL:(id)arg1 ;
-(id)_unzippedDocumentURL;
-(bool)_isPackageArchive:(id)arg1 ;
-(bool)_canSaveToCameraRollForType;
-(void)setAnnotation:(id)arg1 ;
-(id)uniqueIdentifier;
-(void)setUniqueIdentifier:(id)arg1 ;
@end
