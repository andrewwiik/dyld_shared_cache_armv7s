/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PLPublishingAgentDelegate
@optional
-(void)publishingAgentDidStartRemaking:(id)arg1;
-(void)publishingAgentDidEndRemaking:(id)arg1 didSucceed:(bool)arg2;

@required
-(void)publishingAgentCancelButtonClicked:(id)arg1;
-(void)publishingAgentDoneButtonClicked:(id)arg1;
-(void)publishingAgentDidBeginPublishing:(id)arg1;
-(void)publishingAgentWillBeDisplayed:(id)arg1;
-(void)publishingAgentDidEndPublishing:(id)arg1 error:(id)arg2;
@end

