/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:47 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <MediaToolbox/MediaToolbox-Structs.h>
@class NSObject;

@interface FigVideoLayerInternal : NSObject {

	bool isPresentationLayer;
	bool visible;
	OpaqueFigSimpleMutexRef serializationMutex;
	NSObject<OS_dispatch_queue>* notificationSerialQueue;

}
@end

