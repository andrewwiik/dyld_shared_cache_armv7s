/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol TULogger
@required
-(id)identifier;
-(void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(bool)arg3 format:(id)arg4;
-(void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(bool)arg3 format:(id)arg4 args:(char*)arg5;
-(void)logWithLevel:(int)arg1 topic:(id)arg2 backtrace:(bool)arg3 text:(id)arg4;
-(bool)shouldLog;
-(bool)shouldLogWithLevel:(int)arg1 topic:(id)arg2;
@end
