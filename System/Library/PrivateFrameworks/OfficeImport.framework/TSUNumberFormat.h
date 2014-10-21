/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TSUNumberFormatting.h>

@class NSString, NSArray, NSIndexSet;

@interface TSUNumberFormat : NSObject <TSUNumberFormatting> {

	int mValueType;
	NSString* mFormatString;
	unsigned short mDecimalPlaces;
	NSString* mCurrencyCode;
	bool mUseAccountingStyle;
	int mNegativeStyle;
	bool mShowThousandsSeparator;
	int mFractionAccuracy;
	bool mFormatStringRequiresSuppressionOfMinusSign;
	bool mUseScientificFormattingAutomatically;
	bool mIgnoreDecimalPlacesForZeroValue;
	NSString* mPrefixString;
	NSString* mSuffixString;
	unsigned char mBase;
	unsigned short mBasePlaces;
	bool mBaseUseMinusSign;
	bool mIsCustom;
	double mScaleFactor;
	bool mFormatStringContainsTabCharacter;
	bool mFormatContainsSpecialTokens;
	bool mFormatContainsIntegerToken;
	unsigned char mNumberOfHashDecimalPlaceholders;
	unsigned char mTotalNumberOfDecimalPlaceholdersInFormat;
	bool mRequiresFractionReplacement;
	NSArray* mInterstitialStrings;
	NSIndexSet* mInterstitialStringInsertionIndexes;
	unsigned short mIndexFromRightOfLastDigitPlaceholder;
	bool mIsTextFormat;
	unsigned char mMinimumIntegerWidth;
	unsigned char mDecimalWidth;
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
	NSString* mFormatName;

}
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(bool)arg14 isCustom:(bool)arg15 formatName:(id)arg16 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(bool)arg11 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9 ;
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 scaleFactor:(double)arg9 isCustom:(bool)arg10 formatName:(id)arg11 ;
-(id)fractionStringFromDouble:(double)arg1 ;
-(id)baseStringFromDouble:(double)arg1 ;
-(void)dealloc;
-(id)init;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(double)scaleFactor;
-(unsigned short)base;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(id)formatString;
-(id)formatName;
-(void)setFormatName:(id)arg1 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 suffixString:(id)arg9 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 base:(unsigned char)arg9 basePlaces:(unsigned short)arg10 baseUseMinusSign:(bool)arg11 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(bool)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(bool)arg7 fractionAccuracy:(int)arg8 prefixString:(id)arg9 suffixString:(id)arg10 scaleFactor:(double)arg11 base:(unsigned char)arg12 basePlaces:(unsigned short)arg13 baseUseMinusSign:(bool)arg14 isCustom:(bool)arg15 interstitialStrings:(id)arg16 interstitialStringInsertionIndexes:(id)arg17 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg18 minimumIntegerWidth:(unsigned char)arg19 decimalWidth:(unsigned char)arg20 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg21 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg22 isTextFormat:(bool)arg23 formatName:(id)arg24 ;
-(unsigned short)decimalPlaces;
-(id)currencyCode;
-(bool)showThousandsSeparator;
-(bool)usesAccountingStyle;
-(int)negativeStyle;
-(int)fractionAccuracy;
-(id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 forceSuppressMinusSign:(bool)arg4 ;
-(id)stringFromDouble:(double)arg1 forceSuppressMinusSign:(bool)arg2 ;
-(bool)hasValidDecimalPlaces;
-(bool)isCustom;
-(id)numberFormatBySettingValueType:(int)arg1 ;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 ;
-(id)numberFormatByIncrementingDecimalPlaces:(short)arg1 ;
-(id)numberFormatBySettingCurrencyCode:(id)arg1 ;
-(id)numberFormatBySettingSuffixString:(id)arg1 ;
-(id)numberFormatBySettingNegativeStyle:(int)arg1 ;
-(id)numberFormatBySettingShowThousandsSeparator:(bool)arg1 ;
-(id)numberFormatBySettingFractionAccuracy:(int)arg1 ;
-(id)numberFormatBySettingUseAccountingStyle:(bool)arg1 ;
-(id)numberFormatBySettingDecimalPlaces:(unsigned short)arg1 andNegativeStyle:(int)arg2 ;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(bool)isTextFormat;
-(bool)canFormatText;
-(bool)usesTextFormatForValue:(double)arg1 ;
-(bool)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)basePlaces;
-(bool)baseUseMinusSign;
-(bool)usesTabs;
-(bool)requiresParensToBeReplacedWithSpacesForDouble:(double)arg1 ;
-(id)stringFromDouble:(double)arg1 ;
-(id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2 ;
-(id)stringFromDouble:(double)arg1 decimalPlaces:(unsigned short)arg2 minimumDecimalPlaces:(unsigned short)arg3 ;
-(id)chartLabelStringFromDouble:(double)arg1 ;
-(id)stringFromString:(id)arg1 ;
-(bool)isEquivalent:(id)arg1 ;
-(id)initCustomFormatWithFormatString:(id)arg1 currencyCode:(id)arg2 showThousandsSeparator:(bool)arg3 fractionAccuracy:(int)arg4 scaleFactor:(double)arg5 interstitialStrings:(id)arg6 interstitialStringInsertionIndexes:(id)arg7 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg8 minimumIntegerWidth:(unsigned char)arg9 decimalWidth:(unsigned char)arg10 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg11 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg12 isTextFormat:(bool)arg13 formatName:(id)arg14 ;
-(id)numberFormatBySettingPrefixString:(id)arg1 ;
-(id)numberFormatBySettingBase:(unsigned char)arg1 ;
-(id)numberFormatBySettingBasePlaces:(unsigned short)arg1 ;
-(id)numberFormatBySettingBaseRepresentNegativeWithMinus:(bool)arg1 ;
-(id)prefixString;
-(bool)useScientificFormattingAutomatically;
-(void)setUseScientificFormattingAutomatically:(bool)arg1 ;
-(bool)ignoreDecimalPlacesForZeroValue;
-(void)setIgnoreDecimalPlacesForZeroValue:(bool)arg1 ;
-(id)chartLabelStringNofixFromDouble:(double)arg1 ;
-(id)chartLabelStringFromDouble:(double)arg1 forceSuppressMinusSign:(bool)arg2 ;
-(id)stringFromDouble:(double)arg1 minimumDecimalPlaces:(unsigned short)arg2 forceSuppressMinusSign:(bool)arg3 ;
-(int)valueType;
@end

