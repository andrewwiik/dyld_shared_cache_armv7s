/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AXRuntime/AXElementGrouper.h>

@interface AXVisualElementGrouper : AXElementGrouper {

	double _maximumNeighbourDistance;
	double _maximumDistanceForAligningEdges;

}

@property (assign,nonatomic) double maximumNeighbourDistance;                     //@synthesize maximumNeighbourDistance=_maximumNeighbourDistance - In the implementation block
@property (assign,nonatomic) double maximumDistanceForAligningEdges;              //@synthesize maximumDistanceForAligningEdges=_maximumDistanceForAligningEdges - In the implementation block
-(id)init;
-(id)_groupablesForItems:(id)arg1 ;
-(id)initWithPadInterfaceHeuristics:(bool)arg1 ;
-(void)setMaximumNeighbourDistance:(double)arg1 ;
-(void)setMaximumDistanceForAligningEdges:(double)arg1 ;
-(double)maximumDistanceForAligningEdges;
-(double)maximumNeighbourDistance;
@end

