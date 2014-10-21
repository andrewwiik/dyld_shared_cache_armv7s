/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIKeyboardCandidateList <NSObject>
@optional
-(id)candidates;
-(void)setCandidates:(id)arg1 type:(int)arg2 inlineText:(id)arg3 inlineRect:(CGRect)arg4 maxX:(double)arg5 layout:(bool)arg6;
-(void)setInlineText:(id)arg1;
-(void)showCaret:(bool)arg1 gradually:(bool)arg2;
-(void)setCompletionContext:(id)arg1;
-(bool)handleNumberKey:(unsigned long long)arg1;
-(bool)handleTabKeyWithShift:(bool)arg1;
-(bool)hasNextPage;
-(bool)hasPreviousPage;
-(void)candidatesDidChange;
-(void)jumpToCompositions;
-(void)revealHiddenCandidates;
-(id)inlineText;
-(unsigned long long)viewOffsetForCandidateAtIndex:(unsigned long long)arg1;

@required
-(void)showCandidateAtIndex:(unsigned long long)arg1;
-(void)showNextCandidate;
-(bool)hasCandidates;
-(void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(CGRect)arg3 maxX:(double)arg4 layout:(bool)arg5;
-(id)statisticsIdentifier;
-(bool)isExtendedList;
-(bool)isHiddenCandidatesList;
-(void)setUIKeyboardCandidateListDelegate:(id)arg1;
-(void)showCandidate:(id)arg1;
-(void)showPreviousCandidate;
-(void)showNextPage;
-(void)showPreviousPage;
-(void)showNextRow;
-(void)showPreviousRow;
-(id)currentCandidate;
-(unsigned long long)currentIndex;
-(void)candidateAcceptedAtIndex:(unsigned long long)arg1;
-(id)keyboardBehaviors;
-(unsigned long long)selectedSortIndex;
@end

