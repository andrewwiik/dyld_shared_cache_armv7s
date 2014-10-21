/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UIKeyboardCandidateListDelegate.h>
#import <UIKit/UIKeyboardCandidateGridCollectionViewControllerDelegate.h>
#import <UIKit/UIKeyboardCandidateRowViewControllerDelegate.h>

@protocol UIKeyboardCandidateListDelegate, UICollectionViewDelegate;
@class UIImageView, UIView, UIKeyboardCandidateSortControl, UIKeyboardCandidateGridHeader, TIKeyboardCandidateResultSet, NSMutableDictionary, UIKeyboardCandidateGridCollectionViewController, UIKBBackdropView, NSArray, NSString, UIKeyboardCandidateRowViewController;

@interface UIKeyboardCandidateGrid : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate, UIKeyboardCandidateGridCollectionViewControllerDelegate, UIKeyboardCandidateRowViewControllerDelegate> {

	UIImageView* _backgroundView;
	UIView* _topBarShadow;
	UIView* _bottomBarShadow;
	UIKeyboardCandidateSortControl* _sortBar;
	UIKeyboardCandidateGridHeader* _gridHeader;
	bool _drawTopShadow;
	bool _drawBottomShadow;
	bool _secondaryCandidatesViewIsCurrent;
	int _candidatesVisualStyle;
	<UIKeyboardCandidateListDelegate>* _candidateListDelegate;
	TIKeyboardCandidateResultSet* _candidateSet;
	NSMutableDictionary* _collectionViewControllers;
	UIKeyboardCandidateGridCollectionViewController* _collectionViewController;
	unsigned long long _numberOfColumns;
	<UICollectionViewDelegate>* _scrollViewDelegate;
	UIKBBackdropView* _backdropView;
	NSArray* _sortedCandidates;
	NSString* _inlineText;
	UIKeyboardCandidateRowViewController* _secondaryCandidatesViewController;

}

@property (assign,nonatomic) bool drawTopShadow;                                                                      //@synthesize drawTopShadow=_drawTopShadow - In the implementation block
@property (assign,nonatomic) bool drawBottomShadow;                                                                   //@synthesize drawBottomShadow=_drawBottomShadow - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateSet;                                             //@synthesize candidateSet=_candidateSet - In the implementation block
@property (nonatomic,retain) NSArray * sortedCandidates;                                                              //@synthesize sortedCandidates=_sortedCandidates - In the implementation block
@property (nonatomic,retain) NSString * inlineText;                                                                   //@synthesize inlineText=_inlineText - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfColumns;                                                      //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) int candidatesVisualStyle;                                                               //@synthesize candidatesVisualStyle=_candidatesVisualStyle - In the implementation block
@property (assign,nonatomic) UIKeyboardCandidateSortControl * sortBar;                                                //@synthesize sortBar=_sortBar - In the implementation block
@property (assign,nonatomic) UIKeyboardCandidateGridHeader * gridHeader;                                              //@synthesize gridHeader=_gridHeader - In the implementation block
@property (assign,nonatomic) <UICollectionViewDelegate> * scrollViewDelegate;                                         //@synthesize scrollViewDelegate=_scrollViewDelegate - In the implementation block
@property (assign,nonatomic) <UIKeyboardCandidateListDelegate> * candidateListDelegate;                               //@synthesize candidateListDelegate=_candidateListDelegate - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * collectionViewControllers;                                       //@synthesize collectionViewControllers=_collectionViewControllers - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateGridCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateRowViewController * secondaryCandidatesViewController;                //@synthesize secondaryCandidatesViewController=_secondaryCandidatesViewController - In the implementation block
@property (assign,nonatomic) bool secondaryCandidatesViewIsCurrent;                                                   //@synthesize secondaryCandidatesViewIsCurrent=_secondaryCandidatesViewIsCurrent - In the implementation block
@property (nonatomic,retain) UIKBBackdropView * backdropView;                                                         //@synthesize backdropView=_backdropView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(unsigned long long)numberOfColumns;
-(void)layout;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)showNextCandidate;
-(id)candidateListDelegate;
-(void)candidateListAcceptCandidate:(id)arg1 ;
-(id)candidateSet;
-(bool)hasCandidates;
-(void)setCandidateSet:(id)arg1 ;
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
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(bool)arg6 ;
-(void)setInlineText:(id)arg1 ;
-(bool)handleNumberKey:(unsigned long long)arg1 ;
-(bool)handleTabKeyWithShift:(bool)arg1 ;
-(bool)hasNextPage;
-(bool)hasPreviousPage;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(id)inlineText;
-(void)setCandidatesVisualStyle:(int)arg1 ;
-(int)candidatesVisualStyle;
-(bool)padInlineFloatingViewIsExpanded:(id)arg1 ;
-(void)setSecondaryCandidatesViewIsCurrent:(bool)arg1 ;
-(bool)secondaryCandidatesViewIsCurrent;
-(unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1 ;
-(unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1 ;
-(void)candidateListShouldBeDismissed:(id)arg1 ;
-(id)collectionViewController;
-(void)setCollectionViewController:(id)arg1 ;
-(void)sortSelectionBarAction:(id)arg1 ;
-(void)setBackdropView:(id)arg1 ;
-(id)backdropView;
-(void)setDrawTopShadow:(bool)arg1 ;
-(void)setDrawBottomShadow:(bool)arg1 ;
-(void)statusBarFrameWillChange:(id)arg1 ;
-(void)setSortBar:(id)arg1 ;
-(void)setGridHeader:(id)arg1 ;
-(id)sortBar;
-(bool)drawTopShadow;
-(bool)drawBottomShadow;
-(id)secondaryCandidatesViewController;
-(void)setSecondaryCandidatesViewController:(id)arg1 ;
-(id)gridHeader;
-(void)clearViews;
-(id)collectionViewControllers;
-(id)scrollViewDelegate;
-(void)showArrowButton:(bool)arg1 ;
-(void)setNumberOfColumns:(unsigned long long)arg1 ;
-(void)setScrollViewDelegate:(id)arg1 ;
-(id)sortedCandidates;
-(void)setSortedCandidates:(id)arg1 ;
@end

