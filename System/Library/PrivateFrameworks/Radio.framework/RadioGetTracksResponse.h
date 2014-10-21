/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSDictionary, NSArray;

@interface RadioGetTracksResponse : NSObject {

	NSDate* _expirationDate;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,retain) NSDate * expirationDate;                          //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long globalVersion; 
@property (nonatomic,readonly) bool shouldIncrementSkipCount; 
@property (nonatomic,readonly) NSDate * skipDate; 
@property (nonatomic,readonly) long long tracklistActionType; 
@property (nonatomic,readonly) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSArray * unusedKBSyncStrings; 
-(unsigned long long)globalVersion;
-(bool)shouldIncrementSkipCount;
-(id)skipDate;
-(id)tracksForStation:(id)arg1 ;
-(id)responseDictionary;
-(id)initWithResponseDictionary:(id)arg1 ;
-(long long)tracklistActionType;
-(void).cxx_destruct;
-(id)expirationDate;
-(id)tracksForStationID:(long long)arg1 ;
-(id)tracksForStationHash:(id)arg1 ;
-(id)_tracksForStationKey:(id)arg1 ;
-(id)unusedKBSyncStrings;
-(void)setExpirationDate:(id)arg1 ;
@end
