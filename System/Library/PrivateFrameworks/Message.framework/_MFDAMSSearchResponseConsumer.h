/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/_MFDAMSBasicConsumer.h>
#import <AddressBook/DASearchQueryConsumer.h>

@class NSDate, MFConditionLock, NSMutableArray, NSArray;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer> {

	NSDate* latestDateToAdd;
	MFConditionLock* doneCondition;
	double timeReceivedLastResponse;
	unsigned totalCount;
	NSMutableArray* matchingRemoteIDs;

}

@property (nonatomic,retain) NSDate * latestDateToAdd; 
@property (nonatomic,readonly) NSArray * matchingRemoteIDs; 
-(void)dealloc;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(bool)handleItems:(id)arg1 ;
-(void)waitUntilDone;
-(bool)waitUntilDoneBeforeDate:(id)arg1 ;
-(void)setLatestDateToAdd:(id)arg1 ;
-(void)resetDoneCondition;
-(id)matchingRemoteIDs;
-(void)searchQuery:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchQuery:(id)arg1 finishedWithError:(id)arg2 ;
-(void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2 ;
-(id)latestDateToAdd;
@end

