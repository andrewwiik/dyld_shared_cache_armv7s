/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface IMAVCamera : NSObject {

	id _internalDevice;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * uniqueID; 
@property (nonatomic,readonly) long long cameraStyle; 
@property (nonatomic,readonly) bool isWideScreen; 
@property (nonatomic,readonly) bool hasShutter; 
@property (nonatomic,readonly) bool isShutterOpen; 
@property (nonatomic,readonly) bool isSuspended; 
-(void)dealloc;
-(id)init;
-(id)description;
-(bool)isSuspended;
-(id)name;
-(id)uniqueID;
-(long long)cameraStyle;
-(id)_initWithAVCamera:(id)arg1 ;
-(bool)isWideScreen;
-(bool)hasShutter;
-(bool)isShutterOpen;
-(id)_AVCamera;
@end

