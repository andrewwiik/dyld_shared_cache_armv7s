/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol ABMultipleSourceImagePickerDelegate;
@class NSMutableArray;

@interface ABMultipleImagePickerViewController : UITableViewController {

	NSMutableArray* _imageCellData;
	unsigned long long _selectedImageIndex;
	<ABMultipleSourceImagePickerDelegate>* _delegate;

}

@property (assign,nonatomic) <ABMultipleSourceImagePickerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)addImageData:(id)arg1 title:(id)arg2 isSelectedImage:(bool)arg3 person:(id)arg4 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewDidLoad;
@end

