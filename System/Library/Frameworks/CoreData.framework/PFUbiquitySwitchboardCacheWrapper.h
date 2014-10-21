/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, PFUbiquityLocation, PFUbiquityGlobalObjectIDCache, PFUbiquityPeerRangeCache, PFUbiquityTransactionLogCache, PFUbiquityTransactionHistoryCache, PFUbiquityKnowledgeVector, PFUbiquityPeerReceipt, NSLock;

@interface PFUbiquitySwitchboardCacheWrapper : NSObject {

	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _storeName;
	PFUbiquityGlobalObjectIDCache* _globalIDCache;
	PFUbiquityPeerRangeCache* _peerRangeCache;
	PFUbiquityTransactionLogCache* _transactionLogCache;
	PFUbiquityTransactionHistoryCache* _transactionHistoryCache;
	PFUbiquityKnowledgeVector* _kv;
	PFUbiquityKnowledgeVector* _baselineKV;
	PFUbiquityPeerReceipt* _peerReceipt;
	bool _pendingReceiptWrite;
	NSLock* _receiptFileLock;
	bool _allowSchedulingOfReceiptFileWrites;

}

@property (nonatomic,readonly) PFUbiquityGlobalObjectIDCache * globalIDCache;                            //@synthesize globalIDCache=_globalIDCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityPeerRangeCache * peerRangeCache;                                //@synthesize peerRangeCache=_peerRangeCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityTransactionLogCache * transactionLogCache;                      //@synthesize transactionLogCache=_transactionLogCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityTransactionHistoryCache * transactionHistoryCache;              //@synthesize transactionHistoryCache=_transactionHistoryCache - In the implementation block
@property (nonatomic,readonly) PFUbiquityPeerReceipt * peerReceipt;                                      //@synthesize peerReceipt=_peerReceipt - In the implementation block
@property (retain) PFUbiquityKnowledgeVector * kv;                                                       //@synthesize kv=_kv - In the implementation block
@property (retain) PFUbiquityKnowledgeVector * baselineKV;                                               //@synthesize baselineKV=_baselineKV - In the implementation block
@property (nonatomic,readonly) NSString * localPeerID;                                                   //@synthesize localPeerID=_localPeerID - In the implementation block
@property (nonatomic,retain) PFUbiquityLocation * ubiquityRootLocation;                                  //@synthesize ubiquityRootLocation=_ubiquityRootLocation - In the implementation block
@property (nonatomic,readonly) NSString * storeName;                                                     //@synthesize storeName=_storeName - In the implementation block
-(id)localPeerID;
-(id)storeName;
-(id)ubiquityRootLocation;
-(id)peerRangeCache;
-(id)transactionHistoryCache;
-(id)baselineKV;
-(void)setKv:(id)arg1 ;
-(void)scheduleReceiptFileWrite:(id)arg1 ;
-(id)kv;
-(id)transactionLogCache;
-(void)setUbiquityRootLocation:(id)arg1 ;
-(void)cacheWrapperWillBeRemovedFromEntry;
-(id)initWithStoreName:(id)arg1 privateStore:(id)arg2 forLocalPeerID:(id)arg3 andUbiquityRootLocation:(id)arg4 ;
-(void)setBaselineKV:(id)arg1 ;
-(id)globalIDCache;
-(void)_appWillResignActive:(id)arg1 ;
-(bool)writeReceiptFile:(bool)arg1 error:(id*)arg2 ;
-(id)peerReceipt;
-(void)dealloc;
-(id)init;
@end

