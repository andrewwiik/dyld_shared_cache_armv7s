/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class UILabel;

@interface MusicTableSectionHeaderView : UITableViewHeaderFooterView {

	double _backgroundTransitionWeighting;
	UILabel* _titleLabel;

}

@property (assign,nonatomic) double backgroundTransitionWeighting;              //@synthesize backgroundTransitionWeighting=_backgroundTransitionWeighting - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                            //@synthesize titleLabel=_titleLabel - In the implementation block
+(double)defaultHeight;
-(void)layoutSubviews;
-(id)titleLabel;
-(void)setTableViewStyle:(long long)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void).cxx_destruct;
-(void)setBackgroundTransitionWeighting:(double)arg1 ;
-(double)backgroundTransitionWeighting;
@end
