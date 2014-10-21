/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface CKContactAlertView : UIView {

	NSString* _contactDescription;
	UIImage* _image;
	UIImageView* _contactImageView;
	UILabel* _contactLabel;

}

@property (nonatomic,retain) NSString * contactDescription;               //@synthesize contactDescription=_contactDescription - In the implementation block
@property (nonatomic,retain) UIImage * image;                             //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;              //@synthesize contactImageView=_contactImageView - In the implementation block
@property (nonatomic,retain) UILabel * contactLabel;                      //@synthesize contactLabel=_contactLabel - In the implementation block
-(id)contactImageView;
-(void)setContactImageView:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(id)image;
-(void)setContactDescription:(id)arg1 ;
-(id)contactDescription;
-(id)contactLabel;
-(void)setContactLabel:(id)arg1 ;
@end

