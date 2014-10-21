/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCache, NSMapTable;

@interface VKTrafficIncidentImageManager : NSObject {

	NSCache* _imageCache;
	NSMapTable* _targetDisplayToProvider;

}
+(id)sharedManager;
-(void)dealloc;
-(id)iconForIncidentType:(long long)arg1 contentScale:(double)arg2 targetDisplay:(long long)arg3 ;
-(id)imageForIncidentType:(long long)arg1 contentScale:(double)arg2 targetDisplay:(long long)arg3 ;
-(id)imageForIncidentType:(long long)arg1 contentScale:(double)arg2 ;
-(id)iconForIncidentType:(long long)arg1 contentScale:(double)arg2 ;
-(void)setIncidentIconProvider:(/*^block*/ id)arg1 forTargetDisplay:(long long)arg2 ;
@end
