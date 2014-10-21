/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild {

	NSMutableArray* mTimeNodeDataList;
	double mAutoAdvanceTime;
	bool mIsReversedParagraphOrder;
	int mBuildLevel;
	int mType;

}
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setAutoAdvanceTime:(double)arg1 ;
-(void)setIsReversedParagraphOrder:(bool)arg1 ;
-(void)setBuildLevel:(int)arg1 ;
-(unsigned long long)timeNodeDataListCount;
-(id)timeNodeDataAtIndex:(unsigned long long)arg1 ;
-(id)addTimeNodeData;
-(id)timeNodeDataList;
-(double)autoAdvanceTime;
-(bool)isReversedParagraphOrder;
-(int)buildLevel;
@end

