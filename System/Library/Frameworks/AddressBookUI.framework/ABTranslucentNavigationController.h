/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol ABStyleProvider;
@interface ABTranslucentNavigationController : UINavigationController {

	bool _overridesNavigationBarInset;
	<ABStyleProvider>* _styleProvider;

}

@property (assign,nonatomic) bool overridesNavigationBarInset;               //@synthesize overridesNavigationBarInset=_overridesNavigationBarInset - In the implementation block
@property (nonatomic,retain) <ABStyleProvider> * styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(bool)overridesNavigationBarInset;
-(void)setOverridesNavigationBarInset:(bool)arg1 ;
-(bool)_shouldNavigationBarInsetViewController:(id)arg1 ;
@end

