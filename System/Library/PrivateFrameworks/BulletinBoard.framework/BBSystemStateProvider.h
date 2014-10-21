/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:42 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BBXPCConnectionDelegate.h>
#import <SpringBoardServices/XPCProxyTarget.h>

@class BBServerConnection, NSSet;

@interface BBSystemStateProvider : NSObject <BBXPCConnectionDelegate, XPCProxyTarget> {

	BBServerConnection* _connection;
	unsigned long long _currentState;
	NSSet* _sectionIDs;

}
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2 ;
-(void)connection:(id)arg1 connectionStateDidChange:(bool)arg2 ;
-(void)noteChangeOfState:(unsigned long long)arg1 newValue:(bool)arg2 ;
-(void)noteOccurrenceOfEvent:(unsigned long long)arg1 ;
-(void)noteRestrictedSectionIDsDidChange:(id)arg1 ;
-(void)_sendState:(unsigned long long)arg1 value:(bool)arg2 ;
@end

