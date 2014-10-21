/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:02 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <TelephonyUtilities/TUAppender.h>

@class NSString;

@interface TURemoteAppender : NSObject <TUAppender> {

	xpc_connection_sRef _connection;
	NSString* _name;
	dispatch_queue_sRef _backgroundQueue;

}
-(void)dealloc;
-(void)flush;
-(id)initWithName:(id)arg1 ;
-(void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7 ;
-(void)setAppenderDelegate:(id)arg1 ;
@end

