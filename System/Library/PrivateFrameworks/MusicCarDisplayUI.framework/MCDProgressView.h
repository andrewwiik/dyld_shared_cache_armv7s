/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface MCDProgressView : UIView {

	bool _progressActive;
	UILabel* _timeLabel;
	UILabel* _timeRemainingLabel;
	UIView* _progressView;
	UIView* _trackView;
	UIView* _indicatorView;
	float _progress;
	bool _isLive;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void).cxx_destruct;
-(void)setPlaybackTime:(double)arg1 duration:(double)arg2 ;
@end
