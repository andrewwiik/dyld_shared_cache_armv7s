/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface MailboxGroupedPickerTableCell : UITableViewCell {

	UILabel* _mailboxText;
	UIImageView* _mailboxIcon;
	unsigned _level;
	unsigned _disabled : 1;
	unsigned _rootMailbox : 1;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)fontSize;
-(void)setCurrentMailbox:(bool)arg1 ;
-(void)setMailboxType:(int)arg1 ;
-(bool)isCellEnabled;
-(int)levelForMailbox:(id)arg1 ;
-(id)_mailboxFontForSize:(double)arg1 ;
-(void)_setupMailboxIconForImage:(id)arg1 ;
-(id)nameForMailbox:(id)arg1 ;
-(double)horizontalContentOffset;
-(void)setMailbox:(id)arg1 ;
-(void)setCellEnabled:(bool)arg1 ;
@end

