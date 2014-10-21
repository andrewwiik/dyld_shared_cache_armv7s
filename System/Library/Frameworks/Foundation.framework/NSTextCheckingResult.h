/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface NSTextCheckingResult : NSObject <NSCopying, NSCoding>

@property (readonly) unsigned long long resultType; 
@property (readonly) NSRange range; 
+(id)orthographyCheckingResultWithRange:(NSRange)arg1 orthography:(id)arg2 ;
+(id)spellCheckingResultWithRange:(NSRange)arg1 ;
+(id)grammarCheckingResultWithRange:(NSRange)arg1 details:(id)arg2 ;
+(id)dateCheckingResultWithRange:(NSRange)arg1 date:(id)arg2 ;
+(id)dateCheckingResultWithRange:(NSRange)arg1 date:(id)arg2 timeZone:(id)arg3 duration:(double)arg4 ;
+(id)addressCheckingResultWithRange:(NSRange)arg1 components:(id)arg2 ;
+(id)linkCheckingResultWithRange:(NSRange)arg1 URL:(id)arg2 ;
+(id)quoteCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)dashCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)replacementCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)correctionCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 ;
+(id)correctionCheckingResultWithRange:(NSRange)arg1 replacementString:(id)arg2 alternativeStrings:(id)arg3 ;
+(id)regularExpressionCheckingResultWithRanges:(NSRange*)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3 ;
+(id)phoneNumberCheckingResultWithRange:(NSRange)arg1 phoneNumber:(id)arg2 ;
+(id)transitInformationCheckingResultWithRange:(NSRange)arg1 components:(id)arg2 ;
+(void)initialize;
-(NSRange)rangeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfRanges;
-(void)encodeRangeWithCoder:(id)arg1 ;
-(NSRange)decodeRangeWithCoder:(id)arg1 ;
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(bool)_adjustRangesWithOffset:(long long)arg1 ;
-(id)orthography;
-(id)grammarDetails;
-(id)addressComponents;
-(id)replacementString;
-(id)regularExpression;
-(void*)underlyingResult;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)duration;
-(id)date;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)URL;
-(NSRange)range;
-(id)phoneNumber;
-(id)timeZone;
-(id)alternativeStrings;
-(id)components;
-(unsigned long long)resultType;
@end

