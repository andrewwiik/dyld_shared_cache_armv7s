/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol ABPresenterDelegate;
@class CNContact, NSDictionary, UIImage, UIImageView, UILabel;

@interface ABContactPhotoView : UIControl <UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIActionSheetDelegate> {

	bool _editing;
	CNContact* _contact;
	<ABPresenterDelegate>* _delegate;
	NSDictionary* _photoPickerInfo;
	UIImage* _currentThumbnailImage;
	UIImage* _currentImage;
	UIImageView* _contactImageView;
	UILabel* _addPhotoLabel;
	UILabel* _editPhotoLabel;
	UIImageView* _attributionImageView;

}

@property (nonatomic,retain) CNContact * contact;                             //@synthesize contact=_contact - In the implementation block
@property (assign,getter=isEditing,nonatomic) bool editing;                   //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) <ABPresenterDelegate> * delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * photoPickerInfo;                  //@synthesize photoPickerInfo=_photoPickerInfo - In the implementation block
@property (nonatomic,retain) UIImage * currentThumbnailImage;                 //@synthesize currentThumbnailImage=_currentThumbnailImage - In the implementation block
@property (nonatomic,retain) UIImage * currentImage;                          //@synthesize currentImage=_currentImage - In the implementation block
@property (nonatomic,retain) UIImageView * contactImageView;                  //@synthesize contactImageView=_contactImageView - In the implementation block
@property (nonatomic,retain) UILabel * addPhotoLabel;                         //@synthesize addPhotoLabel=_addPhotoLabel - In the implementation block
@property (nonatomic,retain) UILabel * editPhotoLabel;                        //@synthesize editPhotoLabel=_editPhotoLabel - In the implementation block
@property (nonatomic,retain) UIImageView * attributionImageView;              //@synthesize attributionImageView=_attributionImageView - In the implementation block
+(id)supportedPasteboardTypes;
-(id)contact;
-(void)setContact:(id)arg1 ;
-(id)initWithContact:(id)arg1 frame:(CGRect)arg2 ;
-(void)menuWillHide:(id)arg1 ;
-(void)saveEdits;
-(void)reloadPhoto;
-(void)tapGesture:(id)arg1 ;
-(void)longPressGesture:(id)arg1 ;
-(id)editPhotoLabel;
-(id)addPhotoLabel;
-(id)contactImageView;
-(id)attributionImageView;
-(id)currentImageDataAndCropRect:(CGRect*)arg1 ;
-(id)currentThumbnailImage;
-(id)photoPickerInfo;
-(void)setCurrentThumbnailImage:(id)arg1 ;
-(id)currentImageData;
-(void)_presentPhotoEditingSheet;
-(void)_zoomContactPhoto;
-(void)setHighlightedFrame:(bool)arg1 ;
-(void)setCurrentImage:(id)arg1 ;
-(void)setPhotoPickerInfo:(id)arg1 ;
-(void)updatePhoto;
-(void)updatePhotoWithImage:(id)arg1 ;
-(void)updateAttributionBadge;
-(void)setAttributionImageView:(id)arg1 ;
-(id)_createImagePicker;
-(id)_createImagePickerForEditingImageData:(id)arg1 withCropRect:(CGRect)arg2 ;
-(void)_presentFullScreenPhoto:(id)arg1 ;
-(void)_bounceSmallPhoto;
-(void)_dismissFullScreenPhoto:(id)arg1 ;
-(void)setContactImageView:(id)arg1 ;
-(void)setAddPhotoLabel:(id)arg1 ;
-(void)setEditPhotoLabel:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)delegate;
-(bool)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(bool)canBecomeFirstResponder;
-(void)tintColorDidChange;
-(CGSize)intrinsicContentSize;
-(bool)isEditing;
-(void)setEditing:(bool)arg1 ;
-(id)currentImage;
-(void)copy:(id)arg1 ;
-(void)paste:(id)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
@end

