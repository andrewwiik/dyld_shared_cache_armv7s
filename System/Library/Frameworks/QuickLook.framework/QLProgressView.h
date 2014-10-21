/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel, NSString;

@interface QLProgressView : UIView {

	int _backgroundColorType;
	UIActivityIndicatorView* _progressIndicator;
	UILabel* _loadingTextLabel;

}

@property (copy) NSString * loadingText; 
@property (assign) int backgroundColorType; 
-(void)setBackgroundColorType:(int)arg1 ;
-(int)backgroundColorType;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)_update;
-(id)loadingText;
-(void)setLoadingText:(id)arg1 ;
@end
