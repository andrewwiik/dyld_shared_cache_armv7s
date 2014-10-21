/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIKeyboardCandidateList.h>

@class NSString, NSArray, NSMutableArray, UIView, TIKeyboardCandidateResultSet;

@interface UIAutocorrectInlinePrompt : UIView <UIKeyboardCandidateList> {

	CGRect m_originalTypedTextRect;
	NSString* m_typedText;
	NSString* m_correction;
	NSArray* m_usageTrackingTypes;
	NSMutableArray* m_typedTextViews;
	UIView* m_correctionView;
	UIView* m_correctionAnimationView;
	UIView* m_typedTextAnimationView;
	UIView* m_correctionShadowView;
	bool m_fits;
	bool m_mouseDown;
	id m_delegate;
	long long m_index;
	int m_promptTextType;
	double m_originalTypedTextRectCorrectionAmount;
	double m_maxX;
	bool _showHiddenCandidatesOnly;
	unsigned m_usageTrackingMask;
	TIKeyboardCandidateResultSet* _candidateResultSet;

}

@property (assign,nonatomic) unsigned usageTrackingMask; 
@property (nonatomic,readonly) TIKeyboardCandidateResultSet * candidates; 
@property (nonatomic,retain) TIKeyboardCandidateResultSet * candidateResultSet;              //@synthesize candidateResultSet=_candidateResultSet - In the implementation block
@property (assign,nonatomic) bool showHiddenCandidatesOnly;                                  //@synthesize showHiddenCandidatesOnly=_showHiddenCandidatesOnly - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(bool)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(bool)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
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
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(bool)arg6 ;
-(void)candidatesDidChange;
-(void)revealHiddenCandidates;
-(id)inlineText;
-(void)setSelectedItem:(unsigned long long)arg1 ;
-(int)textEffectsVisibilityLevel;
-(id)candidateResultSet;
-(void)setCandidateResultSet:(id)arg1 ;
-(unsigned long long)index;
-(bool)showHiddenCandidatesOnly;
-(void)setShowHiddenCandidatesOnly:(bool)arg1 ;
-(unsigned)usageTrackingMask;
-(id)activeCandidateList;
-(void)setUsageTrackingMask:(unsigned)arg1 ;
-(void)setCorrection:(id)arg1 typedText:(id)arg2 inRect:(CGRect)arg3 maxX:(double)arg4 ;
-(void)addTypedTextRect:(CGRect)arg1 ;
-(bool)prepareForAnimation:(CGRect)arg1 ;
-(id)typedTextView;
-(id)correctionView;
-(id)correctionAnimationView;
-(id)correctionShadowView;
-(id)typedText;
-(id)correction;
-(void)removePromptSubviews;
-(void)setCandidateObject:(id)arg1 candidateSet:(id)arg2 type:(int)arg3 typedText:(id)arg4 inRect:(CGRect)arg5 maxX:(double)arg6 showHiddenCandidatesOnly:(bool)arg7 ;
-(unsigned long long)numberOfShownItems;
-(void)setCandidateSet:(id)arg1 showHiddenCandidatesOnly:(bool)arg2 ;
-(double)maximumCandidateWidth;
-(void)_candidateSelected:(id)arg1 ;
-(CGRect)horizontallySquishedCorrectionFrame:(CGRect)arg1 ;
-(CGRect)correctionFrameFromDesiredFrame:(CGRect)arg1 textHeight:(int)arg2 withExtraGap:(double)arg3 ;
-(bool)isAcceptableTextEffectsFrame:(CGRect)arg1 afterScrollBy:(double)arg2 ;
-(void)dismiss;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(CGRect)shadowFrameForFrame:(CGRect)arg1 ;
-(id)typedTextAnimationView;
@end

