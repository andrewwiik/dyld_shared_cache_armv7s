/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABPickerViewControllerDelegate.h>
#import <AddressBookUI/ABImagePickerControllerDelegate.h>

@class ABImagePickerController, ABStyleProvider, ABPersonTableViewDataSource, ABPersonViewControllerHelper;

@interface ABPersonPickersDelegate : NSObject <ABPickerViewControllerDelegate, ABImagePickerControllerDelegate> {

	ABStyleProvider* _styleProvider;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonViewControllerHelper* _helper;
	ABImagePickerController* _imagePicker;

}

@property (nonatomic,retain) ABStyleProvider * styleProvider;                       //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) ABPersonTableViewDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) ABPersonViewControllerHelper * helper;                 //@synthesize helper=_helper - In the implementation block
@property (assign,nonatomic) bool popoverSizeUpdatesDisabled; 
@property (nonatomic,readonly) ABImagePickerController * imagePicker;               //@synthesize imagePicker=_imagePicker - In the implementation block
-(id)styleProvider;
-(void)setStyleProvider:(id)arg1 ;
-(void)imagePicker:(id)arg1 pickedPhoto:(id)arg2 ;
-(void)imagePickerWillBeRemoved:(id)arg1 ;
-(void)setPopoverSizeUpdatesDisabled:(bool)arg1 ;
-(id)imagePickerControllerViewControllerToPresentModal:(id)arg1 ;
-(id)personImageView;
-(void)imagePicker:(id)arg1 presentActionSheet:(id)arg2 ;
-(void)removeImagePickerControllerFromUI;
-(void)finishTearingDownImagePickerController;
-(void)imagePickerWillBeShown:(id)arg1 ;
-(id)imagePickerControllerViewForApplyImageAnimation:(id)arg1 ;
-(void)imagePicker:(id)arg1 didDismissActionSheet:(id)arg2 ;
-(void)labelPickerViewController:(id)arg1 didDeleteLabel:(id)arg2 ;
-(bool)pickerViewControllerShouldDismissKeyboard:(id)arg1 ;
-(id)helper;
-(id)_contentViewForPicker:(id)arg1 ;
-(id)_propertyGroupForPicker:(id)arg1 ;
-(void)_dismissRingtonePicker:(id)arg1 afterSelectingItem:(id)arg2 ;
-(void)_dismissCountryPicker:(id)arg1 afterSelectingItem:(id)arg2 ;
-(void)_dismissProfilesPicker:(id)arg1 afterSelectingItem:(id)arg2 ;
-(void)_dismissPropertyPicker:(id)arg1 afterSelectingItem:(id)arg2 ;
-(void)setHelper:(id)arg1 ;
-(bool)pickerViewController:(id)arg1 shouldDismissAfterSelectingItem:(id)arg2 ;
-(id)selectedPeople;
-(void)showImageMenuForHelper:(id)arg1 ;
-(bool)popoverSizeUpdatesDisabled;
-(id)imagePicker;
-(bool)labelPickerViewController:(id)arg1 shouldDismissAfterSelectingLabel:(id)arg2 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
@end

