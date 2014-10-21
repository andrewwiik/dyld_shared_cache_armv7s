/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIView.h>

@protocol QLGenericViewDelegate;
@class UIView, UIImageView, UILabel, UIButton, NSError, NSString, NSAttributedString;

@interface QLGenericView : UIView {

	UIView* _containerView;
	UIImageView* _iconView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIButton* _showArchiveContentButton;
	NSError* _error;
	<QLGenericViewDelegate>* delegate;

}

@property (copy) NSString * title; 
@property (copy) NSString * subtitle; 
@property (copy) NSAttributedString * attributedSubtitle; 
@property (assign) bool showArchiveButton; 
@property (assign) <QLGenericViewDelegate> * delegate; 
-(void)showArchiveContents:(id)arg1 ;
-(void)setShowArchiveButton:(bool)arg1 ;
-(void)_updateContainerFrameForOrientation:(long long)arg1 ;
-(void)setAttributedSubtitle:(id)arg1 ;
-(id)attributedSubtitle;
-(bool)showArchiveButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(id)delegate;
-(id)title;
-(void)setSubtitle:(id)arg1 ;
-(id)subtitle;
@end

