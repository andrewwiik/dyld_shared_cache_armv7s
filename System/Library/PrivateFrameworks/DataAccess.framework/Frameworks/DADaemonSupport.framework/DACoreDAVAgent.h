/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DADaemonSupport/DAAgent.h>
#import <DADaemonSupport/DABabysittable.h>

@class CoreDAVOptionsTask, NSTimer;

@interface DACoreDAVAgent : DAAgent <DABabysittable> {

	CoreDAVOptionsTask* _optionsProbe;
	NSTimer* _optionsTimeoutTimer;

}

@property (retain) CoreDAVOptionsTask * optionsProbe;              //@synthesize optionsProbe=_optionsProbe - In the implementation block
@property (retain) NSTimer * optionsTimeoutTimer;                  //@synthesize optionsTimeoutTimer=_optionsTimeoutTimer - In the implementation block
-(void)dealloc;
-(id)waiterID;
-(id)optionsTimeoutTimer;
-(void)setOptionsTimeoutTimer:(id)arg1 ;
-(void)_cancelOptionsTimer;
-(id)optionsProbe;
-(void)setOptionsProbe:(id)arg1 ;
-(void)_serverProbeTimedOut;
-(void)_probeAndSyncWithBlock:(/*^block*/ id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
@end

