/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSRecursiveLock, NSManagedObjectModel;

@interface PFUbiquityMetadataFactory : NSObject {

	NSMutableDictionary* _rootLocationToPeerIDToEntry;
	NSRecursiveLock* _rootLocationToPeerIDToEntryLock;
	NSManagedObjectModel* _cachedModel;

}
+(id)sharedFactory;
+(void)initialize;
-(id)newMetadataManagedObjectModel;
-(id)newStackForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)entryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(void)removeCachedCoordinatorsForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(bool)cacheEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)newMetadataEntryForLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 error:(id*)arg4 ;
-(id)createMetadataModel;
-(id)newEntityForName:(id)arg1 ;
-(id)newAttributeNamed:(id)arg1 attributeType:(unsigned long long)arg2 isOptional:(bool)arg3 isTransient:(bool)arg4 withDefaultValue:(id)arg5 andMinValue:(id)arg6 andMaxValue:(id)arg7 ;
-(id)newRelationshipNamed:(id)arg1 withDestinationEntity:(id)arg2 andInverseRelationship:(id)arg3 isOptional:(bool)arg4 isToMany:(bool)arg5 andDeleteRule:(unsigned long long)arg6 ;
-(void)addModelingToolUserInfoToEntity:(id)arg1 ;
-(void)addModelingToolUserInfoToProperty:(id)arg1 ;
-(void)removeAllCoordinatorsForRootLocation:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
@end
