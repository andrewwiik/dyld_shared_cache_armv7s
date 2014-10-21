/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GEOGeocodeProvider.h>
#import <GeoServices/PBRequesterDelegate.h>

@class GEORequester;

@interface GEOVoltaireGeocodeProvider : GEOGeocodeProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	bool _isForwardGeocodeRequest;
	bool _isBatchRequest;
	bool _cancelled;

}
+(void)setUsePersistentConnection:(bool)arg1 ;
+(id)providerName;
+(id)forwardGeocoderURL;
+(id)reverseGeocoderURL;
+(id)batchReverseGeocoderURL;
+(unsigned short)provider;
-(void)dealloc;
-(void)cancel;
-(void)requesterDidFinish:(id)arg1 ;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)reverseGeocode:(id)arg1 success:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/ id)arg2 error:(/*^block*/ id)arg3 ;
-(id)newRequester:(id)arg1 ;
-(void)_batchRequesterDidFinish:(id)arg1 ;
-(void)_singleRequesterDidFinish:(id)arg1 ;
-(void)forwardGeocode:(id)arg1 success:(/*^block*/ id)arg2 networkActivity:(/*^block*/ id)arg3 error:(/*^block*/ id)arg4 ;
@end

