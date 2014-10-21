/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EKDayViewContentItem, EKUISingleDayTimelineLayoutPartition, NSMutableArray, NSArray;

@interface EKUISingleDayTimelineOccurrenceBucket : NSObject {

	EKDayViewContentItem* _temporaryOccurrenceAtBeginning;
	EKDayViewContentItem* _temporaryOccurrenceAtEnd;
	bool _useTemporaryFitnessLevel;
	bool _temporaryFitnessLevelRequiresCalculation;
	double _temporaryFitnessLevel;
	bool _originalFitnessLevelRequiresCalculation;
	double _originalFitnessLevel;
	bool _ignoreFirstOccurrenceInFitnessCalculations;
	bool _ignoreLastOccurrenceInFitnessCalculations;
	bool _isOnlyBucket;
	EKUISingleDayTimelineLayoutPartition* _correspondingPartition;
	NSMutableArray* _currentOccurrences;

}

@property (nonatomic,retain) EKUISingleDayTimelineLayoutPartition * correspondingPartition;              //@synthesize correspondingPartition=_correspondingPartition - In the implementation block
@property (nonatomic,readonly) NSArray * occurrences; 
@property (nonatomic,readonly) double fitnessLevel; 
@property (assign,nonatomic) bool isOnlyBucket;                                                          //@synthesize isOnlyBucket=_isOnlyBucket - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentOccurrences;                                        //@synthesize currentOccurrences=_currentOccurrences - In the implementation block
-(double)_calculateFitnessLevel;
-(id)correspondingPartition;
-(id)_occurrencesForFitnessLevel;
-(bool)isOnlyBucket;
-(id)initWithOccurrences:(id)arg1 correspondingPartition:(id)arg2 ;
-(double)fitnessLevel;
-(id)earliestOccurrence;
-(void)addOccurrenceTemporarilyToBeginning:(id)arg1 ;
-(void)addOccurrenceTemporarilyToEnd:(id)arg1 ;
-(void)removeOccurrenceAtBeginningTemporarily;
-(void)removeOccurrenceAtEndTemporarily;
-(void)revertTemporaryChanges;
-(void)makeTemporaryChangesPermanent;
-(void)stampFramesOntoOccurrences;
-(void)setCorrespondingPartition:(id)arg1 ;
-(void)setIsOnlyBucket:(bool)arg1 ;
-(id)currentOccurrences;
-(void)setCurrentOccurrences:(id)arg1 ;
-(void).cxx_destruct;
-(id)occurrences;
@end

