/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSString;

@interface ISSetApplicationBadgeOperation : ISOperation {

	NSString* _badgeValue;
	NSString* _bundleIdentifier;

}

@property (retain) NSString * badgeValue;                    //@synthesize badgeValue=_badgeValue - In the implementation block
@property (retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)uniqueKey;
-(void)dealloc;
-(id)bundleIdentifier;
-(void)setBadgeValue:(id)arg1 ;
-(id)badgeValue;
-(void)run;
-(void)setBundleIdentifier:(id)arg1 ;
@end
