/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITextInteractionAssistant, UITextSelection, NSTimer, UIView, UITextRangeView, NSArray;

@interface UITextSelectionView : UIView {

	UITextInteractionAssistant* m_interactionAssistant;
	UITextSelection* m_selection;
	NSTimer* m_caretTimer;
	UIView* m_caretView;
	UITextRangeView* m_rangeView;
	bool m_caretBlinks;
	bool m_caretShowingNow;
	bool m_visible;
	bool m_activated;
	bool m_wasShowingCommands;
	bool m_delayShowingCommands;
	bool m_dictationReplacementsMode;
	int m_showingCommandsCounter;
	NSArray* m_replacements;
	bool m_deferSelectionCommands;
	CFRunLoopObserverRef m_observer;

}

@property (nonatomic,readonly) UITextInteractionAssistant * interactionAssistant; 
@property (nonatomic,readonly) UITextSelection * selection; 
@property (assign,nonatomic) bool caretBlinks; 
@property (assign,nonatomic) bool visible; 
@property (nonatomic,readonly) bool selectionCommandsShowing; 
@property (nonatomic,retain) NSArray * replacements; 
@property (nonatomic,readonly) UIView * caretView; 
@property (nonatomic,readonly) UITextRangeView * rangeView; 
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(void)invalidate;
-(id)interactionAssistant;
-(void)deferredUpdateSelectionRects;
-(id)selection;
-(void)updateSelectionWithDocumentPoint:(CGPoint)arg1 ;
-(void)updateSelectionRects;
-(void)setVisible:(bool)arg1 ;
-(void)deactivate;
-(void)selectionChanged;
-(void)detach;
-(void)setCaretBlinks:(bool)arg1 ;
-(void)activate;
-(bool)caretBlinks;
-(bool)visible;
-(void)startCaretBlinkIfNeeded;
-(void)layoutChangedByScrolling:(bool)arg1 ;
-(id)scrollView;
-(id)initWithInteractionAssistant:(id)arg1 ;
-(void)configureForHighlightMode;
-(void)hideSelectionCommands;
-(void)showSelectionCommands;
-(void)configureForSelectionMode;
-(void)cancelDelayedCommandRequests;
-(void)updateBaseIsStartWithDocumentPoint:(CGPoint)arg1 ;
-(id)rangeView;
-(void)updateSelectionDots;
-(void)showSelectionCommandsAfterDelay:(double)arg1 ;
-(bool)selectionCommandsShowing;
-(void)showReplacementsWithGenerator:(/*^block*/ id)arg1 forDictation:(bool)arg2 afterDelay:(double)arg3 ;
-(CGRect)selectionBoundingBox;
-(void)textSelectionViewActivated:(id)arg1 ;
-(void)selectionWillScroll:(id)arg1 ;
-(void)selectionDidScroll:(id)arg1 ;
-(void)scaleWillChange:(id)arg1 ;
-(void)scaleDidChange:(id)arg1 ;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(void)windowDidResignOrBecomeKey;
-(void)inputViewWillMove;
-(void)inputViewDidMove;
-(void)inputViewWillAnimate;
-(void)inputViewDidAnimate;
-(void)viewAnimate:(id)arg1 ;
-(void)appearOrFadeIfNecessary;
-(bool)affectedByScrollerNotification:(id)arg1 ;
-(void)showCalloutBarAfterDelay:(double)arg1 ;
-(void)hideSelectionCommandsAfterDelay:(double)arg1 ;
-(void)inputViewWillChange;
-(void)inputViewDidChange;
-(bool)shouldBeVisible;
-(void)clearCaret;
-(void)clearCaretBlinkTimer;
-(void)clearRange;
-(void)installIfNecessary;
-(id)caretView;
-(void)showCaret:(int)arg1 ;
-(void)touchCaretBlinkTimer;
-(void)showCommandsWithReplacements:(id)arg1 ;
-(CGRect)clippedTargetRect:(CGRect)arg1 ;
-(bool)updateCalloutBarRects:(id)arg1 effectsWindow:(id)arg2 ;
-(void)setReplacements:(id)arg1 ;
-(id)replacements;
-(void)deferredUpdateSelectionCommands;
-(void)calculateAndShowReplacements:(/*^block*/ id)arg1 ;
-(void)hideCaret:(int)arg1 ;
-(void)caretBlinkTimerFired:(id)arg1 ;
-(void)updateSelectionCommands;
-(void)prepareForMagnification;
-(void)doneMagnifying;
-(void)updateSelectionRectsIfNeeded;
-(void)configureForReplacementMode;
@end

