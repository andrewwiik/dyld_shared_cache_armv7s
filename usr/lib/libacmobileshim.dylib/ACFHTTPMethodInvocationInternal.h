/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSRecursiveLock, NSMutableDictionary, NSURLConnection, NSMutableData;

@interface ACFHTTPMethodInvocationInternal : NSObject {

	NSRecursiveLock* _invocationGuard;
	NSRecursiveLock* _schedulingGuard;
	NSMutableDictionary* _runLoops;
	NSURLConnection* _connection;
	bool _isFinished;
	NSMutableData* _receivedDataAccumulator;

}

@property (retain) NSRecursiveLock * invocationGuard;                    //@synthesize invocationGuard=_invocationGuard - In the implementation block
@property (retain) NSRecursiveLock * schedulingGuard;                    //@synthesize schedulingGuard=_schedulingGuard - In the implementation block
@property (retain) NSMutableDictionary * runLoops;                       //@synthesize runLoops=_runLoops - In the implementation block
@property (retain) NSURLConnection * connection;                         //@synthesize connection=_connection - In the implementation block
@property (assign) bool isFinished;                                      //@synthesize isFinished=_isFinished - In the implementation block
@property (retain) NSMutableData * receivedDataAccumulator;              //@synthesize receivedDataAccumulator=_receivedDataAccumulator - In the implementation block
-(void)setIsFinished:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(id)connection;
-(bool)isFinished;
-(void)setConnection:(id)arg1 ;
-(void)finalize;
-(id)invocationGuard;
-(id)runLoops;
-(void)setReceivedDataAccumulator:(id)arg1 ;
-(id)schedulingGuard;
-(id)receivedDataAccumulator;
-(void)setInvocationGuard:(id)arg1 ;
-(void)setSchedulingGuard:(id)arg1 ;
-(void)setRunLoops:(id)arg1 ;
@end
