/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLEffectFilterManager : NSObject {

	NSMutableArray* _effects;
	NSMutableArray* _names;
	NSMutableArray* _aggdNames;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(unsigned long long)filterCount;
-(id)filterForIndex:(unsigned long long)arg1 ;
-(unsigned long long)blackAndWhiteFilterStartIndex;
-(unsigned long long)blackAndWhiteFilterCount;
-(void)_addEffectNamed:(id)arg1 aggdName:(id)arg2 filter:(id)arg3 ;
-(unsigned long long)_indexForFilter:(id)arg1 ;
-(id)displayNameForIndex:(unsigned long long)arg1 ;
-(id)displayNameForFilter:(id)arg1 ;
-(id)aggdNameForFilter:(id)arg1 ;
@end
