/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ABPersonEditDelegate <NSObject>
@optional
-(void)personWasDeleted;
-(void)person:(void*)arg1 propertyDidChange:(int)arg2;
-(void)notesFieldWillBecomeFirstResponderForPerson:(void*)arg1;
-(void)notesFieldDidResignFirstResponderForPerson:(void*)arg1;
-(void)personHeaderViewHeightDidChange:(void*)arg1;
-(void)personScrollViewWillBeginDragging:(void*)arg1;
-(void)person:(void*)arg1 tableViewTouchesBegan:(id)arg2 withEvent:(id)arg3;
-(void)nameUpdatedForPerson:(void*)arg1;
-(void)linksUpdatedForPerson:(void*)arg1;
-(void)imageUpdatedForPerson:(void*)arg1;
-(void)willShowDeleteButtonAtIndexPath:(id)arg1;
-(void)didRemoveDeleteButtonAtIndexPath:(id)arg1;
-(void)preferredPersonDidChangeToPerson:(void*)arg1;
-(void)insertProperty:(int*)arg1 insertValue:(id*)arg2 insertLabel:(id*)arg3;
-(bool)personViewController:(id)arg1 shouldContinueAfterEditingConfirmed:(bool)arg2 forPerson:(void*)arg3;
-(CGSize*)adjustedPopoverContentSizeForPersonView:(id)arg1 suggestedSize:(CGSize)arg2;
-(bool)shouldBeRemovedFromNavigationStack;
@end

