/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSCache, NSMutableDictionary;

@interface PKAsyncCache : NSObject {

	NSCache* _itemByKey;
	NSMutableDictionary* _deliveryBlocksByKey;

}
-(void)dealloc;
-(id)init;
-(id)initWithCache:(id)arg1 ;
-(void)_queue_executeDeliveryBlocksForKey:(id)arg1 withItem:(id)arg2 ;
-(void)_executeRetrievalBlock:(/*^block*/ id)arg1 forKey:(id)arg2 ;
-(void)retrieveItemForKey:(id)arg1 retrievalBlock:(/*^block*/ id)arg2 deliveryBlock:(/*^block*/ id)arg3 ;
@end

