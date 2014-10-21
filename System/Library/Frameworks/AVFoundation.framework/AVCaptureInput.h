/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <AVFoundation/AVFoundation-Structs.h>
@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject {

	AVCaptureInputInternal* _inputInternal;

}

@property (nonatomic,readonly) NSArray * ports; 
-(id)session;
-(void)setSession:(id)arg1 ;
-(void)_applyOverridesToCaptureOptions:(id)arg1 ;
-(void)didStopForSession:(id)arg1 error:(id)arg2 ;
-(void)didStartForSession:(id)arg1 ;
-(id)notReadyError;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(void)willStartForSession:(id)arg1 ;
-(id)ports;
-(OpaqueCMClockRef)clock;
-(void)dealloc;
-(id)init;
@end

