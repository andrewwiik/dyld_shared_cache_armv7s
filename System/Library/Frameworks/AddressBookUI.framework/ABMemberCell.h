/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class ABStyleProvider, ABMemberNameView, ABUIPerson;

@interface ABMemberCell : UITableViewCell {

	ABStyleProvider* _styleProvider;
	bool _layoutComplete;
	bool _isMeCard;
	ABMemberNameView* _contactNameView;
	ABUIPerson* _person;

}

@property (nonatomic,readonly) <ABStyleProvider> * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) ABUIPerson * person;                              //@synthesize person=_person - In the implementation block
@property (assign,nonatomic) bool isMeCard;                                    //@synthesize isMeCard=_isMeCard - In the implementation block
@property (nonatomic,retain) ABMemberNameView * contactNameView;               //@synthesize contactNameView=_contactNameView - In the implementation block
-(id)styleProvider;
-(void)setIsMeCard:(bool)arg1 ;
-(id)initWithStyleProvider:(id)arg1 reuseIdentifier:(id)arg2 ;
-(id)contactNameView;
-(void)setContactNameView:(id)arg1 ;
-(bool)isMeCard;
-(void)setUserInteractionEnabled:(bool)arg1 ;
-(void)dealloc;
-(void)setNeedsLayout;
-(void)layoutSubviews;
-(id)description;
-(id)_scriptingInfo;
-(void)setHighlighted:(bool)arg1 ;
-(void)setHighlighted:(bool)arg1 animated:(bool)arg2 ;
-(void)setSelected:(bool)arg1 animated:(bool)arg2 ;
-(id)person;
-(void)setPerson:(id)arg1 ;
@end
