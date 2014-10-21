/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <OfficeImport/EDImmutableObject.h>

@class EDResources, NSString, EDColorReference;

@interface EDFont : NSObject <NSCopying, EDImmutableObject> {

	EDResources* mResources;
	NSString* mName;
	EDColorReference* mColorReference;
	int mUnderline;
	int mScript;
	double mHeightInTwips;
	int mCharSet;
	int mFamily;
	unsigned mWeight;
	bool mBold;
	bool mItalic;
	bool mShadow;
	bool mStrike;
	bool mOutline;
	bool mUnderlineOverridden;
	bool mStrikeOverridden;
	bool mBoldOverridden;
	bool mWeightOverridden;
	bool mItalicOverridden;
	bool mHeightOverridden;
	bool mDoNotModify;

}
+(id)fontNameWithFamilyName:(id)arg1 bold:(bool)arg2 italic:(bool)arg3 ;
+(id)fontWithResources:(id)arg1 ;
+(id)filterFontName:(id)arg1 ;
+(id)lassoNameForFontName:(id)arg1 bold:(bool)arg2 italic:(bool)arg3 ;
-(void)setColorReference:(id)arg1 ;
-(id)colorReference;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setName:(id)arg1 ;
-(id)name;
-(double)height;
-(id)color;
-(void)setColor:(id)arg1 ;
-(int)script;
-(void)setHeight:(double)arg1 ;
-(void)setShadow:(bool)arg1 ;
-(void)setScript:(int)arg1 ;
-(unsigned)weight;
-(void)setWeight:(unsigned)arg1 ;
-(bool)isBoldOverridden;
-(bool)isItalicOverridden;
-(bool)isUnderlineOverridden;
-(int)underline;
-(bool)isHeightOverridden;
-(bool)isBold;
-(bool)isItalic;
-(bool)isStrikeOverridden;
-(bool)isStrike;
-(id)initWithResources:(id)arg1 ;
-(void)setUnderline:(int)arg1 ;
-(void)setBold:(bool)arg1 ;
-(void)setItalic:(bool)arg1 ;
-(void)setStrike:(bool)arg1 ;
-(void)setCharSet:(int)arg1 ;
-(void)setFamily:(int)arg1 ;
-(void)setDoNotModify:(bool)arg1 ;
-(bool)isEqualToFont:(id)arg1 ;
-(id)filteredName;
-(id)lassoName;
-(bool)isShadow;
-(bool)isOutline;
-(int)charSet;
-(int)family;
-(bool)isWeightOverridden;
-(void)setOutline:(bool)arg1 ;
@end

