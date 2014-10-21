/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMapTable, NSLock;

@interface GEORPProblemRequester : NSObject {

	NSMapTable* _pendingRequests;
	NSLock* _pendingRequestsLock;
	NSMapTable* _providers;

}
+(id)sharedRequester;
-(void)dealloc;
-(id)init;
-(void)registerProvider:(Class)arg1 ;
-(void)cancelRequest:(id)arg1 ;
-(Class)classForProviderID:(short)arg1 ;
-(void)startSubmissionRequest:(id)arg1 finished:(/*^block*/ id)arg2 networkActivity:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
-(void)startStatusRequest:(id)arg1 finished:(/*^block*/ id)arg2 networkActivity:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
-(void)startNotificationAvailabilityRequest:(id)arg1 finished:(/*^block*/ id)arg2 networkActivity:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
@end

