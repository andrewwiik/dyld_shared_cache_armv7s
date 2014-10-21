/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequest.h>

@protocol OS_dispatch_semaphore;
@class GEOZilchDecoder, NSError, NSObject;

@interface GEOZilchDecoderRequest : GEOMapRequest {

	unique_ptr<geo::ZilchMapModel, std::__1::default_delete<geo::ZilchMapModel> >* _mapModel;
	GEOZilchDecoder* _decoder;
	shared_ptr<zilch::Message>* _message;
	/*^block*/ id _pathHandler;
	/*^block*/ id _errorHandler;
	NSError* _firstTileLoadingError;
	NSObject<OS_dispatch_semaphore>* _finishedSemaphore;

}

@property (copy) id pathHandler;               //@synthesize pathHandler=_pathHandler - In the implementation block
@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(/*^block*/ id)errorHandler;
-(void)dealloc;
-(void)cancel;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)setErrorHandler:(/*^block*/ id)arg1 ;
-(id)initWithDecoder:(id)arg1 message:(shared_ptr<zilch::Message>*)arg2 ;
-(void)decodeWithPathHandler:(/*^block*/ id)arg1 errorHandler:(/*^block*/ id)arg2 ;
-(/*^block*/ id)pathHandler;
-(void)setPathHandler:(/*^block*/ id)arg1 ;
-(void)_finishedDecodingWithPath:(Path<std::__1::shared_ptr<geo::MapEdge> >*)arg1 ;
@end

