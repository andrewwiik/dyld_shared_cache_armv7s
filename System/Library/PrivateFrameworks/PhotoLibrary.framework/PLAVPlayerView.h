/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerLayer;

@interface PLAVPlayerView : UIView {

	unsigned long long _scaleMode;

}

@property (nonatomic,retain) AVPlayer * player; 
@property (assign,nonatomic) unsigned long long scaleMode;              //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,readonly) AVPlayerLayer * layer; 
+(Class)layerClass;
-(unsigned long long)scaleMode;
-(void)setScaleMode:(unsigned long long)arg1 ;
-(void)setScaleMode:(unsigned long long)arg1 duration:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)player;
-(void)setPlayer:(id)arg1 ;
@end

