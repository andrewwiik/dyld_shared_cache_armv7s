/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface MPArtistGalleryRequest : NSObject {

	NSString* _artistName;
	NSObject<OS_dispatch_queue>* _queue;
	long long _storeArtistID;

}
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(long long)_storeArtistIDForArtistName:(id)arg1 ;
-(id)_galleryArtworkLinksForStoreArtistID:(long long)arg1 ;
-(id)_libraryMatchURL;
-(id)initWithArtistName:(id)arg1 ;
-(id)initWithStoreArtistID:(long long)arg1 ;
-(id)init;
-(void).cxx_destruct;
@end

