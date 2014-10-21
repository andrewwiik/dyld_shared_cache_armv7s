/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOActiveTileSet : PBCodable <NSCopying> {

	SCD_Struct_GE73* _availableTiles;
	unsigned long long _availableTilesCount;
	unsigned long long _availableTilesSpace;
	NSString* _baseURL;
	NSString* _localizationURL;
	NSString* _multiTileURL;
	int _scale;
	NSMutableArray* _sentinelTiles;
	int _size;
	int _style;
	NSMutableArray* _supportedLanguages;
	unsigned _timeToLiveSeconds;
	unsigned _version;
	bool _multiTileURLUsesStatusCodes;
	SCD_Struct_GE52 _has;

}

@property (nonatomic,readonly) bool hasBaseURL; 
@property (nonatomic,retain) NSString * baseURL;                                    //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,readonly) bool hasMultiTileURL; 
@property (nonatomic,retain) NSString * multiTileURL;                               //@synthesize multiTileURL=_multiTileURL - In the implementation block
@property (assign,nonatomic) int style;                                             //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) int scale;                                             //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) int size;                                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned version;                                      //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) bool hasTimeToLiveSeconds; 
@property (assign,nonatomic) unsigned timeToLiveSeconds;                            //@synthesize timeToLiveSeconds=_timeToLiveSeconds - In the implementation block
@property (nonatomic,readonly) unsigned long long availableTilesCount; 
@property (nonatomic,readonly) SCD_Struct_GE73* availableTiles; 
@property (nonatomic,retain) NSMutableArray * sentinelTiles;                        //@synthesize sentinelTiles=_sentinelTiles - In the implementation block
@property (nonatomic,readonly) bool hasLocalizationURL; 
@property (nonatomic,retain) NSString * localizationURL;                            //@synthesize localizationURL=_localizationURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * supportedLanguages;                   //@synthesize supportedLanguages=_supportedLanguages - In the implementation block
@property (assign,nonatomic) bool hasMultiTileURLUsesStatusCodes; 
@property (assign,nonatomic) bool multiTileURLUsesStatusCodes;                      //@synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes - In the implementation block
-(bool)isAvailableForTileKey:(const GEOTileKey*)arg1 ;
-(id)bestLanguage;
-(void)_resetBestLanguage;
-(id)dataForGenericTileType:(int)arg1 ;
-(unsigned)minimumZoomLevelInRect:(SCD_Struct_GE48)arg1 ;
-(unsigned)maximumZoomLevelInRect:(SCD_Struct_GE48)arg1 ;
-(unsigned)largestZoomLevelLEQ:(unsigned)arg1 inRect:(SCD_Struct_GE48)arg2 ;
-(void)dealloc;
-(int)size;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setStyle:(int)arg1 ;
-(int)scale;
-(id)copyWithZone:(NSZone)arg1 ;
-(int)style;
-(void)setSize:(int)arg1 ;
-(void)setScale:(int)arg1 ;
-(id)dictionaryRepresentation;
-(id)baseURL;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(void)setBaseURL:(id)arg1 ;
-(void)setMultiTileURL:(id)arg1 ;
-(void)setLocalizationURL:(id)arg1 ;
-(void)setSupportedLanguages:(id)arg1 ;
-(void)addSupportedLanguage:(id)arg1 ;
-(unsigned long long)supportedLanguagesCount;
-(void)clearSupportedLanguages;
-(id)supportedLanguageAtIndex:(unsigned long long)arg1 ;
-(bool)hasBaseURL;
-(bool)hasMultiTileURL;
-(bool)hasLocalizationURL;
-(void)setMultiTileURLUsesStatusCodes:(bool)arg1 ;
-(void)setHasMultiTileURLUsesStatusCodes:(bool)arg1 ;
-(bool)hasMultiTileURLUsesStatusCodes;
-(id)multiTileURL;
-(id)localizationURL;
-(id)supportedLanguages;
-(bool)multiTileURLUsesStatusCodes;
-(void)clearAvailableTiles;
-(unsigned long long)availableTilesCount;
-(SCD_Struct_GE73)availableTilesAtIndex:(unsigned long long)arg1 ;
-(void)addAvailableTiles:(SCD_Struct_GE73)arg1 ;
-(SCD_Struct_GE73*)availableTiles;
-(void)setAvailableTiles:(SCD_Struct_GE73*)arg1 count:(unsigned long long)arg2 ;
-(void)setTimeToLiveSeconds:(unsigned)arg1 ;
-(void)setHasTimeToLiveSeconds:(bool)arg1 ;
-(bool)hasTimeToLiveSeconds;
-(id)sentinelTiles;
-(void)addSentinelTile:(id)arg1 ;
-(void)setSentinelTiles:(id)arg1 ;
-(unsigned long long)sentinelTilesCount;
-(void)clearSentinelTiles;
-(id)sentinelTileAtIndex:(unsigned long long)arg1 ;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)timeToLiveSeconds;
@end

