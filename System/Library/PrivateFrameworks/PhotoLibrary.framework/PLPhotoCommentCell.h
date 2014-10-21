/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIView, PLCloudSharedComment;

@interface PLPhotoCommentCell : UITableViewCell {

	UILabel* _commentContentLabel;
	UILabel* _commentBylineLabel;
	UIView* _styledSeparatorView;
	PLCloudSharedComment* _comment;

}

@property (nonatomic,copy) PLCloudSharedComment * comment;                 //@synthesize comment=_comment - In the implementation block
@property (nonatomic,readonly) UILabel * commentContentLabel;              //@synthesize commentContentLabel=_commentContentLabel - In the implementation block
@property (nonatomic,readonly) UILabel * commentBylineLabel;               //@synthesize commentBylineLabel=_commentBylineLabel - In the implementation block
@property (nonatomic,readonly) UIView * styledSeparatorView;               //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
+(Class)layerClass;
+(double)heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3 ;
+(id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(bool)arg2 ;
+(id)_commentStringForComment:(id)arg1 ;
+(id)_attributionStringForComment:(id)arg1 ;
-(void)setComment:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)delete:(id)arg1 ;
-(void)_updateContent;
-(id)styledSeparatorView;
-(id)commentContentLabel;
-(id)commentBylineLabel;
-(id)comment;
@end

