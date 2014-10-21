/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, CLLocation, NSMutableDictionary;

@interface SSVLoadNearbyAppsOperation : NSOperation {

	NSString* _baseURLString;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	CLLocation* _location;
	NSMutableDictionary* _parameters;
	/*^block*/ id _responseBlock;
	NSString* _storeFrontSuffix;
	NSString* _userAgent;

}

@property (readonly) CLLocation * location;                                 //@synthesize location=_location - In the implementation block
@property (copy) NSString * pointOfInterestIdentifier; 
@property (copy) NSString * pointOfInterestProviderIdentifier; 
@property (copy) NSString * pointOfInterestProviderURL; 
@property (copy) id responseBlock; 
@property (copy) NSString * storeFrontSuffix; 
@property (copy) NSString * userAgent; 
-(/*^block*/ id)responseBlock;
-(void)setResponseBlock:(/*^block*/ id)arg1 ;
-(void)main;
-(id)location;
-(void).cxx_destruct;
-(void)setUserAgent:(id)arg1 ;
-(void)setStoreFrontSuffix:(id)arg1 ;
-(id)storeFrontSuffix;
-(id)_storeFrontSuffix;
-(id)_lookupWithRequest:(id)arg1 error:(id*)arg2 ;
-(id)initWithBaseURL:(id)arg1 location:(id)arg2 ;
-(id)pointOfInterestIdentifier;
-(id)pointOfInterestProviderIdentifier;
-(id)pointOfInterestProviderURL;
-(void)setPointOfInterestIdentifier:(id)arg1 ;
-(void)setPointOfInterestProviderIdentifier:(id)arg1 ;
-(void)setPointOfInterestProviderURL:(id)arg1 ;
-(id)userAgent;
@end
