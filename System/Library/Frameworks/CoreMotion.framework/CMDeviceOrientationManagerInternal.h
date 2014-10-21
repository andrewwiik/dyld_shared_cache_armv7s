/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSOperationQueue, NSObject;

@interface CMDeviceOrientationManagerInternal : NSObject {

	int fSampleLock;
	Dispatcher* fDeviceOrientationDispatcher;
	/*^block*/ id fDeviceOrientationHandler;
	NSOperationQueue* fDeviceOrientationQueue;
	NSObject<OS_dispatch_semaphore>* fDeviceOrientationSemaphore;
	bool fDidSignalSemaphore;
	int fOrientationCallbackMode;
	bool fEnableOrientationNotification;
	Sample fLatestDeviceOrientationSample;
	Sample fLastSignificantOrientationSample;

}
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
@end

