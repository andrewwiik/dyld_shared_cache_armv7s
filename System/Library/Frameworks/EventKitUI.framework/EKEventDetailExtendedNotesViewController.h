/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <EventKitUI/EKEditItemViewControllerProtocol.h>

@class UITextView, NSString;

@interface EKEventDetailExtendedNotesViewController : UIViewController <EKEditItemViewControllerProtocol> {

	UITextView* _textView;

}

@property (nonatomic,copy) NSString * notes; 
@property (assign,nonatomic,__weak) <EKEditItemViewControllerDelegate> * editDelegate; 
-(id)notes;
-(void)setNotes:(id)arg1 ;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(id)_textView;
-(void).cxx_destruct;
@end

