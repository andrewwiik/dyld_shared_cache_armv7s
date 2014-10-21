/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/TextInput/libTextInputCore.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCoreServices/NSXPCListenerDelegate.h>
#import <KeyboardSettings/TIUserDictionaryServer.h>

@protocol TIUserDictionaryServer <NSObject>
@required
-(void)performTransaction:(id)arg1 completionHandler:(/*^block*/ id)arg2;
-(void)requestPersistentStoreURLWithCompletionHandler:(/*^block*/ id)arg1;
@end


@protocol OS_dispatch_queue;
@class NSXPCListener, NSPersistentStoreCoordinator, NSManagedObjectContext, NSObject, NSArray, NSMutableArray, NSPersistentStore;

@interface TIUserDictionaryServer : NSObject <NSXPCListenerDelegate, TIUserDictionaryServer> {

	NSXPCListener* _listener;
	bool _suspendedForAccountChange;
	NSPersistentStoreCoordinator* _persistentStoreCoordinator;
	NSManagedObjectContext* _managedObjectContext;
	NSObject<OS_dispatch_queue>* _dispatchQueue;
	NSObject<OS_dispatch_queue>* _accountChangeQueue;
	NSArray* _cachedPhraseShortcutPairs;
	NSMutableArray* _observers;
	long long _recentClientCount;

}

@property (nonatomic,readonly) NSPersistentStoreCoordinator * persistentStoreCoordinator;                    //@synthesize persistentStoreCoordinator=_persistentStoreCoordinator - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;                                //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSPersistentStore * persistentStore; 
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * dispatchQueue;                                  //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSObject<OS_dispatch_queue> * accountChangeQueue;                             //@synthesize accountChangeQueue=_accountChangeQueue - In the implementation block
@property (assign,getter=isSuspendedForAccountChange,nonatomic) bool suspendedForAccountChange;              //@synthesize suspendedForAccountChange=_suspendedForAccountChange - In the implementation block
@property (nonatomic,retain) NSArray * cachedPhraseShortcutPairs;                                            //@synthesize cachedPhraseShortcutPairs=_cachedPhraseShortcutPairs - In the implementation block
@property (nonatomic,readonly) NSMutableArray * observers;                                                   //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) long long recentClientCount;                                                    //@synthesize recentClientCount=_recentClientCount - In the implementation block
+(id)sharedInstance;
+(id)basePersistentStoreURL;
+(id)legacyImportFilePaths;
+(id)legacyImportWordKeyPairsFromFiles:(id)arg1 ;
+(id)legacyStorePath;
-(id)dispatchQueue;
-(id)persistentStore;
-(bool)save;
-(id)entityDescription;
-(void)dealloc;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)managedObjectContext;
-(bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)observers;
-(id)addObserver:(/*^block*/ id)arg1 ;
-(void)performTransaction:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(id)persistentStoreCoordinator;
-(void)persistentStoreDidImportUbiquitousContentChanges:(id)arg1 ;
-(void)persistentStoreCoordinatorStoresWillChange:(id)arg1 ;
-(void)persistentStoreCoordinatorStoresDidChange:(id)arg1 ;
-(void)initializePersistentStore;
-(void)incrementRecentClientCount;
-(void)importLegacyEntries;
-(void)migrateTellurideData;
-(void)migrateSundanceData;
-(void)importSampleShortcutsIfNecessary;
-(void)decrementRecentClientCountAfterDelay;
-(void)requestPersistentStoreURLWithCompletionHandler:(/*^block*/ id)arg1 ;
-(void)loadPersistentStoreIfNecessary;
-(id)entriesToDeleteForTransaction:(id)arg1 ;
-(id)entriesForValidationOfTransaction:(id)arg1 ;
-(id)insertEntryWithValue:(id)arg1 initializedFromObject:(id)arg2 ;
-(id)entriesUsingSortDescriptors:(id)arg1 ;
-(void)setCachedPhraseShortcutPairs:(id)arg1 ;
-(void)notifyObservers;
-(id)entriesMatchingPredicate:(id)arg1 sortDescriptors:(id)arg2 ;
-(id)entriesMatchingPredicate:(id)arg1 ;
-(id)cachedPhraseShortcutPairs;
-(id)fetchPhraseShortcutPairs;
-(bool)needsSampleShortcutsPreference;
-(void)importSampleShortcuts;
-(void)didImportSampleShortcuts;
-(id)appleLanguagesPreference;
-(id)insertEntryWithPhrase:(id)arg1 shortcut:(id)arg2 ;
-(long long)compareEntry:(id)arg1 toEntry:(id)arg2 withSortDescriptors:(id)arg3 ;
-(bool)mergeShortcutsFromContext:(id)arg1 ;
-(void)deleteAllEntries;
-(bool)migrateEntriesFromStoreAtURL:(id)arg1 ;
-(id)storeURLForMergeAfterUbiquityIdentityChangeFromToken:(id)arg1 toToken:(id)arg2 withLastKnownToken:(id)arg3 shouldDeleteFirst:(bool*)arg4 ;
-(bool)mergeEntriesForUbiquityIdentityChangeFromURL:(id)arg1 firstDelete:(bool)arg2 ;
-(void)didMergeEntriesForNewUbiquityIdentity:(id)arg1 ;
-(bool)mergeEntriesForUbiquityIdentityChangeIfNecessary;
-(id)accountChangeQueue;
-(bool)isSuspendedForAccountChange;
-(void)setSuspendedForAccountChange:(bool)arg1 ;
-(long long)recentClientCount;
-(void)setRecentClientCount:(long long)arg1 ;
-(void)handleIdleTimeout;
-(void)unloadPersistentStore;
-(void)closeLibrarianConnection;
-(void)buddySetupDidFinish;
-(void)assertCoreDataQueue;
@end
