/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface NSCache : NSObject {

	id _delegate;
	void** _private[5];
	void* _reserved;

}
-(void)setEvictsObjectsWhenApplicationEntersBackground:(bool)arg1 ;
-(bool)evictsObjectsWithDiscardedContent;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(unsigned long long)totalCostLimit;
-(unsigned long long)countLimit;
-(void)setEvictsObjectsWithDiscardedContent:(bool)arg1 ;
-(bool)evictsObjectsWhenApplicationEntersBackground;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)removeAllObjects;
-(id)delegate;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setName:(id)arg1 ;
-(id)allObjects;
-(id)name;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)finalize;
@end

