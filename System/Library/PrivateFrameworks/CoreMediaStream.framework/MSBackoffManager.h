/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@protocol MSBackoffManagerDelegate;
@class NSDate;

@interface MSBackoffManager : NSObject <NSCoding> {

	<MSBackoffManagerDelegate>* _delegate;
	double _initialInterval;
	double _backoffFactor;
	double _randomizeFactor;
	double _maxBackoffInterval;
	double _currentInterval;
	NSDate* _nextExpiryDate;
	NSDate* _retryAfterDate;

}

@property (assign,nonatomic) <MSBackoffManagerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double initialInterval;                             //@synthesize initialInterval=_initialInterval - In the implementation block
@property (assign,nonatomic) double backoffFactor;                               //@synthesize backoffFactor=_backoffFactor - In the implementation block
@property (assign,nonatomic) double randomizeFactor;                             //@synthesize randomizeFactor=_randomizeFactor - In the implementation block
@property (assign,nonatomic) double maxBackoffInterval;                          //@synthesize maxBackoffInterval=_maxBackoffInterval - In the implementation block
@property (assign,nonatomic) double currentInterval;                             //@synthesize currentInterval=_currentInterval - In the implementation block
@property (nonatomic,retain) NSDate * nextExpiryDate;                            //@synthesize nextExpiryDate=_nextExpiryDate - In the implementation block
@property (nonatomic,retain) NSDate * retryAfterDate;                            //@synthesize retryAfterDate=_retryAfterDate - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)reset;
-(void).cxx_destruct;
-(void)_complainAboutMissingKeyInArchive:(id)arg1 ;
-(id)initWithInitialInterval:(double)arg1 backoffFactor:(double)arg2 randomizeFactor:(double)arg3 maxBackoffInterval:(double)arg4 retryAfterDate:(id)arg5 ;
-(void)setCurrentInterval:(double)arg1 ;
-(id)nextExpiryDate;
-(void)didReceiveRetryAfterDate:(id)arg1 ;
-(void)backoff;
-(id)copyParameters;
-(double)initialInterval;
-(void)setInitialInterval:(double)arg1 ;
-(double)backoffFactor;
-(void)setBackoffFactor:(double)arg1 ;
-(double)randomizeFactor;
-(void)setRandomizeFactor:(double)arg1 ;
-(double)maxBackoffInterval;
-(void)setMaxBackoffInterval:(double)arg1 ;
-(double)currentInterval;
-(void)setNextExpiryDate:(id)arg1 ;
-(id)retryAfterDate;
-(void)setRetryAfterDate:(id)arg1 ;
@end

