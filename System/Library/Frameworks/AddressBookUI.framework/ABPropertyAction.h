/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactAction.h>
#import <UIKit/UIActionSheetDelegate.h>

@class NSArray;

@interface ABPropertyAction : ABContactAction <UIActionSheetDelegate> {

	NSArray* _propertyItems;

}

@property (nonatomic,copy) NSArray * propertyItems;                //@synthesize propertyItems=_propertyItems - In the implementation block
@property (nonatomic,readonly) bool canPerformAction; 
+(void)performDefaultActionForItem:(id)arg1 sender:(id)arg2 ;
-(void)performActionWithSender:(id)arg1 ;
-(id)propertyItems;
-(id)initWithContact:(id)arg1 propertyItems:(id)arg2 ;
-(bool)canPerformAction;
-(void)performActionForItem:(id)arg1 sender:(id)arg2 ;
-(id)initWithContact:(id)arg1 propertyItem:(id)arg2 ;
-(void)setPropertyItems:(id)arg1 ;
-(void)dealloc;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

