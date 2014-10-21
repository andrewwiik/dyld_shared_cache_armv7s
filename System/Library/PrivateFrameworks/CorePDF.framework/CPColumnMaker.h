/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject {

	NSMutableArray* columns;
	CPZone* currentZone;
	NSMutableArray* allParagraphs;
	NSMutableArray* thinHorizontalShapes;
	NSMutableArray* otherShapes;
	NSMutableArray* images;
	NSMutableArray* paragraphWrappers;
	CGRect pageBounds;
	double maxParagraphDistance;

}

@property (assign) CGRect pageBounds; 
-(void)dealloc;
-(id)init;
-(void)setPageBounds:(CGRect)arg1 ;
-(void)makeColumnsFrom:(id)arg1 zone:(id)arg2 ;
-(bool)paragraph:(id)arg1 isAbove:(id)arg2 ;
-(bool)paragraph:(id)arg1 isBelow:(id)arg2 ;
-(id)paragraphAbove:(id)arg1 in:(id)arg2 ;
-(bool)paragraph:(id)arg1 isLinkedBelowTo:(id)arg2 ;
-(void)intersectionCallout:(id)arg1 ;
-(double)averageSpacing:(id)arg1 ;
-(bool)closeImagesBetween:(id)arg1 and:(id)arg2 bounds:(CGRect)arg3 ;
-(void)partitionShapes:(id)arg1 ;
-(void)callOuts;
-(bool)canSafelyAdd:(id)arg1 to:(id)arg2 ;
-(void)splitColumns:(id)arg1 ;
-(void)anchorImages;
-(bool)intervalOverlapLeft:(double)arg1 right:(double)arg2 paragraphs:(id)arg3 ;
-(bool)cuttingShapeBetween:(id)arg1 and:(id)arg2 ;
-(bool)paragraph:(id)arg1 notOnSameShapeAs:(id)arg2 ;
-(id)paragraphBelow:(id)arg1 in:(id)arg2 ;
-(id)chunkAbove:(id)arg1 in:(id)arg2 ;
-(bool)column:(id)arg1 isLinkedBelowTo:(id)arg2 ;
-(CGRect)pageBounds;
-(id)columns;
@end

