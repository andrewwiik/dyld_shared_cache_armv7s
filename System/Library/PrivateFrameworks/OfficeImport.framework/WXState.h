/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OCCancelDelegate;
#import <OfficeImport/OfficeImport-Structs.h>
@class WDDocument, TSUNoCopyDictionary, OCPPackagePart, NSMutableArray, WXOAVState, OAXDrawingState, WDCharacterRun;

@interface WXState : NSObject {

	WDDocument* mDocument;
	TSUNoCopyDictionary* mTextNodesToBeAdded;
	TSUNoCopyDictionary* mMapBookmarkIdToName;
	TSUNoCopyDictionary* mMapAnnotationIdToAnnotation;
	OCPPackagePart* mPackagePart;
	OCPPackagePart* mAnnotationPart;
	xmlDoc* mFootnoteDocument;
	xmlNode* mFootnotes;
	xmlDoc* mEndnoteDocument;
	xmlNode* mEndnotes;
	xmlDoc* mAnnotationDocument;
	xmlNode* mAnnotations;
	NSMutableArray* mDeleteAuthorStack;
	NSMutableArray* mDeleteDateStack;
	NSMutableArray* mEditAuthorStack;
	NSMutableArray* mEditDateStack;
	NSMutableArray* mFormatAuthorStack;
	NSMutableArray* mFormatDateStack;
	WXOAVState* mWXOavState;
	OAXDrawingState* mDrawingState;
	int mCurrentOfficeArtTextType;
	WDCharacterRun* mReadSymbolTo;
	bool mNewSectionRequested;
	unsigned long long mCurrentRowCNFStyle;
	unsigned long long mCurrentCellCNFStyle;
	bool mCurrentTableWraps;
	<OCCancelDelegate>* mCancelDelegate;
	bool mIsThumbnail;

}

@property (assign,nonatomic) int currentOfficeArtTextType; 
@property (nonatomic,retain) <OCCancelDelegate> * cancelDelegate; 
-(void)dealloc;
-(id)init;
-(id)document;
-(void)setDocument:(id)arg1 ;
-(bool)isThumbnail;
-(void)setIsThumbnail:(bool)arg1 ;
-(id)drawingState;
-(id)packagePart;
-(void)setPackagePart:(id)arg1 ;
-(id)cancelDelegate;
-(void)setCancelDelegate:(id)arg1 ;
-(bool)hasAnnotations;
-(id)annotationWithID:(long long)arg1 ;
-(xmlNode*)xmlAnnotationWithID:(long long)arg1 ;
-(void)addAnnotationID:(long long)arg1 annotation:(id)arg2 ;
-(id)annotationPart;
-(id)initNoStacksWith:(id)arg1 ;
-(void)addBookmarkId:(long long)arg1 name:(id)arg2 ;
-(id)bookmarkName:(long long)arg1 ;
-(id)currentDeleteAuthor;
-(id)currentDeleteDate;
-(id)currentEditAuthor;
-(id)currentEditDate;
-(void)setDocumentPart:(id)arg1 ;
-(id)wxoavState;
-(xmlNode*)xmlFootnoteWithID:(long long)arg1 ;
-(xmlNode*)xmlEndnoteWithID:(long long)arg1 ;
-(bool)isNewSectionRequested;
-(void)setNewSectionRequested:(bool)arg1 ;
-(void)setReadSymbolTo:(id)arg1 ;
-(void)setCurrentOfficeArtTextType:(int)arg1 ;
-(int)currentOfficeArtTextType;
-(unsigned long long)currentRowCNFStyle;
-(unsigned long long)currentCellCNFStyle;
-(id)readSymbolTo;
-(void)pushEditAuthor:(id)arg1 date:(id)arg2 ;
-(void)popEditAuthorDate;
-(void)pushDeleteAuthor:(id)arg1 date:(id)arg2 ;
-(void)popDeleteAuthorDate;
-(id)nodesToBeAdded:(id)arg1 ;
-(void)clearOutNodesToBeAdded:(id)arg1 ;
-(void)addText:(id)arg1 node:(xmlNode*)arg2 ;
-(void)setAnnotationPart:(id)arg1 ;
-(void)pushFormatAuthor:(id)arg1 date:(id)arg2 ;
-(void)popFormatAuthorDate;
-(id)currentFormatAuthor;
-(id)currentFormatDate;
-(void)setCurrentRowCNFStyle:(unsigned long long)arg1 ;
-(void)setCurrentCellCNFStyle:(unsigned long long)arg1 ;
-(void)setCurrentTableWraps:(bool)arg1 ;
-(bool)currentTableWraps;
@end

