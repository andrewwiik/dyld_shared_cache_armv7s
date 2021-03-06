/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@class PTPTCPIPTransport, NSTimer, NSMutableData;

@interface PTPTCPIPConnection : NSObject {

	PTPTCPIPTransport* _transport;
	NSTimer* _inactivityTimer;
	NSTimer* _receiveTimer;
	NSTimer* _transmitTimer;
	CFReadStreamRef _inStream;
	CFWriteStreamRef _outStream;
	dispatch_semaphore_sRef _receiveBufferSemaphore;
	NSMutableData* _recieveBuffer;
	unsigned _bytesReceived;
	dispatch_semaphore_sRef _transmitBufferSemaphore;
	NSMutableData* _transmitBuffer;
	unsigned _bytesSent;

}
-(void)dealloc;
-(void)close;
-(void)handleCanAcceptBytes;
-(void)handleErrorOccurred:(SCD_Struct_PT3)arg1 ;
-(id)initWithNativeSocket:(int)arg1 transport:(id)arg2 ;
-(id)initWithSocketToHost:(id)arg1 port:(unsigned)arg2 transport:(id)arg3 ;
-(void)handleHasBytesAvailable;
-(void)handleEndEncountered;
-(void)inactivityTimerCallBack:(id)arg1 ;
-(bool)open;
-(bool)writeData:(id)arg1 ;
@end

