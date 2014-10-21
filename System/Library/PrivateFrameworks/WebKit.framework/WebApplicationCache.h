/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:22 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface WebApplicationCache : NSObject
+(long long)maximumSize;
+(void)setMaximumSize:(long long)arg1 ;
+(void)deleteAllApplicationCaches;
+(void)initializeWithBundleIdentifier:(id)arg1 ;
+(void)setDefaultOriginQuota:(long long)arg1 ;
+(long long)diskUsageForOrigin:(id)arg1 ;
+(void)deleteCacheForOrigin:(id)arg1 ;
+(id)originsWithCache;
+(long long)defaultOriginQuota;
@end
