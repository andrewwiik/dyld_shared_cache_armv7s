/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImageView, UIPanGestureRecognizer, NSArray, UIResponder, NSMutableArray, UIScrollView, NSMapTable, UIWindow;

@interface _UIResponderSelectionCursor : NSObject {

	UIImageView* _responderSelectionView;
	CGPoint _responderSelectionStartLocation;
	UIPanGestureRecognizer* _panResponderSelectionRecognizer;
	NSArray* _remoteGestures;
	bool _isFlick;
	double _timeOnTouchDown;
	double _consecutiveWithinRowAccumulator;
	bool _isKeepingCompetitiveFarDiagonalResiduals;
	UIResponder* _selectedItemOnTouchDown;
	NSMutableArray* _selectableItems;
	UIScrollView* _scrollingScrollView;
	CGPoint _scrollingOffset;
	CGPoint _activeFirstResponderScrollViewOffset;
	NSMapTable* _selectionThresholdDictionary;
	NSMapTable* _selectionAccumulationDictionary;
	bool _dirtyGeometry;
	UIWindow* _targetWindow;
	UIResponder* _mostLikelyToBeSelectedItem;
	UIScrollView* _activeFirstResponderScrollView;

}

@property (assign,nonatomic) UIWindow * targetWindow;                                    //@synthesize targetWindow=_targetWindow - In the implementation block
@property (nonatomic,retain) UIResponder * mostLikelyToBeSelectedItem;                   //@synthesize mostLikelyToBeSelectedItem=_mostLikelyToBeSelectedItem - In the implementation block
@property (nonatomic,retain) UIScrollView * activeFirstResponderScrollView;              //@synthesize activeFirstResponderScrollView=_activeFirstResponderScrollView - In the implementation block
+(void)initialize;
-(void)dealloc;
-(void)setTargetWindow:(id)arg1 ;
-(void)updateFirstResponder:(id)arg1 ;
-(void)_responderGeometryDidChange;
-(id)directionalGestureRecognizers;
-(void)loadFirstResponderScrollViewContentInDirection:(CGSize)arg1 ;
-(void)setSelectedItem:(id)arg1 ;
-(id)targetWindow;
-(void)reset;
-(void)panResponderSelection:(id)arg1 ;
-(void)moveSelection:(id)arg1 ;
-(void)scrollingToFirstResponderDidFinish:(id)arg1 ;
-(void)updateResponderSelectionRect;
-(id)activeFirstResponderScrollView;
-(void)setActiveFirstResponderScrollView:(id)arg1 ;
-(void)resetIfNecessary;
-(void)panTouchDown;
-(void)accumulateWithDelta:(CGPoint)arg1 velocity:(CGPoint)arg2 ;
-(void)panTouchUp;
-(id)responderForPoint:(CGPoint)arg1 possibleResponders:(id)arg2 ;
-(id)respondersInDirection:(CGSize)arg1 inView:(id)arg2 ;
-(void)updateResponderSelectionWithPoint:(CGPoint)arg1 possibleResponders:(id)arg2 ;
-(CGPoint)centerForResponder:(id)arg1 ;
-(double)selectionAccumulationForResponder:(id)arg1 ;
-(id)possibleResponders;
-(void)setSelectionAccumulation:(double)arg1 forResponder:(id)arg2 ;
-(bool)inSelectedRow:(id)arg1 ;
-(void)keepSecondaryResidualsCompetitiveTo:(id)arg1 ;
-(double)horizontalSpacingFromItem:(id)arg1 ;
-(double)verticalSpacingFromItem:(id)arg1 ;
-(void)setMostLikelyToBeSelectedItem:(id)arg1 ;
-(id)itemsInDirectionOfVector:(CGPoint)arg1 withConeOfDegrees:(double)arg2 fromItem:(id)arg3 ;
-(void)longFlick;
-(void)setSelectionThreshold:(double)arg1 forResponder:(id)arg2 ;
-(double)selectionThresholdForResponder:(id)arg1 ;
-(void)moveResponderSelectionInDirection:(CGSize)arg1 ;
-(id)mostLikelyToBeSelectedItem;
@end

