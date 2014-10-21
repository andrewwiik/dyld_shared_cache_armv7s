/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class VKVectorTile, VKStyle, VKRoadDrawStyle, VKLineDrawStyle, VKLabelDrawStyle, VKIntObjectMap, NSString;

@interface VKRoadGroup : NSObject {

	VKVectorTile* _tile;
	VKStyle* _style;
	VKRoadDrawStyle* _roadStyle;
	VKLineDrawStyle* _linetyle;
	VKLabelDrawStyle* _labelStyle;
	int _meshType;
	VKIntObjectMap* _roadMeshVendors;
	VKIntObjectMap* _capMeshVendors;
	int _highestZ;
	int _lowestZ;
	bool _frozen;
	bool _isPatternedRailway;
	VKLineDrawStyle* _lineStyle;

}

@property (nonatomic,readonly) VKVectorTile * tile;                        //@synthesize tile=_tile - In the implementation block
@property (nonatomic,readonly) VKRoadDrawStyle * roadStyle;                //@synthesize roadStyle=_roadStyle - In the implementation block
@property (nonatomic,readonly) VKLineDrawStyle * lineStyle;                //@synthesize lineStyle=_lineStyle - In the implementation block
@property (nonatomic,readonly) VKLabelDrawStyle * labelStyle;              //@synthesize labelStyle=_labelStyle - In the implementation block
@property (nonatomic,readonly) NSString * styleName; 
@property (nonatomic,readonly) int highestZ;                               //@synthesize highestZ=_highestZ - In the implementation block
@property (nonatomic,readonly) int lowestZ;                                //@synthesize lowestZ=_lowestZ - In the implementation block
@property (assign,nonatomic) bool isPatternedRailway;                      //@synthesize isPatternedRailway=_isPatternedRailway - In the implementation block
-(void)dealloc;
-(id)styleName;
-(void)freeze;
-(id)roadStyle;
-(id)lineStyle;
-(id)labelStyle;
-(void)freezeStructure;
-(id)initWithStyle:(id)arg1 tile:(id)arg2 createMesh:(bool)arg3 ofType:(int)arg4 ;
-(id)roadMeshVendorAtZ:(int)arg1 ;
-(id)capMeshVendorAtZ:(int)arg1 ;
-(unsigned long long)triangleCount;
-(id)tile;
-(int)highestZ;
-(int)lowestZ;
-(bool)isPatternedRailway;
-(void)setIsPatternedRailway:(bool)arg1 ;
@end
