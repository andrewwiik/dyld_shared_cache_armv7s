/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPDisposable.h>

@interface CPCluster : NSObject <CPDisposable> {

	const SCD_Struct_CP22* profile;
	unsigned xCount;
	double* x;
	double* dx;
	unsigned* dxOrderIndex;
	unsigned interClusterMinIndex;
	double* ddx;
	unsigned* ddxOrderIndex;
	unsigned interLevelMinIndex;
	unsigned minClusterSize;
	double maxClusterSpread;
	double minInterClusterDiff;
	double minInterLevel2ndDiff;
	unsigned clusterCount;
	SCD_Struct_CP23* xStats;
	unsigned levels;
	SCD_Struct_CP23* dxStats;
	bool ownData;
	bool ownDifferences;

}
+(void)clusterTextLine:(id)arg1 ;
+(void)reclusterTextLine:(id)arg1 fromWordIndex:(unsigned)arg2 count:(unsigned*)arg3 ;
+(unsigned*)createOrderIndexFor:(double*)arg1 ofSize:(unsigned)arg2 ;
-(void)findClustersFromCharacterSequence:(id)arg1 withSpaceHint:(bool)arg2 ;
-(void)makeWords:(SCD_Struct_CP16*)arg1 count:(unsigned)arg2 fromCharacterSequence:(id)arg3 charOffset:(unsigned)arg4 ;
-(void)tryLevel0SplitBetween:(double)arg1 and:(double)arg2 usingHints:(SCD_Struct_CP23*)arg3 ;
-(void)dealloc;
-(id)init;
-(void)dispose;
-(unsigned)levels;
-(id)initWithProfile:(const SCD_Struct_CP22*)arg1 ;
-(bool)joinLevelsFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)splitSecondDifferences;
-(void)assembleDifferenceStats;
-(bool)coalesceFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)computeDataFromDifferences;
-(void)assembleDensityDifferenceStats;
-(void)computeDifferencesFromData;
-(void)analyzeDifferences;
-(void)analyzeDensities;
-(bool)splitLevelAtIndex:(unsigned)arg1 betweenValue:(double)arg2 andValue:(double)arg3 ;
-(bool)joinClosestLevelPairFrom:(unsigned)arg1 to:(unsigned)arg2 ;
-(void)assembleDataStats;
-(void)setMinimumClusterSize:(unsigned)arg1 ;
-(void)setMaximumClusterSpread:(double)arg1 ;
-(void)setMinimumRecognizedInterClusterDifference:(double)arg1 ;
-(void)setMinimumRecognizedInterLevel2ndDifference:(double)arg1 ;
-(void)findClusters:(double*)arg1 count:(unsigned)arg2 ;
-(void)findClustersFromDifferences:(double*)arg1 count:(unsigned)arg2 ;
-(void)findDensityClusters:(double*)arg1 count:(unsigned)arg2 ;
-(bool)applyDifferenceHints:(SCD_Struct_CP23*)arg1 count:(unsigned)arg2 ;
-(unsigned)clusterCount;
-(SCD_Struct_CP23)clusterStatisticsAtIndex:(unsigned)arg1 ;
-(SCD_Struct_CP23)differenceClusterStatisticsAtIndex:(unsigned)arg1 ;
-(SCD_Struct_CP23)largestClusterStatistics;
-(void)finalize;
@end

