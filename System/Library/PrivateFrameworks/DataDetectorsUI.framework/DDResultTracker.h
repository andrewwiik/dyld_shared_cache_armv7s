/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
@class NSMutableArray;

@interface DDResultTracker : NSObject {

	unsigned countRemainingByCategory[6];
	unsigned totalCountRemaining;
	bool sortByProximity;
	unsigned long long referenceResultLocation;
	unsigned long long maximumDistanceForEmails;
	unsigned long long maximumDistance;
	DDResultRef existingAddressResult;
	NSMutableArray* resultsBefore;
	NSMutableArray* resultsAfter;
	DDResultRef referenceResult;

}

@property (readonly) unsigned totalCountRemaining; 
@property (assign) unsigned long long maximumDistanceForEmails; 
@property (assign) unsigned long long maximumDistance; 
-(void)dealloc;
-(id)results;
-(id)initWithReferenceResult:(DDResultRef)arg1 ;
-(bool)addResultIfAppropriate:(DDResultRef)arg1 ;
-(unsigned)totalCountRemaining;
-(unsigned long long)maximumDistanceForEmails;
-(void)setMaximumDistanceForEmails:(unsigned long long)arg1 ;
-(unsigned long long)maximumDistance;
-(void)setMaximumDistance:(unsigned long long)arg1 ;
@end

