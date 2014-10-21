/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMPersonRegistrar : NSObject {

	NSMutableDictionary* _personMap;

}

@property (retain) NSMutableDictionary * _personMap;              //@synthesize personMap=_personMap - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(void)registerPerson:(id)arg1 ;
-(void)unregisterPerson:(id)arg1 ;
-(id)personForUniqueID:(id)arg1 ;
-(void)_dumpAllPersons;
-(id)_personMap;
-(void)set_personMap:(id)arg1 ;
@end

