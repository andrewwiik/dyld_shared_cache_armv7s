/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, NSPersistentStore, NSSQLiteConnection;

@interface PFUbiquityStoreMetadataMedic : NSObject {

	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	NSPersistentStore* _store;
	NSSQLiteConnection* _connection;

}

@property (nonatomic,readonly) NSString * localPeerID;                                 //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * ubiquityRootLocation;              //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                   //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * store;                              //@synthesize store=_store - In the implementation block
@property (nonatomic,readonly) NSSQLiteConnection * connection;                        //@synthesize connection=_connection - In the implementation block
-(id)store;
-(id)localPeerID;
-(id)storeName;
-(id)ubiquityRootLocation;
-(id)initWithStore:(id)arg1 localPeerID:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(bool)recoverMetadataWithError:(id*)arg1 ;
-(bool)recoverBaselineMetadataWithImportContext:(id)arg1 error:(id*)arg2 ;
-(bool)recoverTransactionLogMetadataWithImportContext:(id)arg1 error:(id*)arg2 ;
-(bool)addTransactionHistoryEntriesForObjectIDs:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
-(bool)cacheMetadataForTransactionLog:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3 ;
-(void)dealloc;
-(id)connection;
@end

