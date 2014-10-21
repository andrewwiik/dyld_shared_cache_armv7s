/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_semaphore, MobileGestaltHelper;
@class NSObject, NSXPCConnection;

@interface MobileGestaltHelperProxy : NSObject {

	NSObject<OS_dispatch_semaphore>* _sema;
	NSXPCConnection* _connection;
	int _error;
	<MobileGestaltHelper>* _helper;

}

@property (readonly) <MobileGestaltHelper> * helper;              //@synthesize helper=_helper - In the implementation block
+(id)proxy;
-(id)helper;
-(void)dealloc;
-(id)init;
-(void)signal;
-(void)wait;
@end
