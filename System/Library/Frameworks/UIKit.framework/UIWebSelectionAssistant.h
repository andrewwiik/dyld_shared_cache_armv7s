/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UIWebDocumentView, UIWebSelectionView, UILongPressGestureRecognizer, UITapAndAHalfRecognizer, UIWebSelection;

@interface UIWebSelectionAssistant : NSObject <UIGestureRecognizerDelegate> {

	UIWebDocumentView* _webView;
	UIWebSelectionView* _selectionView;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	UITapAndAHalfRecognizer* _tapAndAHalfGestureRecognizer;
	bool _enabled;

}

@property (nonatomic,readonly) UIWebSelection * selection; 
@property (nonatomic,readonly) UIWebSelectionView * selectionView; 
@property (nonatomic,readonly) CGRect selectionFrame; 
@property (assign,nonatomic) bool enabled; 
-(void)dealloc;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setEnabled:(bool)arg1 ;
-(id)selectionView;
-(id)selection;
-(void)selectionChanged;
-(void)setGestureRecognizers;
-(void)resignedFirstResponder;
-(void)clearSelection;
-(void)layoutChangedByScrolling:(bool)arg1 ;
-(void)willStartScrollingOverflow;
-(void)didEndScrollingOverflow;
-(void)scaleChanged;
-(CGRect)selectionFrame;
-(id)initWithWebView:(id)arg1 ;
-(void)willStartScrollingOrZoomingPage;
-(void)didEndScrollingOrZoomingPage;
-(bool)isSelectionGestureRecognizer:(id)arg1 ;
-(bool)enabled;
-(void)willRotate:(id)arg1 ;
-(void)didRotate:(id)arg1 ;
-(void)makeWebSelection:(id)arg1 ;
-(void)hideCallout;
-(void)tap:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 fromView:(id)arg3 ;
@end

