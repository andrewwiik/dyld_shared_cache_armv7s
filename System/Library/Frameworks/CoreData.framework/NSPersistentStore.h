/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:08 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSPersistentStoreCoordinator, NSString, NSURL, NSDictionary;

@interface NSPersistentStore : NSObject {

	NSPersistentStoreCoordinator* _coordinator;
	NSString* _configurationName;
	NSURL* _url;
	NSDictionary* _options;
	id* _oidFactories;
	id _defaultFaultHandler;
	struct {
		unsigned isReadOnly : 1;
		unsigned cleanOnRemove : 1;
		unsigned isMDDirty : 1;
		unsigned _RESERVED : 29;
	}  _flags;
	void* _temporaryIDClass;
	id _externalRecordsMonitor;
	void* _reserved3;

}
+(bool)doURLStuff:(id)arg1 createdStubFile:(bool*)arg2 readOnly:(bool*)arg3 error:(id*)arg4 options:(id)arg5 ;
+(bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id*)arg5 ;
+(bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
+(id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1 ;
+(bool)accessInstanceVariablesDirectly;
+(id)metadataForPersistentStoreWithURL:(id)arg1 error:(id*)arg2 ;
+(bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id*)arg3 ;
+(Class)migrationManagerClass;
+(void)initialize;
-(id)objectIDFactoryForEntity:(id)arg1 ;
-(id)_updatedMetadataWithSeed:(id)arg1 includeVersioning:(bool)arg2 ;
-(bool)load:(id*)arg1 ;
-(id)faultHandler;
-(bool)_isMetadataDirty;
-(void)_setMetadataDirty:(bool)arg1 ;
-(id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id*)arg4 ;
-(void)_didLoadMetadata;
-(void)_preflightCrossCheck;
-(void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 ;
-(void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 ;
-(id)_storeInfoForEntityDescription:(id)arg1 ;
-(void)doFilesystemCleanupOnRemove:(bool)arg1 ;
-(id*)knownKeyValuesForObjectID:(id)arg1 withContext:(id)arg2 ;
-(bool)_unload:(id*)arg1 ;
-(Class)faultHandlerClass;
-(Class)_objectIDClass;
-(Class)objectIDClassForEntity:(id)arg1 ;
-(bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id*)arg3 ;
-(id)_defaultMetadata;
-(void)_updateMetadata;
-(void)setPersistentStoreCoordinator:(id)arg1 ;
-(id)obtainPermanentIDsForObjects:(id)arg1 error:(id*)arg2 ;
-(id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4 ;
-(id)configurationName;
-(id)_rawMetadata__;
-(void)_resetObjectIDFactoriesForStoreUUIDChange;
-(void)willRemoveFromPersistentStoreCoordinator:(id)arg1 ;
-(void)didAddToPersistentStoreCoordinator:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)type;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)identifier;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(void)setIdentifier:(id)arg1 ;
-(id)options;
-(id)persistentStoreCoordinator;
-(bool)isReadOnly;
-(void)setMetadata:(id)arg1 ;
-(id)metadata;
-(bool)loadMetadata:(id*)arg1 ;
-(void)finalize;
-(void)setReadOnly:(bool)arg1 ;
@end
