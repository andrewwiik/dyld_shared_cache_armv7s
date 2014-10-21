/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:07 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@interface _PFContextMapTable : NSObject {

	unsigned long long _slotLimit;
	CFDictionaryRef _objectsByTemporaryID;
	_CFDictionary* _objectsByPermanentObjectID;
	_CFDictionary* _objectsBy64bitPKID;
	unsigned long long* _capacitiesFor64bitPKMappings;
	struct {
		unsigned _usesWeakReferences : 1;
		unsigned _garbageCollectionEnabled : 1;
		unsigned _reservedFlags : 30;
	}  _flags;

}
-(void)_dispose;
-(id)initWithWeaksReferences:(bool)arg1 ;
-(void)setForUseWithModel:(id)arg1 ;
-(unsigned long long)getAllObjects:(id*)arg1 ;
-(void)setCapacityHint:(unsigned long long)arg1 forSlot:(unsigned)arg2 ;
-(void)clearTemporaryIDs;
-(void)dealloc;
-(void)finalize;
@end

