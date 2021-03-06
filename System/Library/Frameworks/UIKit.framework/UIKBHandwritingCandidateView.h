/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBKeyView.h>
#import <UIKit/UIKeyboardCandidateList.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol UIKeyboardCandidateListDelegate;
@class TIKeyboardCandidateResultSet, UIKBCandidateCollectionView, UIKeyboardCandidatePocketShadow, UIKeyboardCandidateLogButton, NSArray;

@interface UIKBHandwritingCandidateView : UIKBKeyView <UIKeyboardCandidateList, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	bool _usesCandidateSelection;
	<UIKeyboardCandidateListDelegate>* _delegate;
	TIKeyboardCandidateResultSet* _candidateResultSet;
	UIKBCandidateCollectionView* _candidatesCollectionView;
	UIKeyboardCandidatePocketShadow* _pocketShadow;
	SCD_Struct_UI30 _visualStyling;
	UIKeyboardCandidateLogButton* _logButton;

}

@property (assign,nonatomic) <UIKeyboardCandidateListDelegate> * delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) <UIKeyboardCandidateList> * candidateList; 
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;                   //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (nonatomic,readonly) NSArray * candidates; 
@property (nonatomic,retain) UIKBCandidateCollectionView * candidatesCollectionView;              //@synthesize candidatesCollectionView=_candidatesCollectionView - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidatePocketShadow * pocketShadow;                      //@synthesize pocketShadow=_pocketShadow - In the implementation block
@property (assign,nonatomic) SCD_Struct_UI30 visualStyling;                                       //@synthesize visualStyling=_visualStyling - In the implementation block
@property (assign,nonatomic) bool usesCandidateSelection;                                         //@synthesize usesCandidateSelection=_usesCandidateSelection - In the implementation block
@property (nonatomic,retain) UIKeyboardCandidateLogButton * logButton;                            //@synthesize logButton=_logButton - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)delegate;
-(id)candidates;
-(void)showCandidateAtIndex:(unsigned long long)arg1 ;
-(void)showNextCandidate;
-(bool)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(bool)arg5 ;
-(id)statisticsIdentifier;
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
-(bool)hasNextPage;
-(bool)hasPreviousPage;
-(void)jumpToCompositions;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)_setRenderConfig:(id)arg1 ;
-(id)_inheritedRenderConfig;
-(bool)usesCandidateSelection;
-(void)setUsesCandidateSelection:(bool)arg1 ;
-(void)setVisualStyling:(SCD_Struct_UI30)arg1 ;
-(SCD_Struct_UI30)visualStyling;
-(void)updatePocketShadowForKeyplane:(id)arg1 ;
-(id)candidatesCollectionView;
-(id)logButton;
-(id)pocketShadow;
-(void)setPocketShadow:(id)arg1 ;
-(void)reloadDataByAppendingAtEnd:(bool)arg1 ;
-(unsigned long long)dummyCellsCount;
-(id)candidateResultSet;
-(void)setCandidateResultSet:(id)arg1 ;
-(void)selectAndScrollToCandidateAtIndexPath:(id)arg1 animated:(bool)arg2 ;
-(void)setCandidatesCollectionView:(id)arg1 ;
-(void)setRenderConfig:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 keyplane:(id)arg2 key:(id)arg3 ;
-(void)updateForKeyplane:(id)arg1 key:(id)arg2 ;
-(id)candidateList;
-(void)setLogButton:(id)arg1 ;
@end

