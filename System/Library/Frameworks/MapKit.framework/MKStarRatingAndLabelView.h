/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class MKStarRatingView, UILabel, NSString;

@interface MKStarRatingAndLabelView : UIView {

	MKStarRatingView* _starRatingView;
	UILabel* _reviewsLabel;
	NSString* _sourceName;
	long long _numberOfReviews;
	bool _displaysSourceOfReviews;

}

@property (nonatomic,readonly) MKStarRatingView * starRatingView;              //@synthesize starRatingView=_starRatingView - In the implementation block
@property (nonatomic,readonly) UILabel * reviewsLabel;                         //@synthesize reviewsLabel=_reviewsLabel - In the implementation block
@property (assign,nonatomic) long long numberOfReviews;                        //@synthesize numberOfReviews=_numberOfReviews - In the implementation block
@property (nonatomic,retain) NSString * sourceName;                            //@synthesize sourceName=_sourceName - In the implementation block
-(void)_setStarStyle:(int)arg1 ;
-(void)_mapkit_setCalloutTextColor:(id)arg1 ;
-(void)setDisplaysSourceOfReviews:(bool)arg1 ;
-(id)starRatingView;
-(id)reviewsLabel;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void).cxx_destruct;
-(void)setNumberOfReviews:(long long)arg1 ;
-(long long)numberOfReviews;
-(void)setSourceName:(id)arg1 ;
-(id)sourceName;
@end

