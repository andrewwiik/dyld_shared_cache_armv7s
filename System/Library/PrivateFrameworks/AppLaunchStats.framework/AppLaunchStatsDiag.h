/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <AppLaunchStats/AppLaunchStats-Structs.h>
@class NSObject;

@interface AppLaunchStatsDiag : NSObject {

	NSObject<OS_dispatch_queue>* APLSDiagQueue;
	NSObject<OS_dispatch_source>* APLSDiagTimer;
	int diagToken;
	bool diagTimerOn;

}
-(id)init;
-(void).cxx_destruct;
-(void)dumpDiagnosticIntoFile;
-(void)turnOffDiagnostic;
-(bool)checkDuetDiagState;
-(void)turnOnDiagnostic:(long long)arg1 ;
-(void)base64EncodeFile:(const char*)arg1 dumpfile:(_sFILE*)arg2 ;
-(void)initializeDiag:(bool)arg1 ;
@end
