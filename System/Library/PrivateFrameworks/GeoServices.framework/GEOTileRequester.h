/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol GEOTileRequesterDelegate;
#import <GeoServices/GeoServices-Structs.h>
@class GEOTileKeyList, NSThread, NSString, NSData;

@interface GEOTileRequester : NSObject {

	GEOTileKeyList* _keyList;
	<GEOTileRequesterDelegate>* _delegate;
	id _context;
	NSThread* _thread;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSData* _auditToken;
	bool _requireWiFi;

}

@property (nonatomic,readonly) GEOTileKeyList * keyList;                         //@synthesize keyList=_keyList - In the implementation block
@property (nonatomic,retain) <GEOTileRequesterDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id context;                                         //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSThread * thread;                                  //@synthesize thread=_thread - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                        //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * bundleVersion;                           //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,retain) NSData * auditToken;                                //@synthesize auditToken=_auditToken - In the implementation block
@property (assign,nonatomic) bool requireWiFi;                                   //@synthesize requireWiFi=_requireWiFi - In the implementation block
+(unsigned long long)expiringTilesetsCount;
+(SCD_Struct_GE46*)newExpiringTilesets;
+(bool)skipNetworkForKeysWhenPreloading:(id)arg1 ;
+(unsigned char)tileProviderIdentifier;
-(id)bundleVersion;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)bundleIdentifier;
-(id)context;
-(void)setContext:(id)arg1 ;
-(void)cancel;
-(void)start;
-(id)auditToken;
-(id)initWithKeyList:(id)arg1 ;
-(void)setRequireWiFi:(bool)arg1 ;
-(void)setAuditToken:(id)arg1 ;
-(bool)requireWiFi;
-(id)thread;
-(void)setThread:(id)arg1 ;
-(id)keyList;
-(unsigned)tileSetForKey:(const GEOTileKey*)arg1 ;
-(void)setBundleIdentifier:(id)arg1 ;
-(void)setBundleVersion:(id)arg1 ;
@end

