/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKViewController.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <ChatKit/CKTranscriptCollectionViewDelegate.h>
#import <ChatKit/CKTranscriptDataDelegate.h>
#import <ChatKit/CKBalloonViewDelegate.h>

@protocol CKTranscriptCollectionViewControllerDelegate, CKGradientReferenceView, OS_dispatch_group;
@class CKDispatchQueue, CKConversation, CKTranscriptData, CKTranscriptCollectionView, UIView, NSObject, NSIndexSet, UITapGestureRecognizer;

@interface CKTranscriptCollectionViewController : CKViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIAlertViewDelegate, CKTranscriptCollectionViewDelegate, CKTranscriptDataDelegate, CKBalloonViewDelegate> {

	bool _updatesAnimatingContentOffset;
	bool _peeking;
	bool _initialLoad;
	bool _hasHiddenItems;
	CKDispatchQueue* _transcriptDispatchQueue;
	CKConversation* _conversation;
	CKTranscriptData* _transcriptData;
	CKTranscriptCollectionView* _collectionView;
	<CKTranscriptCollectionViewControllerDelegate>* _delegate;
	UIView<CKGradientReferenceView>* _gradientReferenceView;
	NSObject<OS_dispatch_group>* _updateAnimationGroup;
	NSIndexSet* _hiddenItems;
	UITapGestureRecognizer* _loggingTapGestureRecognizer;
	/*^block*/ id _alertHandler;
	CGPoint _peekSampleTranslation;

}

@property (nonatomic,retain) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,retain) CKTranscriptData * transcriptData;                                      //@synthesize transcriptData=_transcriptData - In the implementation block
@property (nonatomic,retain) CKTranscriptCollectionView * collectionView;                            //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,nonatomic) <CKTranscriptCollectionViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView<CKGradientReferenceView> * gradientReferenceView;                //@synthesize gradientReferenceView=_gradientReferenceView - In the implementation block
@property (nonatomic,retain) NSObject<OS_dispatch_group> * updateAnimationGroup;                     //@synthesize updateAnimationGroup=_updateAnimationGroup - In the implementation block
@property (nonatomic,copy) NSIndexSet * hiddenItems;                                                 //@synthesize hiddenItems=_hiddenItems - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * loggingTapGestureRecognizer;                   //@synthesize loggingTapGestureRecognizer=_loggingTapGestureRecognizer - In the implementation block
@property (assign,nonatomic) bool updatesAnimatingContentOffset;                                     //@synthesize updatesAnimatingContentOffset=_updatesAnimatingContentOffset - In the implementation block
@property (nonatomic,readonly) CKDispatchQueue * transcriptDispatchQueue;                            //@synthesize transcriptDispatchQueue=_transcriptDispatchQueue - In the implementation block
@property (nonatomic,copy) id alertHandler;                                                          //@synthesize alertHandler=_alertHandler - In the implementation block
@property (assign,nonatomic) CGPoint peekSampleTranslation;                                          //@synthesize peekSampleTranslation=_peekSampleTranslation - In the implementation block
@property (assign,getter=isPeeking,nonatomic) bool peeking;                                          //@synthesize peeking=_peeking - In the implementation block
@property (assign,getter=isInitialLoad,nonatomic) bool initialLoad;                                  //@synthesize initialLoad=_initialLoad - In the implementation block
@property (assign,nonatomic) bool hasHiddenItems;                                                    //@synthesize hasHiddenItems=_hasHiddenItems - In the implementation block
-(void)__handleLoggingTapped:(id)arg1 ;
-(bool)_shouldShowUILogging;
-(bool)_shouldShowInternalUILogging;
-(id)_remoteLogDumpButtonTitle;
-(id)_localLogDumpButtonTitle;
-(void)_performLocalLogDump;
-(void)_performRemoteLogDump;
-(void)_showLoggingAlertIfNecessary;
-(void)_setupLoggingTapGestureRecognizer;
-(void)_tearDownLoggingTapGestureRecognizer;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(bool)arg2 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setEditing:(bool)arg1 animated:(bool)arg2 ;
-(id)collectionView;
-(bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(id)contentScrollView;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)collectionViewLayout;
-(void)setCollectionView:(id)arg1 ;
-(id)loggingTapGestureRecognizer;
-(void)setLoggingTapGestureRecognizer:(id)arg1 ;
-(void)setAlertHandler:(/*^block*/ id)arg1 ;
-(id)conversation;
-(bool)balloonView:(id)arg1 canPerformAction:(SEL)arg2 withSender:(id)arg3 ;
-(void)balloonViewWillResignFirstResponder:(id)arg1 ;
-(void)balloonViewTouchedDown:(id)arg1 withEvent:(id)arg2 ;
-(void)balloonViewTapped:(id)arg1 withEvent:(id)arg2 ;
-(id)menuItemsForBalloonView:(id)arg1 ;
-(CGRect)calloutTargetRectForBalloonView:(id)arg1 ;
-(void)viewDidAppearDeferredSetup;
-(void)performResumeDeferredSetup;
-(void)setConversation:(id)arg1 ;
-(id)transcriptData;
-(id)initWithConversation:(id)arg1 ;
-(void)setGradientReferenceView:(id)arg1 ;
-(void)deleteSelectedItems:(id)arg1 ;
-(id)selectedItems;
-(void)setHiddenItems:(id)arg1 ;
-(void)configureCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(id)updateAnimationGroup;
-(void)setScrollAnchor:(double)arg1 ;
-(/*^block*/ id)alertHandler;
-(void)addressBookChanged:(id)arg1 ;
-(void)previewDidChange:(id)arg1 ;
-(void)transferUpdated:(id)arg1 ;
-(void)flushTranscriptDispatchQueue;
-(bool)wantsDrawerLayout;
-(id)transcriptDispatchQueue;
-(void)applyTranscriptUpdate:(id)arg1 animated:(bool)arg2 completion:(/*^block*/ id)arg3 ;
-(bool)isInitialLoad;
-(void)setInitialLoad:(bool)arg1 ;
-(void)setUpdateAnimationGroup:(id)arg1 ;
-(void)setTranscriptData:(id)arg1 ;
-(void)transferRestored:(id)arg1 ;
-(void)setHasHiddenItems:(bool)arg1 ;
-(void)setPeeking:(bool)arg1 ;
-(void)setPeekSampleTranslation:(CGPoint)arg1 ;
-(bool)updatesAnimatingContentOffset;
-(void)setUpdatesAnimatingContentOffset:(bool)arg1 ;
-(bool)isPeeking;
-(CGPoint)peekSampleTranslation;
-(id)messageForBalloonView:(id)arg1 ;
-(bool)_shouldShowSendAsSMSForMessage:(id)arg1 ;
-(void)balloonView:(id)arg1 copy:(id)arg2 ;
-(id)transcriptObjectForBalloonView:(id)arg1 ;
-(void)balloonView:(id)arg1 sendAsTextMessage:(id)arg2 ;
-(void)balloonView:(id)arg1 more:(id)arg2 ;
-(id)indexPathForBalloonView:(id)arg1 ;
-(void)touchUpInsideMessageCellFailureButton:(id)arg1 ;
-(void)touchUpInsideHeaderCellLoadMoreButton:(id)arg1 ;
-(id)gradientReferenceView;
-(bool)hasHiddenItems;
-(id)hiddenItems;
-(void)applyTranscriptUpdate:(id)arg1 animated:(bool)arg2 anchorIndex:(unsigned long long)arg3 completion:(/*^block*/ id)arg4 ;
-(void)_downgradeMessage:(id)arg1 validateSend:(bool)arg2 ;
-(void)_resendMessageAtIndexPath:(id)arg1 ;
-(void)_downgradeMessageAtIndexPath:(id)arg1 ;
-(void)collectionViewWillScroll:(id)arg1 targetContentOffset:(inout CGPoint*)arg2 ;
-(void)collectionViewWillProgrammaticallyScroll:(id)arg1 ;
-(void)collectionViewWillInset:(id)arg1 targetContentInset:(inout UIEdgeInsets*)arg2 ;
-(void)collectionViewDidInset:(id)arg1 ;
-(bool)collectionView:(id)arg1 isEditableItemAtIndexPath:(id)arg2 ;
-(void)transcriptDataNeedsUpdate:(id)arg1 ;
-(void)balloonViewDidFinishDataDetectorAction:(id)arg1 ;
-(CGRect)collectionView:(id)arg1 layout:(id)arg2 frameForItemAtIndexPath:(id)arg3 ;
-(BOOL)collectionView:(id)arg1 layout:(id)arg2 orientationForItemAtIndexPath:(id)arg3 ;
-(double)collectionView:(id)arg1 layoutBottomSpace:(id)arg2 ;
-(void)prepareForSuspend;
@end

