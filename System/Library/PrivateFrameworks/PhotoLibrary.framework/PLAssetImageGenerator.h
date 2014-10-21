/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class AVAssetImageGenerator;

@interface PLAssetImageGenerator : NSObject {

	bool _inUse;
	AVAssetImageGenerator* _imageGenerator;

}

@property (nonatomic,retain) AVAssetImageGenerator * imageGenerator;              //@synthesize imageGenerator=_imageGenerator - In the implementation block
@property (assign,nonatomic) bool inUse;                                          //@synthesize inUse=_inUse - In the implementation block
-(void)dealloc;
-(id)initWithAsset:(id)arg1 ;
-(void)setInUse:(bool)arg1 ;
-(void)setImageGenerator:(id)arg1 ;
-(id)imageGenerator;
-(bool)inUse;
@end

