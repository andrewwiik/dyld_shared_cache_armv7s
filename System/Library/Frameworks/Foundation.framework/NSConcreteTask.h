/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSTask.h>

@protocol OS_dispatch_semaphore, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSPort;

@interface NSConcreteTask : NSTask {

	NSObject<OS_dispatch_semaphore>* _lock;
	NSMutableDictionary* _dictionary;
	/*^block*/ id _terminationHandler;
	NSObject<OS_dispatch_source>* _dsrc;
	NSPort* _tmpPort;
	long long _suspendCount;
	int _pid;
	int _platformExitInfo;
	bool _hasExeced;
	bool _isRunning;
	bool _hasPostedDeathNotification;
	bool _terminationRun;

}
-(id)currentDirectoryPath;
-(void)setArguments:(id)arg1 ;
-(void)launchWithDictionary:(id)arg1 ;
-(int)terminationStatus;
-(long long)terminationReason;
-(void)launch;
-(void)setCurrentDirectoryPath:(id)arg1 ;
-(void)setEnvironment:(id)arg1 ;
-(void)setLaunchPath:(id)arg1 ;
-(void)interrupt;
-(void)terminate;
-(long long)suspendCount;
-(id)launchPath;
-(void)setStandardInput:(id)arg1 ;
-(void)setStandardOutput:(id)arg1 ;
-(void)setStandardError:(id)arg1 ;
-(id)standardInput;
-(id)standardOutput;
-(id)standardError;
-(void)_withTaskDictionary:(/*^block*/ id)arg1 ;
-(long long)_platformExitInformation;
-(void)waitUntilExit;
-(void)setPreferredArchitectures:(id)arg1 ;
-(id)preferredArchitectures;
-(void)setTaskDictionary:(id)arg1 ;
-(id)taskDictionary;
-(void)terminateTask;
-(int)_procid;
-(void)setStartsNewProcessGroup:(bool)arg1 ;
-(void)dealloc;
-(id)init;
-(id)environment;
-(bool)suspend;
-(id)arguments;
-(bool)resume;
-(bool)isRunning;
-(void)setTerminationHandler:(/*^block*/ id)arg1 ;
-(int)processIdentifier;
-(/*^block*/ id)terminationHandler;
-(void)finalize;
@end
