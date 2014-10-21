/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailItem.h>
#import <EventKitUI/EKEventAttachmentCellControllerDelegate.h>

@class NSArray;

@interface EKEventAttachmentDetailItem : EKEventDetailItem <EKEventAttachmentCellControllerDelegate> {

	NSArray* _cellControllers;

}
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(bool)configureWithCalendar:(id)arg1 preview:(bool)arg2 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(unsigned long long)numberOfSubitems;
-(bool)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(void)_cleanUpCellControllers;
-(id)parentViewControllerForAttachmentCellController:(id)arg1 ;
-(id)owningEventForAttachmentCellController:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(void).cxx_destruct;
@end

