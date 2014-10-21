/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:13 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface VGLLayeredTextureOutputManager : NSObject {

	NSObject<OS_dispatch_queue>* _textureQueue;
	NSMutableDictionary* _textureDictionary;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(void)purge;
-(id)textureWithName:(id)arg1 style:(id)arg2 levelOfDetail:(unsigned long long)arg3 scale:(double)arg4 ;
@end

