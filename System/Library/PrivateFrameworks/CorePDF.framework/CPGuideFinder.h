/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@class CPZone, CPCluster, NSMutableArray;

@interface CPGuideFinder : NSObject <CPDisposable> {

	CPZone* contentZone;
	unsigned countOfWordsInZone;
	double* anchorArray;
	double* rightHandSideArray;
	SCD_Struct_CP29* crossingWordArray;
	CPCluster* anchors;
	CPCluster* rightHandSides;
	double medianFontSizeOfFirstCharacter;
	double medianFontSizeOfLastCharacter;
	NSMutableArray* gutters;
	NSMutableArray* leftGuides;
	NSMutableArray* rightGuides;

}
+(bool)gutterSeparates:(id)arg1 from:(id)arg2 ;
+(void)reclusterPreservingAlignment:(id)arg1 ;
+(void)reclusterBetweenGuides:(id)arg1 ;
+(bool)guideSeparates:(id)arg1 from:(id)arg2 ;
-(void)dealloc;
-(void)dispose;
-(id)leftGuides;
-(id)rightGuides;
-(id)gutters;
-(id)initWithContentZone:(id)arg1 ;
-(void)findGutters;
-(void)findGuides;
-(void)markTextLines;
-(void)splitTextLines;
-(bool)addStripTo:(id)arg1 bottom:(double)arg2 left:(double)arg3 top:(double)arg4 right:(double)arg5 ;
-(void)setAlignForWordWithExtent:(SCD_Struct_CP29*)arg1 stripArray:(id)arg2 stripMax:(double)arg3 ;
-(void)subdivideStripInto:(id)arg1 from:(double)arg2 to:(double)arg3 borderedBy:(SCD_Struct_CP29*)arg4 ofCount:(unsigned)arg5 crossedBy:(SCD_Struct_CP29*)arg6 ofCount:(unsigned)arg7 ;
-(void)getWordEdges;
-(void)findWordEdgeClusters;
-(void)subdivideGutterFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)subdivideLeftGuideAt:(unsigned)arg1 ;
-(void)subdivideRightGuideAt:(unsigned)arg1 ;
-(bool)hasGutters;
-(bool)hasLeftGuides;
-(bool)hasRightGuides;
-(void)splitTextLinesAtBorderWords;
-(void)splitTextLinesBetweenBorderWords;
-(double)medianFontSizeOfFirstCharacter;
-(double)medianFontSizeOfLastCharacter;
-(void)finalize;
@end

