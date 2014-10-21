/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:34 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, NSString;

@interface _MCDAlbumTracksCell : UITableViewCell {

	UILabel* _titleLabel;
	UILabel* _trackNumberLabel;
	UILabel* _durationLabel;
	double _maximumDurationWidth;

}

@property (nonatomic,copy) NSString * trackNumberText; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * durationText; 
@property (assign,nonatomic) double maximumDurationWidth;              //@synthesize maximumDurationWidth=_maximumDurationWidth - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(void).cxx_destruct;
-(double)maximumDurationWidth;
-(void)setDurationText:(id)arg1 ;
-(void)setMaximumDurationWidth:(double)arg1 ;
-(void)setTrackNumberText:(id)arg1 ;
-(id)durationText;
-(id)trackNumberText;
@end

