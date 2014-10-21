/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetResourceLoadingDataRequestInternal;

@interface AVAssetResourceLoadingDataRequest : NSObject {

	AVAssetResourceLoadingDataRequestInternal* _dataRequest;

}

@property (nonatomic,readonly) long long requestedOffset; 
@property (nonatomic,readonly) long long requestedLength; 
@property (nonatomic,readonly) long long currentOffset; 
-(long long)requestedOffset;
-(long long)requestedLength;
-(long long)currentOffset;
-(id)_loadingRequest;
-(id)initWithLoadingRequest:(id)arg1 requestedOffset:(long long)arg2 requestedLength:(long long)arg3 canSupplyIncrementalDataImmediately:(bool)arg4 ;
-(void)respondWithData:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)finalize;
@end

