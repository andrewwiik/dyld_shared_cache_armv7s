/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <GameCenterUI/GKSectionMetrics.h>

@interface GKDynamicColumnSectionMetrics : GKSectionMetrics {

	unsigned long long _columnsInPortrait;
	unsigned long long _columnsInLandscape;

}

@property (assign,nonatomic) unsigned long long columnsInPortrait;               //@synthesize columnsInPortrait=_columnsInPortrait - In the implementation block
@property (assign,nonatomic) unsigned long long columnsInLandscape;              //@synthesize columnsInLandscape=_columnsInLandscape - In the implementation block
+(id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 ;
+(id)dynamicColumnSectionMetricsWithColumnsInPortrait:(unsigned long long)arg1 columnsInLandscape:(unsigned long long)arg2 forIdiom:(long long)arg3 ;
-(id)initWithIdiom:(long long)arg1 ;
-(CGSize)itemSizeForCollectionView:(id)arg1 ;
-(void)setColumnsInPortrait:(unsigned long long)arg1 ;
-(void)setColumnsInLandscape:(unsigned long long)arg1 ;
-(unsigned long long)columnsInPortrait;
-(unsigned long long)columnsInLandscape;
-(id)copyWithZone:(NSZone)arg1 ;
@end
