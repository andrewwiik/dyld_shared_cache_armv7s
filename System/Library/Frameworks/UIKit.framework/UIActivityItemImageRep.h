/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIActivityItemImageRep : NSObject {

	id _asset;
	/*^block*/ id _thumbnailProvider;
	/*^block*/ id _dataProvider;

}

@property (nonatomic,retain) id asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id thumbnailProvider;              //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (nonatomic,copy) id dataProvider;                   //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(/*^block*/ id)arg2 dataProvider:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)data;
-(void)setAsset:(id)arg1 ;
-(id)asset;
-(id)thumbnail;
-(void)setThumbnailProvider:(/*^block*/ id)arg1 ;
-(void)setDataProvider:(/*^block*/ id)arg1 ;
-(/*^block*/ id)thumbnailProvider;
-(/*^block*/ id)dataProvider;
@end

