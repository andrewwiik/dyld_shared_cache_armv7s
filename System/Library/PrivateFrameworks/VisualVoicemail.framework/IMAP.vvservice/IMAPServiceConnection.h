/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/IMAP.vvservice/IMAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <IMAP/MFIMAPConnection.h>

@class NSMutableSet, NSLock;

@interface IMAPServiceConnection : MFIMAPConnection {

	NSMutableSet* _checkedOutThreads;
	NSLock* _checkedOutThreadsLock;

}
+(id)heldConnectionsForCheckingIn;
-(void)checkInToAccount:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(bool)checkIn;
-(id)_headersToFetchIncludingThoseRequiredForRouting:(bool)arg1 withRecipients:(bool)arg2 ;
-(id)searchUIDs:(id)arg1 withFlagRequests:(id)arg2 ;
-(bool)changePassword:(id)arg1 ;
-(void)checkInForcefully;
@end

