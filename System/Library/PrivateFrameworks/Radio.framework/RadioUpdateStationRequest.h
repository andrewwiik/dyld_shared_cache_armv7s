/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/RadioSyncRequest.h>

@class RadioStation, NSString, NSArray;

@interface RadioUpdateStationRequest : RadioSyncRequest {

	RadioStation* _station;
	NSString* _name;
	NSString* _stationDescription;
	NSArray* _seeds;
	long long _songMixType;

}

@property (nonatomic,copy) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * stationDescription;              //@synthesize stationDescription=_stationDescription - In the implementation block
@property (nonatomic,copy) NSArray * seeds;                            //@synthesize seeds=_seeds - In the implementation block
@property (assign,nonatomic) long long songMixType;                    //@synthesize songMixType=_songMixType - In the implementation block
-(void)startWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)initWithStation:(id)arg1 ;
-(id)stationDescription;
-(id)init;
-(void)setName:(id)arg1 ;
-(id)name;
-(void).cxx_destruct;
-(long long)songMixType;
-(void)setSongMixType:(long long)arg1 ;
-(void)setStationDescription:(id)arg1 ;
-(id)changeList;
-(id)_updatedStationDictionary;
-(id)seeds;
-(void)setSeeds:(id)arg1 ;
@end
