/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OCDDocument.h>

@class WDStyleSheet, WDFontTable, WDListDefinitionTable, WDRevisionAuthorTable, WDCitationTable, WDListTable, NSMutableArray, WDText, NSString, NSDate, OADBackground, OADTheme, NSMutableSet;

@interface WDDocument : OCDDocument {

	WDStyleSheet* mStyleSheet;
	WDFontTable* mFontTable;
	WDListDefinitionTable* mListDefinitionTable;
	WDRevisionAuthorTable* mRevisionAuthorTable;
	WDCitationTable* mCitationTable;
	WDListTable* mListTable;
	NSMutableArray* mSections;
	unsigned short mDefaultTabWidth;
	WDText* mImageBulletText;
	WDText* mFootnoteSeparator;
	WDText* mFootnoteContinuationSeparator;
	WDText* mFootnoteContinuationNotice;
	WDText* mEndnoteSeparator;
	WDText* mEndnoteContinuationSeparator;
	WDText* mEndnoteContinuationNotice;
	int mFootnoteNumberFormat;
	int mEndnoteNumberFormat;
	int mFootnotePosition;
	int mEndnotePosition;
	int mFootnoteRestart;
	int mEndnoteRestart;
	unsigned short mFootnoteNumberingStart;
	int mGutterPosition;
	NSString* mOleFilename;
	NSString* mKinsokuAltBreakBefore;
	NSString* mKinsokuAltBreakAfter;
	short mZoomPercentage;
	NSString* mVersion;
	unsigned mMirrorMargins : 1;
	unsigned mBorderSurroundHeader : 1;
	unsigned mBorderSurroundFooter : 1;
	unsigned mKinsokuStrict : 1;
	unsigned mAutoHyphenate : 1;
	unsigned mEvenAndOddHeaders : 1;
	unsigned mGraphicsInHeaderFooter : 1;
	unsigned mBookFold : 1;
	unsigned mShowMarkup : 1;
	unsigned mShowComments : 1;
	unsigned mTrackChanges : 1;
	unsigned mShowRevisionMarksOnScreen : 1;
	unsigned mShowInsertionsAndDeletions : 1;
	unsigned mShowFormatting : 1;
	unsigned mShowOutline : 1;
	NSMutableArray* mDocumentImages;
	NSMutableArray* mChangeTrackingEditDates;
	NSMutableArray* mChangeTrackingEditAuthors;
	NSDate* mCreationDate;
	NSDate* mModificationDate;
	NSMutableArray* mImageBullets;
	int mZIndexTotalForMainText;
	int mZIndexTotalForHeaderFooterText;
	OADBackground* mDocumentBackground;
	OADTheme* mTheme;
	NSMutableSet* mObjPointers;

}
-(id)lastModDate;
-(void)setLastModDate:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setVersion:(id)arg1 ;
-(id)version;
-(id)sections;
-(id)addSection;
-(unsigned short)defaultTabWidth;
-(unsigned long long)sectionCount;
-(id)theme;
-(id)sectionAt:(unsigned long long)arg1 ;
-(id)oleFilename;
-(id)listTable;
-(id)listAt:(unsigned long long)arg1 ;
-(unsigned long long)listCount;
-(void)addChangeTrackingEditAtDate:(id)arg1 authorIndex:(int)arg2 ;
-(id)fontTable;
-(void)setOleFilename:(id)arg1 ;
-(void)setDocumentBackground:(id)arg1 ;
-(void)setZIndexTotalForMainText:(int)arg1 ;
-(void)setZIndexTotalForHeaderFooterText:(int)arg1 ;
-(id)imageBullets;
-(id)addImageBulletText;
-(id)listDefinitionTable;
-(id)revisionAuthorTable;
-(id)footnoteSeparator;
-(id)footnoteContinuationSeparator;
-(id)footnoteContinuationNotice;
-(id)endnoteSeparator;
-(id)endnoteContinuationSeparator;
-(id)endnoteContinuationNotice;
-(id)applicationName;
-(void)setTrackChanges:(bool)arg1 ;
-(void)setShowRevisionMarksOnScreen:(bool)arg1 ;
-(void)setShowInsertionsAndDeletions:(bool)arg1 ;
-(void)setShowFormatting:(bool)arg1 ;
-(void)setShowMarkup:(bool)arg1 ;
-(void)setShowComments:(bool)arg1 ;
-(void)setMirrorMargins:(bool)arg1 ;
-(void)setBorderSurroundHeader:(bool)arg1 ;
-(void)setBorderSurroundFooter:(bool)arg1 ;
-(void)setDefaultTabWidth:(unsigned short)arg1 ;
-(void)setAutoHyphenate:(bool)arg1 ;
-(void)setEvenAndOddHeaders:(bool)arg1 ;
-(void)setFootnotePosition:(int)arg1 ;
-(void)setEndnotePosition:(int)arg1 ;
-(void)setFootnoteNumberFormat:(int)arg1 ;
-(void)setEndnoteNumberFormat:(int)arg1 ;
-(void)setFootnoteRestart:(int)arg1 ;
-(void)setEndnoteRestart:(int)arg1 ;
-(void)setFootnoteNumberingStart:(unsigned short)arg1 ;
-(void)setGutterPosition:(int)arg1 ;
-(void)setBookFold:(bool)arg1 ;
-(void)setZoomPercentage:(short)arg1 ;
-(void)setShowOutline:(bool)arg1 ;
-(void)setKinsokuStrict:(bool)arg1 ;
-(void)setKinsokuAltBreakAfter:(id)arg1 ;
-(void)setKinsokuAltBreakBefore:(id)arg1 ;
-(id)imageBulletWithCharacterOffset:(int)arg1 ;
-(id)addList:(id)arg1 ;
-(void)addObjPointer:(id)arg1 ;
-(void)removeObjPointer:(id)arg1 ;
-(id)citationFor:(id)arg1 ;
-(void)addCitation:(id)arg1 forID:(id)arg2 ;
-(id)imageBulletParagraph;
-(id)newSectionIterator;
-(id)newMainBlocksIterator;
-(id)newMainRunsIterator;
-(id)newFootnoteIterator;
-(id)newEndnoteIterator;
-(id)newAnnotationIterator;
-(id)newFootnoteBlockIterator;
-(id)newEndnoteBlockIterator;
-(id)newAnnotationBlockIterator;
-(id)lastSection;
-(bool)mirrorMargins;
-(bool)borderSurroundHeader;
-(bool)borderSurroundFooter;
-(bool)graphicsInHeaderFooter;
-(void)setGraphicsInHeaderFooter:(bool)arg1 ;
-(id)kinsokuAltBreakBefore;
-(id)kinsokuAltBreakAfter;
-(bool)kinsokuStrict;
-(bool)autoHyphenate;
-(bool)evenAndOddHeaders;
-(int)footnoteNumberFormat;
-(int)endnoteNumberFormat;
-(int)footnotePosition;
-(int)endnotePosition;
-(int)footnoteRestart;
-(int)endnoteRestart;
-(unsigned short)footnoteNumberingStart;
-(unsigned long long)citationCount;
-(unsigned long long)listDefinitionCount;
-(id)listDefinitionAt:(int)arg1 ;
-(id)listDefinitionWithId:(long long)arg1 ;
-(id)addListDefinition;
-(int)gutterPosition;
-(bool)bookFold;
-(short)zoomPercentage;
-(void)addImageBullets;
-(unsigned long long)revisionAuthorCount;
-(id)revisionAuthorAt:(unsigned long long)arg1 ;
-(unsigned long long)revisionAuthorAddLookup:(id)arg1 ;
-(void)addRevisionAuthor:(id)arg1 ;
-(bool)showMarkup;
-(bool)showComments;
-(bool)trackChanges;
-(bool)showRevisionMarksOnScreen;
-(bool)showInsertionsAndDeletions;
-(bool)showFormatting;
-(bool)showOutline;
-(id)changeTrackingEditDates;
-(id)changeTrackingEditAuthors;
-(id)imageBulletText;
-(id)documentBackground;
-(void)removeEmptySections;
-(int)zIndexTotalForMainText;
-(int)zIndexTotalForHeaderFooterText;
-(id)sectionIterator;
-(id)mainBlocksIterator;
-(id)mainRunsIterator;
-(id)footnoteIterator;
-(id)endnoteIterator;
-(id)annotationIterator;
-(id)footnoteBlockIterator;
-(id)endnoteBlockIterator;
-(id)annotationBlockIterator;
-(bool)isFromBinary;
-(id)creationDate;
-(void)setCreationDate:(id)arg1 ;
-(id)styleSheet;
@end

