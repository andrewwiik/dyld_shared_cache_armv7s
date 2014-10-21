/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarItemEditor.h>

@class EKEventDateEditItem, UIColor, EKEvent;

@interface EKEventEditor : EKCalendarItemEditor {

	EKEventDateEditItem* _dateItem;
	bool _isTransitioning;
	bool _showAttachments;
	UIColor* _backgroundColor;

}

@property (nonatomic,retain) EKEvent * event; 
@property (assign,nonatomic) bool showAttachments;                   //@synthesize showAttachments=_showAttachments - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(void)setShowAttachments:(bool)arg1 ;
-(void)setShowsTimeZone:(bool)arg1 ;
-(id)preferredTitle;
-(id)_editItems;
-(id)notificationNamesForLocaleChange;
-(void)_revertEvent;
-(void)_copyEventForPossibleRevert;
-(id)defaultAlertTitle;
-(id)_viewForSheet;
-(id)_nameForDeleteButton;
-(id)defaultTitleForCalendarItem;
-(bool)saveCalendarItemWithSpan:(int)arg1 error:(id*)arg2 ;
-(bool)_canDetachSingleOccurrence;
-(void)setupDeleteButton;
-(void)refreshStartAndEndDates;
-(bool)showAttachments;
-(unsigned long long)entityType;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(bool)shouldAutorotate;
-(void)loadView;
-(void)viewWillAppear:(bool)arg1 ;
-(void)viewDidAppear:(bool)arg1 ;
-(void)viewWillDisappear:(bool)arg1 ;
-(void)viewDidDisappear:(bool)arg1 ;
-(void)setEvent:(id)arg1 ;
-(id)event;
-(void).cxx_destruct;
@end

