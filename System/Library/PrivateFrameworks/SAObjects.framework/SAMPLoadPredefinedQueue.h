/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (assign,nonatomic) int mediaItemType; 
@property (assign,nonatomic) bool shouldShuffle; 
+(id)loadPredefinedQueue;
+(id)loadPredefinedQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(bool)shouldShuffle;
-(id)encodedClassName;
-(bool)requiresResponse;
-(void)setShouldShuffle:(bool)arg1 ;
-(int)mediaItemType;
-(void)setMediaItemType:(int)arg1 ;
@end

