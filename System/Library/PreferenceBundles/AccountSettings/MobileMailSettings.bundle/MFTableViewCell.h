/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIColor;

@interface MFTableViewCell : UITableViewCell {

	UIColor* _savedTextColor;
	bool _shouldDisableWhileEditing;

}

@property (nonatomic,readonly) double accessoryWidth; 
@property (assign,nonatomic) bool disabled; 
@property (assign,nonatomic) bool shouldDisableWhileEditing;              //@synthesize shouldDisableWhileEditing=_shouldDisableWhileEditing - In the implementation block
+(double)defaultAccessoryWidth;
+(double)reorderingAccessoryWidth;
-(void)dealloc;
-(void)prepareForReuse;
-(void)willTransitionToState:(unsigned long long)arg1 ;
-(bool)disabled;
-(void)setDisabled:(bool)arg1 ;
-(void)setShouldDisableWhileEditing:(bool)arg1 ;
-(bool)shouldDisableWhileEditing;
-(double)accessoryWidth;
@end
