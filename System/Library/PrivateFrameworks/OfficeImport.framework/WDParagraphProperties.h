/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class WDDocument, WDCharacterProperties;

@interface WDParagraphProperties : NSObject <NSCopying> {

	WDDocument* mDocument;
	WDCharacterProperties* mCharacterProperties;
	unsigned mCharacterPropertiesOverridden : 1;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD62* mOriginalProperties;
	SCD_Struct_WD62* mTrackedProperties;

}
-(bool)isAnythingOverriddenIn:(SCD_Struct_WD62*)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(long long)width;
-(long long)height;
-(short)lineSpacing;
-(void)setLineSpacing:(short)arg1 ;
-(void)setWidth:(long long)arg1 ;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(bool)isBaseStyleOverridden;
-(id)baseStyle;
-(bool)isHorizontalAnchorOverridden;
-(int)horizontalAnchor;
-(bool)isVerticalAnchorOverridden;
-(int)verticalAnchor;
-(bool)isHorizontalPositionOverridden;
-(long long)horizontalPosition;
-(bool)isVerticalPositionOverridden;
-(long long)verticalPosition;
-(id)characterProperties;
-(bool)isSpaceAfterOverridden;
-(unsigned short)spaceAfter;
-(bool)isSpaceBeforeOverridden;
-(unsigned short)spaceBefore;
-(bool)isLineSpacingOverridden;
-(bool)isJustificationOverridden;
-(int)justification;
-(bool)isLeftIndentOverridden;
-(short)leftIndent;
-(bool)isRightIndentOverridden;
-(short)rightIndent;
-(bool)isFirstLineIndentOverridden;
-(short)firstLineIndent;
-(bool)isListIndexOverridden;
-(unsigned long long)listIndex;
-(bool)isListLevelOverridden;
-(unsigned char)listLevel;
-(bool)isShadingOverridden;
-(id)shading;
-(bool)isBottomBorderOverridden;
-(id)bottomBorder;
-(id)list;
-(bool)isCharacterPropertiesOverridden;
-(bool)isWidthOverridden;
-(bool)isTopBorderOverridden;
-(bool)isLeftBorderOverridden;
-(bool)isRightBorderOverridden;
-(id)topBorder;
-(id)leftBorder;
-(id)rightBorder;
-(bool)isHeightOverridden;
-(void)setOutlineLevel:(unsigned short)arg1 ;
-(unsigned short)outlineLevel;
-(id)tableStyle;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableShading;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setBaseStyle:(id)arg1 ;
-(void)setFormattingChanged:(int)arg1 ;
-(int)resolveMode;
-(bool)isAnythingOverridden;
-(void)setJustification:(int)arg1 ;
-(void)setHorizontalPosition:(long long)arg1 ;
-(void)setVerticalPosition:(long long)arg1 ;
-(void)setCharacterProperties:(id)arg1 ;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(id)mutableBarBorder;
-(void)setTableStyle:(id)arg1 ;
-(void)setListLevel:(unsigned char)arg1 ;
-(void)setListIndex:(unsigned long long)arg1 ;
-(void)setDropCap:(SCD_Struct_WD61)arg1 ;
-(void)setHeightRule:(int)arg1 ;
-(void)setVerticalSpace:(long long)arg1 ;
-(void)setHorizontalSpace:(long long)arg1 ;
-(void)setHorizontalAnchor:(int)arg1 ;
-(void)setVerticalAnchor:(int)arg1 ;
-(void)setWrapCode:(BOOL)arg1 ;
-(void)setAnchorLock:(bool)arg1 ;
-(void)setSpaceBefore:(unsigned short)arg1 ;
-(void)setSpaceBeforeAuto:(bool)arg1 ;
-(void)setSpaceAfter:(unsigned short)arg1 ;
-(void)setSpaceAfterAuto:(bool)arg1 ;
-(void)setLineSpacingRule:(int)arg1 ;
-(void)setLeftIndent:(short)arg1 ;
-(void)setRightIndent:(short)arg1 ;
-(void)setFirstLineIndent:(short)arg1 ;
-(void)setKeepNextParagraphTogether:(bool)arg1 ;
-(void)setKeepLinesTogether:(bool)arg1 ;
-(void)setSuppressAutoHyphens:(bool)arg1 ;
-(void)setSuppressLineNumbers:(bool)arg1 ;
-(void)setWidowControl:(bool)arg1 ;
-(void)setKinsokuOff:(bool)arg1 ;
-(void)addTabStopAdded:(SCD_Struct_WD63*)arg1 ;
-(void)setTabStopAddedCount:(unsigned long long)arg1 ;
-(void)addTabStopDeletedPosition:(short)arg1 ;
-(void)setTabStopDeletedPositionCount:(unsigned long long)arg1 ;
-(void)setTablePart:(unsigned short)arg1 ;
-(bool)isFormattingChangedOverridden;
-(int)formattingChanged;
-(bool)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(void)clearBaseStyle;
-(id)mutableCharacterProperties;
-(void)negateFormattingChangesWithDefaults:(id)arg1 ;
-(void)copyPropertiesInto:(id)arg1 ;
-(bool)isListOverridden;
-(bool)isPageBreakBeforeOverridden;
-(bool)isPageBreakBefore;
-(bool)isHeightRuleOverridden;
-(int)heightRule;
-(bool)isVerticalSpaceOverridden;
-(long long)verticalSpace;
-(bool)isHorizontalSpaceOverridden;
-(long long)horizontalSpace;
-(bool)isWrapOverridden;
-(bool)isWrapCodeOverridden;
-(BOOL)wrapCode;
-(bool)isAnchorLockOverridden;
-(bool)anchorLock;
-(bool)isSpaceBeforeAutoOverridden;
-(bool)spaceBeforeAuto;
-(bool)isSpaceAfterAutoOverridden;
-(bool)spaceAfterAuto;
-(bool)isLineSpacingRuleOverridden;
-(int)lineSpacingRule;
-(bool)isOutlineLevelOverridden;
-(bool)isKeepNextParagraphTogetherOverridden;
-(bool)keepNextParagraphTogether;
-(bool)isKeepLinesTogetherOverridden;
-(bool)keepLinesTogether;
-(bool)isSuppressAutoHyphensOverridden;
-(bool)suppressAutoHyphens;
-(bool)isSuppressLineNumbersOverridden;
-(bool)suppressLineNumbers;
-(bool)isWidowControlOverridden;
-(bool)widowControl;
-(bool)isKinsokuOffOverridden;
-(bool)kinsokuOff;
-(bool)isTablePartOverridden;
-(unsigned short)tablePart;
-(id)mutableBetweenBorder;
-(bool)isBetweenBorderOverridden;
-(id)betweenBorder;
-(bool)isBarBorderOverridden;
-(id)barBorder;
-(bool)isDropCapOverridden;
-(SCD_Struct_WD61)dropCap;
-(unsigned long long)tabStopAddedCount;
-(SCD_Struct_WD63*)tabStopAddedAt:(unsigned long long)arg1 ;
-(unsigned long long)tabStopDeletedPositionCount;
-(short)tabStopDeletedPositionAt:(unsigned long long)arg1 ;
-(void)clearChararacterProperties;
-(bool)isTableStyleOverridden;
-(void)setList:(id)arg1 ;
-(void)removeTabStopAddedWithPosition:(short)arg1 ;
-(void)setPageBreakBefore:(bool)arg1 ;
-(bool)wrap;
-(void)setWrap:(bool)arg1 ;
@end

