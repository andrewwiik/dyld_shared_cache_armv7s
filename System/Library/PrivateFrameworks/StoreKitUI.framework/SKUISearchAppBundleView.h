/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:50 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UILabel, NSString;

@interface SKUISearchAppBundleView : UIView {

	NSArray* _imageViews;
	NSArray* _labels;
	UILabel* _headerLabel;
	long long _count;

}

@property (assign,nonatomic) long long count;                   //@synthesize count=_count - In the implementation block
@property (nonatomic,copy) NSString * headerTitle; 
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)count;
-(void)layoutSubviews;
-(void)setCount:(long long)arg1 ;
-(void).cxx_destruct;
-(id)headerTitle;
-(void)setHeaderTitle:(id)arg1 ;
-(id)imageAtIndex:(long long)arg1 ;
-(void)setImage:(id)arg1 atIndex:(long long)arg2 ;
-(void)_reload;
-(void)setTitle:(id)arg1 atIndex:(long long)arg2 ;
-(id)titleAtIndex:(long long)arg1 ;
@end

