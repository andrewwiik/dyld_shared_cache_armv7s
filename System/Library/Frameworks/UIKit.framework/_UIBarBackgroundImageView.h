/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIImageView.h>

@class UIView, UIImageView;

@interface _UIBarBackgroundImageView : UIImageView {

	UIView* _topStripView;
	UIImageView* _customImageContainer;
	bool _translucent;

}

@property (assign,getter=isTranslucent,nonatomic) bool translucent;              //@synthesize translucent=_translucent - In the implementation block
-(void)setImage:(id)arg1 ;
-(bool)isTranslucent;
-(id)image;
-(id)topStripView;
-(void)setTranslucent:(bool)arg1 ;
-(void)updateTopStripViewCreateIfNecessary;
-(void)removeTopStripView;
@end

