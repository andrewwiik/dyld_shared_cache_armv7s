/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/EKCalendar.servicebundle/EKCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EKCalendar/EKCalendarItemAlertItem.h>

@interface EKReminderAlertItem : EKCalendarItemAlertItem {

	bool _showingRemindWhenILeaveButton;
	bool _showingCallButton;
	bool _showingFaceTimeButton;

}
+(id)_activeItems;
-(void)configureCompactSheet:(bool)arg1 requirePasscodeForActions:(bool)arg2 ;
-(void)configureExpandedSheet:(bool)arg1 requirePasscodeForActions:(bool)arg2 ;
-(void)expandedAlertClickedButtonAtIndex:(long long)arg1 ;
-(void)compactAlertClickedButtonAtIndex:(long long)arg1 ;
-(void)configureTitleAndMessageOnAlertView:(id)arg1 ;
-(void)_callOrFacetime;
-(void)_snoozeAlarm15Minutes;
-(void)_snoozeAlarmUntilILeave;
-(void)_markReminderAsCompleted;
-(void)_revealReminder;
@end

