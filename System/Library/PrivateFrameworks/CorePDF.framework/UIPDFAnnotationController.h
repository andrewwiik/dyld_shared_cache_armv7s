/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol NSObjectUIPDFAnnotationControllerDelegate;
@class UIPDFPageView, UIPDFMarkupAnnotation, CALayer, UIColor, UIPDFAnnotation;

@interface UIPDFAnnotationController : NSObject <UIGestureRecognizerDelegate> {

	UIPDFPageView* _pageView;
	int _lock;
	CGPoint _startPoint;
	bool _moving;
	UIPDFMarkupAnnotation* _currentAnnotation;
	SCD_Struct_CP14 _initialRange;
	bool _tracking;
	CALayer* _drawingSurface;
	<NSObject><UIPDFAnnotationControllerDelegate>* _delegate;
	CGSize _cachedMarginNoteSize;
	bool makeUnderlineAnnotation;
	bool _allowEditing;
	UIColor* _currentColor;

}

@property (nonatomic,readonly) UIPDFPageView * pageView;                                            //@synthesize pageView=_pageView - In the implementation block
@property (nonatomic,retain) UIPDFAnnotation * currentAnnotation;                                   //@synthesize currentAnnotation=_currentAnnotation - In the implementation block
@property (assign,nonatomic) bool allowEditing;                                                     //@synthesize allowEditing=_allowEditing - In the implementation block
@property (assign,nonatomic) UIColor * currentColor;                                                //@synthesize currentColor=_currentColor - In the implementation block
@property (assign,nonatomic) bool makeUnderlineAnnotation; 
@property (assign,nonatomic) CALayer * drawingSurface;                                              //@synthesize drawingSurface=_drawingSurface - In the implementation block
@property (assign,nonatomic) <NSObject><UIPDFAnnotationControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) bool tracking;                                                       //@synthesize tracking=_tracking - In the implementation block
+(id)newAnnotation:(CGPDFDictionaryRef)arg1 type:(const char*)arg2 ;
+(bool)pageHasAnnotations:(id)arg1 ;
+(CGImageRef)newMaskImage:(CGPDFPageRef)arg1 size:(CGSize)arg2 ;
-(void)setAllowEditing:(bool)arg1 ;
-(bool)allowEditing;
-(void)dealloc;
-(void)setNeedsDisplay;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setView:(id)arg1 ;
-(void)lock;
-(void)unlock;
-(id)pageView;
-(id)marginNoteImage:(id)arg1 ;
-(id)initWithPageView:(id)arg1 ;
-(void)setDrawingSurface:(id)arg1 ;
-(void)layoutAnnotationViews:(id)arg1 ;
-(void)drawAnnotations:(CGContextRef)arg1 ;
-(bool)willDoSomethingWithTap:(CGPoint)arg1 ;
-(id)currentAnnotation;
-(bool)willTrackAtPoint:(CGPoint)arg1 ;
-(void)startTracking:(CGPoint)arg1 ;
-(void)tracking:(CGPoint)arg1 ;
-(bool)madeInstantAnnotation;
-(void)endTrackingAtPoint:(CGPoint)arg1 ;
-(void)doubleTapRecognized:(id)arg1 ;
-(bool)isLinkAnnotationAt:(CGPoint)arg1 ;
-(bool)annotationBriefPressRecognized:(id)arg1 ;
-(bool)annotationLongPressRecognized:(id)arg1 ;
-(bool)annotationSingleTapRecognized:(id)arg1 ;
-(void)addLinkAnnotationViews;
-(bool)willHandleTouchGestureAtPoint:(CGPoint)arg1 ;
-(bool)linkAnnotationShouldBegin:(id)arg1 ;
-(void)setMakeUnderlineAnnotation:(bool)arg1 ;
-(void)_addLinkAnnotationViewFor:(id)arg1 ;
-(void)setSurfacePosition:(id)arg1 ;
-(void)annotationTapRecognized:(id)arg1 ;
-(void)linkPressRecognized:(id)arg1 ;
-(void)_addRecognizers:(id)arg1 ;
-(void)addDrawingSurface:(id)arg1 view:(id)arg2 ;
-(void)_addAnnotationViewFor:(id)arg1 ;
-(CGSize)marginNoteImageSize;
-(bool)isSelection:(CGPDFSelectionRef)arg1 equalTo:(CGPDFSelectionRef)arg2 ;
-(bool)intersects:(CGPDFSelectionRef)arg1 with:(CGPDFSelectionRef)arg2 ;
-(void)_initialRange:(CGPoint)arg1 ;
-(bool)trackMoved:(CGPoint)arg1 ;
-(bool)makeUnderlineAnnotation;
-(id)currentColor;
-(void)mergeSelectionOfAnnotation:(id)arg1 ;
-(id)_linkAnnotationViewAt:(CGPoint)arg1 ;
-(id)linkAnnotationAt:(CGPoint)arg1 ;
-(id)annotationAt:(CGPoint)arg1 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toSurfaceLayer:(id)arg2 ;
-(CGRect)convertRect:(CGRect)arg1 toSurfaceLayer:(id)arg2 ;
-(void)hostViewDidScroll;
-(void)didEndTrackingAtPoint:(CGPoint)arg1 ;
-(id)annotatePageSelection;
-(void)copyAttributesOf:(id)arg1 to:(id)arg2 ;
-(CGImageRef)newHighlightMaskImageFor:(CGRect)arg1 ;
-(CGImageRef)underlineImageFor:(CGRect)arg1 ;
-(void)setCurrentAnnotation:(id)arg1 ;
-(id)drawingSurface;
-(bool)tracking;
-(void)setCurrentColor:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
@end

