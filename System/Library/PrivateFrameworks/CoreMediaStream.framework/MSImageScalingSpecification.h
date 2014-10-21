/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreMediaStream/CoreMediaStream-Structs.h>
@interface MSImageScalingSpecification : NSObject {

	int _assetTypeFlags;
	double _nominalShortSideLength;
	double _minimumLongSideLength;
	double _maximumLongSideLength;

}

@property (assign,nonatomic) double nominalShortSideLength;              //@synthesize nominalShortSideLength=_nominalShortSideLength - In the implementation block
@property (assign,nonatomic) double minimumLongSideLength;               //@synthesize minimumLongSideLength=_minimumLongSideLength - In the implementation block
@property (assign,nonatomic) double maximumLongSideLength;               //@synthesize maximumLongSideLength=_maximumLongSideLength - In the implementation block
@property (assign,nonatomic) int assetTypeFlags;                         //@synthesize assetTypeFlags=_assetTypeFlags - In the implementation block
+(id)specificationWithSharedAlbumSpecificationString:(id)arg1 ;
+(id)assetsToGenerateFromImageWithInputSize:(CGSize)arg1 toConformToSpecifications:(id)arg2 ;
-(id)description;
-(void)setAssetTypeFlags:(int)arg1 ;
-(double)nominalShortSideLength;
-(double)minimumLongSideLength;
-(double)maximumLongSideLength;
-(void)setNominalShortSideLength:(double)arg1 ;
-(void)setMinimumLongSideLength:(double)arg1 ;
-(void)setMaximumLongSideLength:(double)arg1 ;
-(int)assetTypeFlags;
-(double)scaleFactorForInputSize:(CGSize)arg1 ;
@end

