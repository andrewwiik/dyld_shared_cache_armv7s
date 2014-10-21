/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:11 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateBarLayoutDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol UIKeyboardCandidateBarDelegate, UIKeyboardCandidateListDelegate;
@class NSString, UIImageView, NSArray, UIKBThemedView, TIKeyboardCandidateResultSet, NSIndexPath, UIKBCandidateCollectionView;

@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateBarLayoutDelegate, UICollectionViewDataSource> {

	bool _canExtend;
	bool _forceReloadInitiallyHiddenCandidates;
	bool _shouldSkipLayoutUntilScrollViewAnimationEnds;
	bool _didSkipLayout;
	NSString* _inlineText;
	UIImageView* _candidateMaskView;
	<UIKeyboardCandidateBarDelegate>* _delegate;
	double _upArrowWidth;
	<UIKeyboardCandidateListDelegate>* _candidateListDelegate;
	NSArray* _candidateViews;
	unsigned long long _currentCandidateViewIndex;
	UIKBThemedView* _secondaryCandidatesViewEdgeGradient;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	NSArray* _filteredCandidates;
	NSIndexPath* _dragStartNextPageIndexPath;
	NSIndexPath* _dragStartPreviousPageIndexPath;
	/*^block*/ id _skippedSetCandidatesBlock;
	CGPoint _dragStartOffset;

}

@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidates; 
@property (nonatomic,copy) NSString * inlineText;                                                    //@synthesize inlineText=_inlineText - In the implementation block
@property (nonatomic,retain) UIImageView * candidateMaskView;                                        //@synthesize candidateMaskView=_candidateMaskView - In the implementation block
@property (assign,nonatomic) <UIKeyboardCandidateBarDelegate> * delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double upArrowWidth;                                                    //@synthesize upArrowWidth=_upArrowWidth - In the implementation block
@property (assign,nonatomic) <UIKeyboardCandidateListDelegate> * candidateListDelegate;              //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,retain) NSArray * candidateViews;                                               //@synthesize candidateViews=_candidateViews - In the implementation block
@property (assign,nonatomic) unsigned long long currentCandidateViewIndex;                           //@synthesize currentCandidateViewIndex=_currentCandidateViewIndex - In the implementation block
@property (nonatomic,readonly) UIKBCandidateCollectionView * currentCandidateView; 
@property (nonatomic,retain) UIKBThemedView * secondaryCandidatesViewEdgeGradient;                   //@synthesize secondaryCandidatesViewEdgeGradient=_secondaryCandidatesViewEdgeGradient - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                      //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,retain) NSArray * filteredCandidates;                                           //@synthesize filteredCandidates=_filteredCandidates - In the implementation block
@property (assign,nonatomic) bool canExtend;                                                         //@synthesize canExtend=_canExtend - In the implementation block
@property (assign,nonatomic) bool forceReloadInitiallyHiddenCandidates;                              //@synthesize forceReloadInitiallyHiddenCandidates=_forceReloadInitiallyHiddenCandidates - In the implementation block
@property (assign,nonatomic) CGPoint dragStartOffset;                                                //@synthesize dragStartOffset=_dragStartOffset - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartNextPageIndexPath;                                 //@synthesize dragStartNextPageIndexPath=_dragStartNextPageIndexPath - In the implementation block
@property (nonatomic,copy) NSIndexPath * dragStartPreviousPageIndexPath;                             //@synthesize dragStartPreviousPageIndexPath=_dragStartPreviousPageIndexPath - In the implementation block
@property (assign,nonatomic) bool shouldSkipLayoutUntilScrollViewAnimationEnds;                      //@synthesize shouldSkipLayoutUntilScrollViewAnimationEnds=_shouldSkipLayoutUntilScrollViewAnimationEnds - In the implementation block
@property (assign,nonatomic) bool didSkipLayout;                                                     //@synthesize didSkipLayout=_didSkipLayout - In the implementation block
@property (nonatomic,copy) id skippedSetCandidatesBlock;                                             //@synthesize skippedSetCandidatesBlock=_skippedSetCandidatesBlock - In the implementation block
+(unsigned long long)numberOfRows;
+(double)height;
+(double)heightForInterfaceOrientation:(long long)arg1 ;
+(void)setScreenTraits:(id)arg1 ;
+(unsigned long long)numberOfRowsForInterfaceOrientation:(long long)arg1 ;
+(double)heightForRowAtIndex:(unsigned long long)arg1 interfaceOrientation:(long long)arg2 ;
+(double)defaultPagingVelocityThreshold;
+(double)defaultPagingDistanceThreshold;
+(double)heightForRowAtIndex:(unsigned long long)arg1 ;
+(double)heightForLastRow;
+(double)defaultCandidateWidth;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(unsigned long long)count;
-(void)setFrame:(CGRect)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(id)delegate;
-(id)candidates;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)_stepSelectedCandidateInDirection:(bool)arg1 ;
-(void)showNextCandidate;
-(id)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(bool)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(bool)arg5 ;
-(void)setCandidateListDelegate:(id)arg1 ;
-(id)statisticsIdentifier;
-(void)candidateListSelectionDidChange:(id)arg1 ;
-(bool)isExtendedList;
-(bool)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1 ;
-(void)showCandidate:(id)arg1 ;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1 ;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
-(void)setInlineText:(id)arg1 ;
-(bool)hasNextPage;
-(bool)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(id)inlineText;
-(unsigned long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(CGSize)sizeOfDummyItemForCollectionView:(id)arg1 layout:(id)arg2 ;
-(id)candidateResultSet;
-(void)setCandidateResultSet:(id)arg1 ;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(void)_clearData;
-(id)candidateViews;
-(long long)_sectionForSectionIndex:(unsigned long long)arg1 candidateView:(id)arg2 ;
-(unsigned long long)_countOfItemsInSection:(long long)arg1 ;
-(id)_itemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 ;
-(Class)_barCellClassForSection:(long long)arg1 ;
-(double)_widthOfItemAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 ;
-(void)_updateCanExtendState;
-(void)setCurrentCandidateViewIndex:(unsigned long long)arg1 ;
-(bool)_showingInitiallyHiddenCandidates;
-(void)setShouldSkipLayoutUntilScrollViewAnimationEnds:(bool)arg1 ;
-(bool)shouldSkipLayoutUntilScrollViewAnimationEnds;
-(void)_scrollToFirstCandidateInSection:(long long)arg1 withAnimation:(bool)arg2 ;
-(id)currentCandidateView;
-(bool)didSkipLayout;
-(void)_performSkippedLayoutIfNeeded;
-(void)setDragStartOffset:(CGPoint)arg1 ;
-(id)_nextPageIndexPath;
-(void)setDragStartNextPageIndexPath:(id)arg1 ;
-(id)_previousPageIndexPath;
-(void)setDragStartPreviousPageIndexPath:(id)arg1 ;
-(CGPoint)dragStartOffset;
-(id)_indexPathForFirstVisibleItem;
-(id)dragStartNextPageIndexPath;
-(bool)canExtend;
-(id)_candidateViewForSection:(long long)arg1 ;
-(id)dragStartPreviousPageIndexPath;
-(id)_indexPathForLastVisibleItem;
-(void)setSkippedSetCandidatesBlock:(/*^block*/ id)arg1 ;
-(void)setDidSkipLayout:(bool)arg1 ;
-(bool)forceReloadInitiallyHiddenCandidates;
-(void)setForceReloadInitiallyHiddenCandidates:(bool)arg1 ;
-(void)setFilteredCandidates:(id)arg1 ;
-(id)filteredCandidates;
-(void)_reloadDataByAppendingAtEnd:(bool)arg1 initiallyHiddenCandidatesChanged:(bool)arg2 ;
-(void)_reloadData;
-(void)_showCandidateAtIndex:(unsigned long long)arg1 inSection:(long long)arg2 scrollCellToVisible:(bool)arg3 animated:(bool)arg4 ;
-(void)_showPageAtIndexPath:(id)arg1 ;
-(id)_indexPathForCandidateFromIndexPath:(id)arg1 inCandidateView:(id)arg2 ;
-(unsigned long long)currentCandidateViewIndex;
-(void)_stepSelectedCandidateInDirection:(bool)arg1 candidateView:(id)arg2 section:(long long)arg3 ;
-(id)_indexPathForCurrentCandidateViewFromIndexPath:(id)arg1 ;
-(void)setCandidateViews:(id)arg1 ;
-(double)upArrowWidth;
-(id)secondaryCandidatesViewEdgeGradient;
-(void)setSecondaryCandidatesViewEdgeGradient:(id)arg1 ;
-(void)_updateCandidateViews;
-(/*^block*/ id)skippedSetCandidatesBlock;
-(unsigned long long)_sectionIndexForSection:(long long)arg1 ;
-(void)setCanExtend:(bool)arg1 ;
-(void)candidateBarLayoutDidFinishPreparingLayout;
-(double)_emptySpaceForItemsToIndex:(unsigned long long)arg1 inSection:(long long)arg2 ;
-(void)setUpArrowWidth:(double)arg1 ;
-(id)candidateMaskView;
-(void)setCandidateMaskView:(id)arg1 ;
@end

