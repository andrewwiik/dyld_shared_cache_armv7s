/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class EDResources, NSString, EDReference, EDCollection;

@interface EDPivotTable : NSObject {

	EDResources* mResources;
	bool mShowLastColumn;
	bool mShowRowHeaders;
	bool mShowColumnHeaders;
	bool mShowRowStripes;
	bool mShowColumnStripes;
	bool mApplyNumberFormats;
	bool mApplyBorderFormats;
	bool mApplyFontFormats;
	bool mApplyPatternFormats;
	bool mApplyAlignmentFormats;
	bool mApplyWidthHeightFormats;
	bool mUseAutoFormatting;
	bool mColGrandTotals;
	bool mRowGrandTotals;
	bool mCustomListSort;
	bool mCompactData;
	bool mCompact;
	bool mDataCaption;
	bool mDataOnRows;
	bool mDisableFieldList;
	bool mMergeItem;
	bool mMultipleFieldFilters;
	bool mOutline;
	bool mOutlineData;
	bool mPageOverThenDown;
	bool mShowCalcMbrs;
	bool mShowDataDropDown;
	bool mShowDropZones;
	bool mShowEmptyCol;
	bool mShowEmptyRow;
	bool mShowHeaders;
	bool mShowMemberPropertyTips;
	bool mShowMissing;
	bool mShowMultipleLabel;
	bool mSubtotalHiddenItems;
	NSString* mName;
	NSString* mStyleName;
	NSString* mColumnHeaderCaption;
	NSString* mRowHeaderCaption;
	NSString* mPageStyleName;
	EDReference* mPivotTableRange;
	unsigned long long mStyleIndex;
	long long mFirstHeaderRow;
	long long mFirstDataRow;
	long long mFirstDataColumn;
	unsigned long long mRowPageCount;
	unsigned long long mColumnPageCount;
	unsigned long long mPageWrap;
	unsigned long long mAutoFormatId;
	unsigned long long mDataPosition;
	EDCollection* mRowFields;
	EDCollection* mColumnFields;
	EDCollection* mRowItems;
	EDCollection* mColumnItems;
	EDCollection* mPivotFields;
	EDCollection* mDataFields;
	EDCollection* mConditionalFields;
	EDCollection* mPivotAreas;
	EDCollection* mPageFields;

}
+(id)pivotTableWithResources:(id)arg1 ;
-(unsigned long long)styleIndex;
-(void)setStyleIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setStyle:(id)arg1 ;
-(id)style;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)initWithResources:(id)arg1 ;
-(id)columnHeaderCaption;
-(void)setColumnHeaderCaption:(id)arg1 ;
-(id)rowHeaderCaption;
-(void)setRowHeaderCaption:(id)arg1 ;
-(id)pageStyleName;
-(void)setPageStyleName:(id)arg1 ;
-(id)styleName;
-(void)setStyleName:(id)arg1 ;
-(id)pivotTableRange;
-(void)setPivotTableRange:(id)arg1 ;
-(unsigned long long)rowPageCount;
-(void)setRowPageCount:(unsigned long long)arg1 ;
-(unsigned long long)columnPageCount;
-(void)setColumnPageCount:(unsigned long long)arg1 ;
-(long long)firstHeaderRow;
-(void)setFirstHeaderRow:(long long)arg1 ;
-(long long)firstDataRow;
-(void)setFirstDataRow:(long long)arg1 ;
-(long long)firstDataColumn;
-(void)setFirstDataColumn:(long long)arg1 ;
-(unsigned long long)pageWrap;
-(void)setPageWrap:(unsigned long long)arg1 ;
-(unsigned long long)autoFormatId;
-(void)setAutoFormatId:(unsigned long long)arg1 ;
-(unsigned long long)dataPosition;
-(void)setDataPosition:(unsigned long long)arg1 ;
-(bool)showLastColumn;
-(void)setShowLastColumn:(bool)arg1 ;
-(bool)showRowStripes;
-(void)setShowRowStripes:(bool)arg1 ;
-(bool)showColumnStripes;
-(void)setShowColumnStripes:(bool)arg1 ;
-(bool)showRowHeaders;
-(void)setShowRowHeaders:(bool)arg1 ;
-(bool)showColumnHeaders;
-(void)setShowColumnHeaders:(bool)arg1 ;
-(bool)applyNumberFormats;
-(void)setApplyNumberFormats:(bool)arg1 ;
-(bool)applyBorderFormats;
-(void)setApplyBorderFormats:(bool)arg1 ;
-(bool)applyFontFormats;
-(void)setApplyFontFormats:(bool)arg1 ;
-(bool)applyPatternFormats;
-(void)setApplyPatternFormats:(bool)arg1 ;
-(bool)applyAlignmentFormats;
-(void)setApplyAlignmentFormats:(bool)arg1 ;
-(bool)applyWidthHeightFormats;
-(void)setApplyWidthHeightFormats:(bool)arg1 ;
-(bool)colGrandTotals;
-(void)setColGrandTotals:(bool)arg1 ;
-(bool)useAutoFormatting;
-(void)setUseAutoFormatting:(bool)arg1 ;
-(bool)rowGrandTotals;
-(void)setRowGrandTotals:(bool)arg1 ;
-(bool)customListSort;
-(void)setCustomListSort:(bool)arg1 ;
-(bool)compactData;
-(void)setCompactData:(bool)arg1 ;
-(bool)dataCaption;
-(void)setDataCaption:(bool)arg1 ;
-(bool)dataOnRows;
-(void)setDataOnRows:(bool)arg1 ;
-(bool)disableFieldList;
-(void)setDisableFieldList:(bool)arg1 ;
-(bool)mergeItem;
-(void)setMergeItem:(bool)arg1 ;
-(bool)multipleFieldFilters;
-(void)setMultipleFieldFilters:(bool)arg1 ;
-(bool)outlineData;
-(void)setOutlineData:(bool)arg1 ;
-(bool)pageOverThenDown;
-(void)setPageOverThenDown:(bool)arg1 ;
-(bool)showCalcMbrs;
-(void)setShowCalcMbrs:(bool)arg1 ;
-(bool)showDataDropDown;
-(void)setShowDataDropDown:(bool)arg1 ;
-(bool)showDropZones;
-(void)setShowDropZones:(bool)arg1 ;
-(bool)showEmptyCol;
-(void)setShowEmptyCol:(bool)arg1 ;
-(bool)showEmptyRow;
-(void)setShowEmptyRow:(bool)arg1 ;
-(bool)showHeaders;
-(void)setShowHeaders:(bool)arg1 ;
-(bool)showMemberPropertyTips;
-(void)setShowMemberPropertyTips:(bool)arg1 ;
-(bool)showMissing;
-(void)setShowMissing:(bool)arg1 ;
-(bool)showMultipleLabel;
-(void)setShowMultipleLabel:(bool)arg1 ;
-(bool)subtotalHiddenItems;
-(void)setSubtotalHiddenItems:(bool)arg1 ;
-(id)rowFields;
-(id)columnFields;
-(id)rowItems;
-(id)columnItems;
-(id)pivotFields;
-(id)dataFields;
-(id)conditionalFormats;
-(id)pivotAreas;
-(id)pageFields;
-(bool)outline;
-(void)setOutline:(bool)arg1 ;
-(bool)compact;
-(void)setCompact:(bool)arg1 ;
@end

