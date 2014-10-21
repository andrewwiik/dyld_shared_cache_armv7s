/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:54 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVFoundation/AVFoundation-Structs.h>
@class AVWeakReference, NSString, NSLocale, NSMutableArray, NSObject;

@interface AVChapterMetadataItemInternal : NSObject {

	AVWeakReference* weakReference;
	OpaqueFigAssetRef figAsset;
	long long chapterGroupIndex;
	long long chapterIndex;
	NSString* chapterType;
	NSLocale* locale;
	id value;
	SCD_Struct_CM4 time;
	SCD_Struct_CM4 duration;
	long long valueStatus;
	int valueErrorCode;
	NSMutableArray* completions;
	NSObject<OS_dispatch_queue>* readWriteQueue;

}
@end
