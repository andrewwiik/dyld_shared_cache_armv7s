/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <CoreFoundation/NSCoding.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSArray;

@interface DDScannerResult : NSObject <NSCoding, NSSecureCoding> {

	_DDResult* _coreResult;
	NSArray* _subResultsCache;

}

@property (assign) NSRange range; 
+(bool)supportsSecureCoding;
+(id)resultsFromCoreResults:(CFArrayRef)arg1 ;
+(id)resultFromCoreResult:(_DDResult*)arg1 ;
-(void)offsetRangeBy:(long long)arg1 ;
-(long long)score;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(void)setType:(id)arg1 ;
-(id)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)value;
-(NSRange)range;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)location;
-(void)setRange:(NSRange)arg1 ;
-(id)initWithCoreResult:(_DDResult*)arg1 ;
-(id)subResults;
-(_DDResult*)coreResult;
-(id)matchedString;
-(id)rawValue;
-(id)contextualData;
-(void)setSubResults:(id)arg1 ;
-(SCD_Struct_DD4)cfRange;
-(double)getDuration;
-(id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id*)arg3 allDayRef:(bool*)arg4 ;
-(bool)extractStartDate:(id*)arg1 startTimezone:(id*)arg2 endDate:(id*)arg3 endTimezone:(id*)arg4 allDayRef:(bool*)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7 ;
-(bool)getPhoneValue:(id*)arg1 label:(id*)arg2 ;
-(bool)getMailValue:(id*)arg1 label:(id*)arg2 ;
-(bool)getIMScreenNameValue:(id*)arg1 type:(id*)arg2 ;
-(bool)getStreet:(id*)arg1 city:(id*)arg2 state:(id*)arg3 zip:(id*)arg4 country:(id*)arg5 ;
@end

