/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MFMultiDragDestination;
@class NSMutableArray, NSMutableDictionary, NSArray, UIView, UIGestureRecognizer, UIWindow, MFGobblerGestureRecognizer, NSTimer;

@interface MFMultiDragManager : NSObject <UIGestureRecognizerDelegate> {

	NSMutableArray* _dragContextValues;
	NSMutableArray* _dragDestinations;
	NSMutableArray* _dragSources;
	NSMutableDictionary* _gestureRecognizersForSource;
	NSMutableDictionary* _sourceForGestureRecognizer;
	NSArray* _draggedItems;
	UIView* _draggedItemsContainerView;
	NSMutableDictionary* _draggedItemsIndexToViewRepresentation;
	<MFMultiDragDestination>* _currentDestination;
	UIGestureRecognizer* _currentGestureBeingProcessed;
	UIWindow* _dragWindow;
	MFGobblerGestureRecognizer* _gobblerGestureRecognizer;
	NSTimer* _scrollTimer;
	CGPoint _offsetCenterOfDraggedView;
	CGPoint _previousGestureLocation;
	double _timeOfLastBigUpdate;
	CGRect _draggedItemOriginalFrame;
	bool _dragWasSuccessful;
	bool _scrollingForDrag;

}
+(id)sharedInstance;
-(void)addDragContext:(id)arg1 ;
-(void)removeDragContext:(id)arg1 ;
-(void)_handleLongPress:(id)arg1 ;
-(void)enumerateDragContextsUsingBlock:(/*^block*/ id)arg1 ;
-(void)_processGestureUpdate;
-(void)_cleanUpAfterDragCompleted;
-(void)_beginGobblingAllDisruptiveEventsForWindow:(id)arg1 ;
-(void)_scrollViewIfNecessary;
-(void)_longPressGestureMoved:(id)arg1 ;
-(void)_longPressGestureBegan:(id)arg1 ;
-(void)_longPressGestureEnded:(id)arg1 ;
-(void)addDragDestination:(id)arg1 ;
-(void)removeDragDestination:(id)arg1 ;
-(void)addDragSource:(id)arg1 ;
-(void)removeDragSource:(id)arg1 ;
-(void)cancelCurrentDragOperation;
-(void)dealloc;
-(id)init;
-(bool)gestureRecognizerShouldBegin:(id)arg1 ;
-(bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
@end
