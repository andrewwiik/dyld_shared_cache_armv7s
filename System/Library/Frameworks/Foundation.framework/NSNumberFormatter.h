/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface NSNumberFormatter : NSFormatter {

	NSMutableDictionary* _attributes;
	CFNumberFormatterRef _formatter;
	unsigned long long _counter;
	unsigned long long _behavior;
	NSRecursiveLock* _lock;
	void** _reserved[10];

}
+(id)mf_formatInteger:(long long)arg1 withGrouping:(bool)arg2 ;
+(id)mf_formatUnsignedInteger:(unsigned long long)arg1 withGrouping:(bool)arg2 ;
+(id)gkRankFormatter;
+(id)gk_formatUnsignedInteger:(unsigned long long)arg1 withGrouping:(bool)arg2 ;
+(id)gk_formatInteger:(long long)arg1 withGrouping:(bool)arg2 ;
+(void)setDefaultFormatterBehavior:(unsigned long long)arg1 ;
+(unsigned long long)defaultFormatterBehavior;
+(void)initialize;
+(id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 ;
-(unsigned long long)roundingMode;
-(id)attributedStringForObjectValue:(id)arg1 withDefaultAttributes:(id)arg2 ;
-(bool)getObjectValue:(out id*)arg1 forString:(id)arg2 range:(inout NSRange*)arg3 error:(out id*)arg4 ;
-(void)_clearFormatter;
-(void)setNilSymbol:(id)arg1 ;
-(void)setPositiveInfinitySymbol:(id)arg1 ;
-(void)setNegativeInfinitySymbol:(id)arg1 ;
-(void)setAllowsFloats:(bool)arg1 ;
-(id)nilSymbol;
-(id)notANumberSymbol;
-(id)zeroSymbol;
-(id)negativeInfinitySymbol;
-(id)positiveInfinitySymbol;
-(void)_regenerateFormatter;
-(id)positiveFormat;
-(void*)__Keynote_NOOP;
-(unsigned long long)numberStyle;
-(bool)generatesDecimalNumbers;
-(unsigned long long)formatterBehavior;
-(id)negativeFormat;
-(void)setNegativeFormat:(id)arg1 ;
-(id)textAttributesForNegativeValues;
-(void)setTextAttributesForNegativeValues:(id)arg1 ;
-(void)setPositiveFormat:(id)arg1 ;
-(id)textAttributesForPositiveValues;
-(void)setTextAttributesForPositiveValues:(id)arg1 ;
-(bool)allowsFloats;
-(void)setDecimalSeparator:(id)arg1 ;
-(bool)alwaysShowsDecimalSeparator;
-(void)setAlwaysShowsDecimalSeparator:(bool)arg1 ;
-(id)currencyDecimalSeparator;
-(void)setCurrencyDecimalSeparator:(id)arg1 ;
-(bool)usesGroupingSeparator;
-(void)setGroupingSeparator:(id)arg1 ;
-(id)textAttributesForZero;
-(void)setTextAttributesForZero:(id)arg1 ;
-(id)textAttributesForNil;
-(void)setTextAttributesForNil:(id)arg1 ;
-(void)setNotANumberSymbol:(id)arg1 ;
-(id)textAttributesForNotANumber;
-(void)setTextAttributesForNotANumber:(id)arg1 ;
-(id)textAttributesForPositiveInfinity;
-(void)setTextAttributesForPositiveInfinity:(id)arg1 ;
-(id)textAttributesForNegativeInfinity;
-(void)setTextAttributesForNegativeInfinity:(id)arg1 ;
-(void)setPositivePrefix:(id)arg1 ;
-(void)setPositiveSuffix:(id)arg1 ;
-(void)setNegativePrefix:(id)arg1 ;
-(void)setNegativeSuffix:(id)arg1 ;
-(bool)_hasSetCurrencyCode;
-(id)currencySymbol;
-(bool)_hasSetCurrencySymbol;
-(void)setCurrencySymbol:(id)arg1 ;
-(id)internationalCurrencySymbol;
-(void)setInternationalCurrencySymbol:(id)arg1 ;
-(bool)_hasSetInternationalCurrencySymbol;
-(id)percentSymbol;
-(void)setPercentSymbol:(id)arg1 ;
-(id)perMillSymbol;
-(void)setPerMillSymbol:(id)arg1 ;
-(id)minusSign;
-(void)setMinusSign:(id)arg1 ;
-(id)plusSign;
-(void)setPlusSign:(id)arg1 ;
-(id)exponentSymbol;
-(void)setExponentSymbol:(id)arg1 ;
-(unsigned long long)groupingSize;
-(void)setGroupingSize:(unsigned long long)arg1 ;
-(unsigned long long)secondaryGroupingSize;
-(void)setSecondaryGroupingSize:(unsigned long long)arg1 ;
-(unsigned long long)formatWidth;
-(void)setFormatWidth:(unsigned long long)arg1 ;
-(void)setMultiplier:(id)arg1 ;
-(id)paddingCharacter;
-(void)setPaddingCharacter:(id)arg1 ;
-(unsigned long long)paddingPosition;
-(void)setPaddingPosition:(unsigned long long)arg1 ;
-(void)setRoundingMode:(unsigned long long)arg1 ;
-(id)roundingIncrement;
-(void)setRoundingIncrement:(id)arg1 ;
-(unsigned long long)minimumIntegerDigits;
-(void)setMinimumIntegerDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumIntegerDigits;
-(void)setMaximumIntegerDigits:(unsigned long long)arg1 ;
-(unsigned long long)minimumFractionDigits;
-(void)setMinimumFractionDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumFractionDigits;
-(id)minimum;
-(void)setMinimum:(id)arg1 ;
-(id)maximum;
-(void)setMaximum:(id)arg1 ;
-(id)currencyGroupingSeparator;
-(void)setCurrencyGroupingSeparator:(id)arg1 ;
-(bool)isLenient;
-(void)setLenient:(bool)arg1 ;
-(bool)usesSignificantDigits;
-(void)setUsesSignificantDigits:(bool)arg1 ;
-(unsigned long long)minimumSignificantDigits;
-(void)setMinimumSignificantDigits:(unsigned long long)arg1 ;
-(unsigned long long)maximumSignificantDigits;
-(void)setMaximumSignificantDigits:(unsigned long long)arg1 ;
-(bool)isPartialStringValidationEnabled;
-(void)setPartialStringValidationEnabled:(bool)arg1 ;
-(bool)_usesCharacterDirection;
-(void)_setUsesCharacterDirection:(bool)arg1 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setNumberStyle:(unsigned long long)arg1 ;
-(id)numberFromString:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(void)_reset;
-(id)locale;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringFromNumber:(id)arg1 ;
-(void)setFormatterBehavior:(unsigned long long)arg1 ;
-(void)setGeneratesDecimalNumbers:(bool)arg1 ;
-(id)multiplier;
-(void)setZeroSymbol:(id)arg1 ;
-(void)setMaximumFractionDigits:(unsigned long long)arg1 ;
-(bool)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)currencyCode;
-(void)setCurrencyCode:(id)arg1 ;
-(void)finalize;
-(void)setUsesGroupingSeparator:(bool)arg1 ;
-(id)decimalSeparator;
-(id)groupingSeparator;
-(id)positivePrefix;
-(id)positiveSuffix;
-(id)negativePrefix;
-(id)negativeSuffix;
@end
