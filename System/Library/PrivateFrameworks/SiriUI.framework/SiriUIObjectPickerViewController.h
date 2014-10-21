/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:41 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol SiriUIObjectPickerViewControllerDelegate;
@class SAUIDomainObjectPicker, SiriUIObjectPickerButtonView;

@interface SiriUIObjectPickerViewController : UIViewController {

	bool _showsTopKeyline;
	<SiriUIObjectPickerViewControllerDelegate>* _pickerDelegate;
	SAUIDomainObjectPicker* _picker;

}

@property (assign,nonatomic,__weak) <SiriUIObjectPickerViewControllerDelegate> * pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
@property (assign,nonatomic) bool showsTopKeyline;                                                            //@synthesize showsTopKeyline=_showsTopKeyline - In the implementation block
@property (getter=_picker,nonatomic,readonly) SAUIDomainObjectPicker * picker;                                //@synthesize picker=_picker - In the implementation block
@property (nonatomic,readonly) SiriUIObjectPickerButtonView * view; 
+(double)defaultHeight;
+(id)pickerControllerWithPicker:(id)arg1 ;
-(void)loadView;
-(void).cxx_destruct;
-(id)pickerDelegate;
-(void)setPickerDelegate:(id)arg1 ;
-(void)setShowsTopKeyline:(bool)arg1 ;
-(id)_picker;
-(bool)showsTopKeyline;
-(id)initWithPicker:(id)arg1 ;
-(void)_pickerButtonTapped:(id)arg1 ;
@end

