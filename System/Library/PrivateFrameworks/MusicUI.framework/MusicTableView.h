/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MusicUI/MusicUI-Structs.h>
#import <UIKit/UITableView.h>

@interface MusicTableView : UITableView {

	double _headerBackgroundTransitionWeighting;
	double _footerBackgroundTransitionWeighting;
	double _minimumContentSizeHeightAdditions;

}

@property (assign,nonatomic) double headerBackgroundTransitionWeighting;              //@synthesize headerBackgroundTransitionWeighting=_headerBackgroundTransitionWeighting - In the implementation block
@property (assign,nonatomic) double footerBackgroundTransitionWeighting;              //@synthesize footerBackgroundTransitionWeighting=_footerBackgroundTransitionWeighting - In the implementation block
@property (assign,nonatomic) double minimumContentSizeHeightAdditions;                //@synthesize minimumContentSizeHeightAdditions=_minimumContentSizeHeightAdditions - In the implementation block
-(void)layoutSubviews;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setTableHeaderBackgroundColor:(id)arg1 ;
-(void)updateVisibleHeaderFooterState;
-(double)footerBackgroundTransitionWeighting;
-(double)headerBackgroundTransitionWeighting;
-(void)updateStateForHeaderView:(id)arg1 inSection:(long long)arg2 ;
-(void)updateStateForFooterView:(id)arg1 inSection:(long long)arg2 ;
-(void)setHeaderBackgroundTransitionWeighting:(double)arg1 ;
-(void)setFooterBackgroundTransitionWeighting:(double)arg1 ;
-(double)minimumContentSizeHeightAdditions;
-(void)setMinimumContentSizeHeightAdditions:(double)arg1 ;
@end

