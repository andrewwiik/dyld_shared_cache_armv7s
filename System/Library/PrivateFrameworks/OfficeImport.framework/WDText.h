/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray, WDDocument, WDTableCell;

@interface WDText : NSObject {

	NSMutableArray* mBlocks;
	WDDocument* mDocument;
	int mTextType;
	WDTableCell* mTableCell;

}
-(void)dealloc;
-(bool)isEmpty;
-(id)content;
-(id)document;
-(unsigned long long)blockCount;
-(id)blockAt:(unsigned long long)arg1 ;
-(id)addParagraph;
-(int)textType;
-(void)removeLastCharacter:(unsigned short)arg1 ;
-(void)removeLastBlock;
-(int)tableNestingLevel;
-(id)addTable;
-(id)initWithDocument:(id)arg1 textType:(int)arg2 ;
-(id)tableCell;
-(id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3 ;
-(id)runIterator;
-(id)newRunIterator;
-(void)addBlock:(id)arg1 ;
-(id)blockIterator;
-(id)newBlockIterator;
-(id)blocks;
-(id)lastBlock;
-(unsigned long long)indexOfBlock:(id)arg1 ;
-(id)addParagraphAtIndex:(int)arg1 ;
-(id)addTableAtIndex:(int)arg1 ;
@end
