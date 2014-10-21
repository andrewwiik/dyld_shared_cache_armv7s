/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _UIGestureRecognizerFailureMap : NSObject {

	NSMutableArray* _gestureRecognizers;
	char* _failureMap;
	int _unmetFailureRequirementCount;
	int _unmetFailureDependentCount;

}

@property (readonly) bool hasUnmetFailureRequirementsOrDependents; 
+(void)buildFailureMapForGestureRecognizer:(id)arg1 ;
+(void)buildFailureMapForGestureRecognizers:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)gestureRecognizerDeallocated:(id)arg1 ;
-(void)reloadFailureMap;
-(void)gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2 ;
-(bool)isGestureRecognizerWaitingForGestureRecognizersToFail:(id)arg1 ;
-(bool)hasUnmetFailureRequirementsOrDependents;
-(void)gestureRecognizerBecameDirty:(id)arg1 ;
-(void)rebuildFailureMap;
-(void)_gestureRecognizerFinished:(id)arg1 withEvent:(id)arg2 ;
-(void)_queueRecognizersForResetIfFinished;
-(id)initWithRelatedGestures:(id)arg1 ;
@end

