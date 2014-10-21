/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class CALayer, UIImage;

@interface MPArtworkSheenView : UIView {

	CALayer* _imageLayer;
	id _motionManagerObserver;
	double _rotation;

}

@property (nonatomic,retain) UIImage * image; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)image;
-(void).cxx_destruct;
@end

