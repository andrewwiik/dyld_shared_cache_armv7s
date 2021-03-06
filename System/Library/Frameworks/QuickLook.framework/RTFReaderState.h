/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSMutableData, NSArray, RTFTextTable;

@interface RTFReaderState : NSObject {

	id _delegate;
	unsigned _defaultToUniCharEncoding;
	NSMutableDictionary* _documentInfoDictionary;
	CGSize _paperSize;
	double _lMargin;
	double _rMargin;
	double _bMargin;
	double _tMargin;
	CGSize _viewSize;
	int _viewScale;
	int _viewKind;
	NSMutableArray* _attributesStack;
	NSMutableDictionary* _curAttributes;
	unsigned _level;
	NSAttributeInfo _attributeInfo;
	NSMutableData* _attributeInfoStack;
	long long _tableNestingLevel;
	bool _isRTLDocument;
	NSArray* _textBlocks;
	NSMutableArray* _nestedTables;
	RTFTextTable* _currentTable;
	RTFTextTable* _previousTable;
	NSMutableArray* _currentRowArray;
	NSMutableArray* _previousRowArray;
	int _currentRow;
	int _currentColumn;
	int _currentDefinitionColumn;
	bool _currentRowIsLast;
	bool _setTableCells;
	unsigned long long _currentBorderEdge;
	bool _currentBorderIsTable;
	NSMutableDictionary* _listDefinitions;
	int _currentListNumber;
	int _currentListLevel;

}
-(id)attributeForKey:(id)arg1 ;
-(id)currentAttributes;
-(id)currentTable;
-(bool)isLastTableRow;
-(void)setDefaultToUniCharEncoding:(unsigned)arg1 ;
-(void)setToUniCharEncoding:(unsigned)arg1 ;
-(void)setCodePageEncoding:(unsigned)arg1 ;
-(void)setFontIsValid:(bool)arg1 ;
-(void)setUnicodeAlternativeLength:(unsigned)arg1 ;
-(unsigned)unicodeAlternativeLength;
-(void)setHasWritingDirectionAttribute:(bool)arg1 ;
-(bool)currentBorderIsTable;
-(unsigned long long)currentBorderEdge;
-(id)currentTableCell;
-(unsigned)defaultToUniCharEncoding;
-(void)setMultiByteEncoding:(bool)arg1 ;
-(void)startParagraph;
-(void)paragraphInTable;
-(id)mutableParagraphStyle;
-(void)setCurrentListNumber:(long long)arg1 ;
-(void)setCurrentListLevel:(long long)arg1 ;
-(void)setTableNestingLevel:(long long)arg1 ;
-(void)startTableRowDefinition;
-(void)endTableCellDefinition;
-(void)mergeTableCellsHorizontally;
-(void)setCurrentBorderEdge:(unsigned long long)arg1 isTable:(bool)arg2 ;
-(void)lastTableRow;
-(void)setTableFlags:(unsigned long long)arg1 ;
-(void)mergeTableCellsVertically;
-(bool)currentTableCellIsPlaceholder;
-(void)endTableRow;
-(bool)hasWritingDirectionAttribute;
-(void)endTableCell;
-(void)addOverride:(long long)arg1 forKey:(long long)arg2 ;
-(void)addListDefinition:(id)arg1 forKey:(long long)arg2 ;
-(void)popState;
-(unsigned)codePageEncoding;
-(unsigned)toUniCharEncoding;
-(bool)multiByteEncoding;
-(void)_notifyEndParagraph;
-(void)_notifyProcessString:(id)arg1 ;
-(void)_notifyStartTable;
-(void)_notifyStartTableRow;
-(void)_notifyEndTableCellWithCell:(id)arg1 ;
-(void)_notifyEndTableRow;
-(id)documentInfoDictionary;
-(long long)currentListNumber;
-(long long)currentListLevel;
-(id)listDefinitions;
-(void)_notifyStartParagraph;
-(void)_notifyEndTable;
-(void)_notifyStartTableCell;
-(void)dealloc;
-(void)setFont:(id)arg1 ;
-(void)setTextAlignment:(int)arg1 ;
-(unsigned)level;
-(void)setRightMargin:(double)arg1 ;
-(id)font;
-(void)setFontSize:(double)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(long long)baseWritingDirection;
-(double)rightMargin;
-(CGSize)paperSize;
-(CGSize)viewSize;
-(id)defaultParagraphStyle;
-(double)fontSize;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)removeAttributeForKey:(id)arg1 ;
-(void)pushState;
-(double)leftMargin;
-(double)topMargin;
-(double)bottomMargin;
-(void)setTopMargin:(double)arg1 ;
-(void)setLeftMargin:(double)arg1 ;
-(bool)bold;
-(bool)italic;
-(void)setBold:(bool)arg1 ;
-(void)setItalic:(bool)arg1 ;
-(void)setBottomMargin:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)endParagraph;
-(id)currentParagraphStyle;
-(void)_ensureTableCells;
-(void)_pushTableState;
-(void)_popTableState;
-(void)_beginTableRow;
-(void)_setTableCells;
-(void)_clearTableCells;
-(void)_updateAttributes;
-(id)mutableAttributes;
-(void)setPaperSize:(CGSize)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(void)setViewKind:(long long)arg1 ;
-(void)setViewScale:(long long)arg1 ;
-(bool)_currentTableCellIsPlaceholder;
-(void)_setCurrentBorderEdge:(unsigned long long)arg1 isTable:(bool)arg2 ;
-(void)_paragraphInTable;
-(void)processString:(id)arg1 ;
@end

