/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView;

@interface ABStarkContactNameView : UIView {

	UILabel* _nameLabel;
	UIImageView* _photoImageView;

}

@property (nonatomic,retain) UILabel * nameLabel;                       //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * photoImageView;              //@synthesize photoImageView=_photoImageView - In the implementation block
-(id)nameLabel;
-(void)setNameLabel:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setPhotoImageView:(id)arg1 ;
-(id)photoImageView;
@end
