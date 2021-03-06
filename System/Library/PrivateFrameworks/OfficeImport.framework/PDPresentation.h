/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OCDDocument.h>

@class NSMutableArray, NSMutableDictionary;

@interface PDPresentation : OCDDocument {

	NSMutableArray* mSlideMasters;
	NSMutableArray* mNotesMasters;
	NSMutableArray* mSlides;
	NSMutableArray* mBulletBlips;
	CGSize mSlideSize;
	CGSize mNotesSize;
	bool mIsAutoPlay;
	bool mIsCommentsVisible;
	bool mIsLooping;
	bool mIsKiosk;
	NSMutableDictionary* mCommentAuthors;

}
-(void)cacheGraphicStylesForSlideBase:(id)arg1 ;
-(void)cacheGraphicStyleForDrawable:(id)arg1 colorContext:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(CGSize)slideSize;
-(unsigned)bulletBlipCount;
-(void)setSlideSize:(CGSize)arg1 ;
-(void)setNotesSize:(CGSize)arg1 ;
-(void)setIsCommentsVisible:(bool)arg1 ;
-(void)setIsLooping:(bool)arg1 ;
-(void)setIsKiosk:(bool)arg1 ;
-(id)slideMasterAtIndex:(unsigned long long)arg1 ;
-(CGSize)notesSize;
-(bool)isCommentsVisible;
-(id)bulletBlipAtIndex:(int)arg1 ;
-(bool)isLooping;
-(bool)isKiosk;
-(unsigned long long)notesMasterCount;
-(id)notesMasterAtIndex:(unsigned long long)arg1 ;
-(void)flushUnusedMastersAndLayouts;
-(unsigned long long)slideMasterCount;
-(unsigned long long)slideCount;
-(void)addSlideMaster:(id)arg1 ;
-(void)addSlide:(id)arg1 ;
-(void)addNotesMaster:(id)arg1 ;
-(unsigned)addBulletBlip:(id)arg1 ;
-(void)setIsAutoPlay:(bool)arg1 ;
-(id)slideAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfSlide:(id)arg1 ;
-(id)bulletBlips;
-(bool)isAutoPlay;
-(id)commentAuthorForId:(unsigned)arg1 ;
-(void)setCommentAuthor:(id)arg1 forId:(unsigned)arg2 ;
-(void)ensureDefaultLayoutsForMasters;
@end

