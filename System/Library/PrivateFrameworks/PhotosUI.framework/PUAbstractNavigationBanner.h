/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PUAbstractNavigationBannerDelegate;
@class UIView;

@interface PUAbstractNavigationBanner : NSObject {

	<PUAbstractNavigationBannerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <PUAbstractNavigationBannerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) UIView * view; 
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(id)view;
-(double)height;
-(void).cxx_destruct;
@end

