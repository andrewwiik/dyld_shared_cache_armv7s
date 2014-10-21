/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSArray, IMAVCamera;

@interface IMAVCameraController : NSObject {

	NSMutableArray* _cameras;
	NSObject<OS_dispatch_queue>* _queue;

}

@property (nonatomic,readonly) NSArray * cameras; 
@property (nonatomic,retain) IMAVCamera * currentCamera; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)cameras;
-(void)setCurrentCamera:(id)arg1 ;
-(id)cameraWithDeviceID:(unsigned)arg1 ;
-(void)_rebuildCameraList;
-(void)_loadSavedCamera;
-(id)currentCamera;
@end

