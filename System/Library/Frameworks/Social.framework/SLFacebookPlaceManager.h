/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/CLLocationManagerDelegate.h>
#import <Social/SLPlaceDataSource.h>

@protocol SLPlaceDataSourceDelegate;
@class CLLocationManager, NSMutableData, NSHTTPURLResponse, NSURLConnection, CLLocation, NSObject, ACAccount;

@interface SLFacebookPlaceManager : NSObject <CLLocationManagerDelegate, SLPlaceDataSource> {

	CLLocationManager* _locationManager;
	double _timeout;
	bool _isCanceled;
	bool _isUpdatingLocation;
	bool _disableTimeout;
	NSMutableData* _placeData;
	NSHTTPURLResponse* _urlResponse;
	NSURLConnection* _urlConnection;
	/*^block*/ id _queuedSearchRequest;
	CLLocation* _currentLocation;
	NSObject<SLPlaceDataSourceDelegate>* _delegate;
	ACAccount* _account;

}

@property (readonly) double currentLocationAccuracy; 
@property (retain) CLLocation * currentLocation;                                //@synthesize currentLocation=_currentLocation - In the implementation block
@property (__weak) NSObject<SLPlaceDataSourceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) ACAccount * account;                                         //@synthesize account=_account - In the implementation block
-(id)currentLocation;
-(void)setCurrentLocation:(id)arg1 ;
-(void)locationDidTimeout;
-(void)fetchPlaces;
-(void)cancelPlaceFetch;
-(void)fetchPlacesWithSearchString:(id)arg1 ;
-(void)_handleResponse:(id)arg1 error:(id)arg2 ;
-(double)distanceFromCurrentLocationToPlace:(id)arg1 ;
-(id)_placesArrayWithPlacesData:(id)arg1 ;
-(id)initWithLocationManager:(id)arg1 account:(id)arg2 desiredAccuracy:(double)arg3 timeout:(double)arg4 ;
-(double)currentLocationAccuracy;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void).cxx_destruct;
-(id)account;
-(void)setAccount:(id)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

