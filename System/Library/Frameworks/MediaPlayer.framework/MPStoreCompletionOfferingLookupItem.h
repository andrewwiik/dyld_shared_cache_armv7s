/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MPMediaQuery, NSNumber, NSString;

@interface MPStoreCompletionOfferingLookupItem : NSObject {

	bool _wantsArtwork;
	MPMediaQuery* _albumItemsQuery;
	unsigned long long _tokenID;
	/*^block*/ id _responseBlock;
	NSNumber* _storeLookupID;

}

@property (nonatomic,readonly) MPMediaQuery * albumItemsQuery;              //@synthesize albumItemsQuery=_albumItemsQuery - In the implementation block
@property (nonatomic,readonly) bool wantsArtwork;                           //@synthesize wantsArtwork=_wantsArtwork - In the implementation block
@property (nonatomic,readonly) unsigned long long tokenID;                  //@synthesize tokenID=_tokenID - In the implementation block
@property (nonatomic,readonly) id responseBlock;                            //@synthesize responseBlock=_responseBlock - In the implementation block
@property (nonatomic,readonly) NSNumber * storeLookupID;                    //@synthesize storeLookupID=_storeLookupID - In the implementation block
@property (nonatomic,readonly) NSString * storeLookupIDString; 
+(id)storeLookupIDForAlbumItemsQuery:(id)arg1 ;
-(/*^block*/ id)responseBlock;
-(bool)wantsArtwork;
-(id)_specificationForArtworkSizesToRequest;
-(id)lookupRequestForStorePlaylistIdentifier:(id)arg1 ;
-(id)storeLookupIDString;
-(id)initWithAlbumItemsQuery:(id)arg1 tokenID:(long long)arg2 wantsArtwork:(bool)arg3 responseBlock:(/*^block*/ id)arg4 ;
-(id)lookupRequestForAlbumWithRepresentativeItem:(id)arg1 ;
-(id)newLookupRequest;
-(id)albumItemsQuery;
-(unsigned long long)tokenID;
-(id)storeLookupID;
-(void).cxx_destruct;
@end
