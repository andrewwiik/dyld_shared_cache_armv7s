/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UITextMagnifierTimeWeightedPoint : NSObject {

	int m_index;
	SCD_Struct_UI54 m_points[16];

}

@property (nonatomic,readonly) CGPoint weightedPoint; 
-(float)distanceCoveredInInterval:(double)arg1 priorTo:(double)arg2 ;
-(CGSize)displacementInInterval:(double)arg1 priorTo:(double)arg2 ;
-(void)clearHistory;
-(void)addPoint:(CGPoint)arg1 ;
-(CGPoint)weightedPoint;
-(bool)historyCovers:(double)arg1 ;
-(float)distanceCoveredInInterval:(double)arg1 ;
-(CGSize)displacementInInterval:(double)arg1 ;
@end

