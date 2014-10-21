/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUTiledLayoutGenerator.h>

@interface PUVerticalTiledLayoutGenerator : PUTiledLayoutGenerator {

	CGPoint _origin;
	SCD_Struct_PU11 _enqueuedCaptionTileInfo;
	bool _shouldDisplayCaptionsBelowBatches;
	double _referenceWidth;

}

@property (assign,nonatomic) double referenceWidth;                               //@synthesize referenceWidth=_referenceWidth - In the implementation block
@property (assign,nonatomic) bool shouldDisplayCaptionsBelowBatches;              //@synthesize shouldDisplayCaptionsBelowBatches=_shouldDisplayCaptionsBelowBatches - In the implementation block
-(void)setShouldDisplayCaptionsBelowBatches:(bool)arg1 ;
-(bool)shouldDisplayCaptionsBelowBatches;
-(void)setReferenceWidth:(double)arg1 ;
-(void)willParseTiles;
-(void)didParseTiles;
-(bool)parseNextTiles;
-(double)referenceDistanceForMagneticGuidelines;
-(bool)_parseTileRequiringFullWidth;
-(bool)_parseSpecialSequence;
-(bool)_parseSpecialTileTriplet;
-(bool)_parseTileTriplet;
-(bool)_parseTilePair;
-(bool)_parseSingleTile;
-(bool)_dequeueCaption;
-(double)referenceWidth;
-(bool)_addRowWithContiguousTiles:(SCD_Struct_PU12*)arg1 count:(long long)arg2 ;
-(bool)_scanTilePair:(SCD_Struct_PU12*)arg1 ;
-(bool)_scanTileTriplet:(SCD_Struct_PU12*)arg1 ;
-(bool)_scanTileRequiringFullWidth:(SCD_Struct_PU12*)arg1 ;
-(bool)_scanTileRequiringNewRow:(SCD_Struct_PU12*)arg1 ;
-(bool)_hasLeftSuboptimalRow;
-(bool)_addRowWithTiles:(SCD_Struct_PU12*)arg1 imageFrames:(CGRect*)arg2 count:(long long)arg3 ;
-(bool)_scanTripletWithLargeLead:(SCD_Struct_PU12*)arg1 ;
-(bool)_scanTripletWithRearrangment:(SCD_Struct_PU12*)arg1 ;
-(bool)_parseSpecialSubsequenceWithRowRequired:(bool)arg1 rowParsed:(bool*)arg2 ;
-(bool)_scanSpecialSequenceBlock:(SCD_Struct_PU12*)arg1 ;
-(bool)_scanSpecialSequenceRow:(SCD_Struct_PU12*)arg1 count:(long long*)arg2 ;
-(bool)_addSpecialSequenceBlock:(SCD_Struct_PU12*)arg1 ;
-(bool)_scanNonPanoramaSequence:(SCD_Struct_PU12*)arg1 count:(long long)arg2 ;
-(bool)_isAtEndOfRow;
-(bool)_hasEnqueuedCaption;
-(void)_enumerateRowFramesWithContiguousTiles:(SCD_Struct_PU12*)arg1 count:(long long)arg2 useMagneticGuidelines:(bool)arg3 block:(/*^block*/ id)arg4 ;
-(void)_willAddRowWithFirstTileInfo:(SCD_Struct_PU12)arg1 ;
-(void)_enqueueCaptionWithTileInfo:(SCD_Struct_PU12)arg1 ;
@end

