/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class WDDocument;

@interface WDTableCellProperties : NSObject {

	short mWidth;
	short mPosition;
	unsigned mOriginal : 1;
	unsigned mTracked : 1;
	unsigned mResolved : 1;
	SCD_Struct_WD66 mOriginalProperties;
	SCD_Struct_WD66 mTrackedProperties;
	WDDocument* mDocument;

}
-(void)addPropertiesValues:(SCD_Struct_WD67*)arg1 to:(SCD_Struct_WD67*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(void)setPosition:(short)arg1 ;
-(short)position;
-(void)setRightMargin:(short)arg1 ;
-(short)width;
-(id).cxx_construct;
-(void)setWidth:(short)arg1 ;
-(id)document;
-(id)initWithDocument:(id)arg1 ;
-(short)rightMargin;
-(short)leftMargin;
-(short)topMargin;
-(short)bottomMargin;
-(bool)isLeftMarginOverridden;
-(bool)isRightMarginOverridden;
-(bool)isTopMarginOverridden;
-(bool)isBottomMarginOverridden;
-(bool)isDeletedOverridden;
-(int)deleted;
-(bool)isShadingOverridden;
-(id)shading;
-(bool)isBottomBorderOverridden;
-(id)bottomBorder;
-(void)setTopMargin:(short)arg1 ;
-(void)setLeftMargin:(short)arg1 ;
-(bool)isTopBorderOverridden;
-(bool)isLeftBorderOverridden;
-(bool)isRightBorderOverridden;
-(id)topBorder;
-(id)leftBorder;
-(id)rightBorder;
-(bool)isVerticalAlignmentOverridden;
-(int)verticalAlignment;
-(bool)isInsideHorizontalBorderOverridden;
-(id)insideHorizontalBorder;
-(bool)isInsideVerticalBorderOverridden;
-(id)insideVerticalBorder;
-(bool)isWidthTypeOverridden;
-(int)widthType;
-(void)setDeleted:(int)arg1 ;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setBottomMargin:(short)arg1 ;
-(void)setTextDirection:(int)arg1 ;
-(void)setResolveMode:(int)arg1 ;
-(id)mutableShading;
-(void)setDeletionDate:(id)arg1 ;
-(void)setIndexToAuthorIDOfDeletion:(unsigned short)arg1 ;
-(id)deletionDate;
-(unsigned short)indexToAuthorIDOfDeletion;
-(void)setEditDate:(id)arg1 ;
-(void)setIndexToAuthorIDOfEdit:(unsigned short)arg1 ;
-(id)editDate;
-(unsigned short)indexToAuthorIDOfEdit;
-(void)setIndexToAuthorIDOfFormattingChange:(unsigned short)arg1 ;
-(void)setEdited:(int)arg1 ;
-(void)setFormattingChanged:(int)arg1 ;
-(int)resolveMode;
-(id)mutableTopBorder;
-(id)mutableLeftBorder;
-(id)mutableBottomBorder;
-(id)mutableRightBorder;
-(void)setFormattingChangeDate:(id)arg1 ;
-(bool)isFormattingChangedOverridden;
-(int)formattingChanged;
-(bool)isIndexToAuthorIDOfFormattingChangeOverridden;
-(unsigned short)indexToAuthorIDOfFormattingChange;
-(bool)isFormattingChangeDateOverridden;
-(id)formattingChangeDate;
-(bool)isTextDirectionOverridden;
-(int)textDirection;
-(void)clearShading;
-(id)mutableDiagonalUpBorder;
-(id)mutableDiagonalDownBorder;
-(void)setWidthType:(int)arg1 ;
-(void)setTopMarginType:(int)arg1 ;
-(void)setBottomMarginType:(int)arg1 ;
-(void)setLeftMarginType:(int)arg1 ;
-(void)setRightMarginType:(int)arg1 ;
-(void)setVerticallyMergedCell:(bool)arg1 ;
-(void)setFirstInSetOfVerticallyMergedCells:(bool)arg1 ;
-(bool)isDiagonalDownBorderOverridden;
-(id)diagonalDownBorder;
-(bool)isDiagonalUpBorderOverridden;
-(id)diagonalUpBorder;
-(bool)isTopMarginTypeOverridden;
-(int)topMarginType;
-(bool)isLeftMarginTypeOverridden;
-(int)leftMarginType;
-(bool)isBottomMarginTypeOverridden;
-(int)bottomMarginType;
-(bool)isRightMarginTypeOverridden;
-(int)rightMarginType;
-(bool)isVerticallyMergedCellOverridden;
-(bool)verticallyMergedCell;
-(bool)isFirstInSetOfVerticallyMergedCellsOverridden;
-(bool)firstInSetOfVerticallyMergedCells;
-(id)mutableInsideHorizontalBorder;
-(id)mutableInsideVerticalBorder;
-(int)edited;
-(bool)isEditedOverridden;
-(bool)isIndexToAuthorIDOfDeletionOverridden;
-(bool)isIndexToAuthorIDOfEditOverridden;
-(bool)isDeletionDateOverridden;
-(bool)isEditDateOverridden;
-(bool)isNoWrapOverridden;
-(void)addProperties:(id)arg1 ;
-(void)originalToTracked;
-(bool)noWrap;
-(void)setNoWrap:(bool)arg1 ;
@end
