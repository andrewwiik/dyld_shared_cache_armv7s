/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload {

	unsigned long long _airPrintCount;
	NSMutableArray* _ippAddresses;

}

@property (assign,nonatomic) unsigned long long airPrintCount;              //@synthesize airPrintCount=_airPrintCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * ippAddresses;                 //@synthesize ippAddresses=_ippAddresses - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)restrictions;
-(id)description;
-(void).cxx_destruct;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(unsigned long long)airPrintCount;
-(id)ippAddresses;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(void)setAirPrintCount:(unsigned long long)arg1 ;
-(void)setIppAddresses:(id)arg1 ;
@end

