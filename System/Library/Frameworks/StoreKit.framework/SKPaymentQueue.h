/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray, SKPaymentQueueClient;

@interface SKPaymentQueue : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSArray * transactions; 
@property (nonatomic,readonly) SKPaymentQueueClient * paymentQueueClient; 
+(bool)canMakePayments;
+(id)defaultQueue;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)cancelDownloads:(id)arg1 ;
-(void)pauseDownloads:(id)arg1 ;
-(id)_initSKPaymentQueue;
-(void)_notifyObserversAboutChanges:(id)arg1 sendUpdatedDownloads:(bool)arg2 ;
-(void)_establishConnectionIfNeeded;
-(void)_sendCommand:(long long)arg1 forDownloads:(id)arg2 ;
-(void)_removeLocalTransaction:(id)arg1 ;
-(void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1 ;
-(void)_refreshPaymentsWithPolicy:(long long)arg1 ;
-(void)_notifyObserversRestoreTransactionsFinished;
-(void)_notifyObserversRestoreTransactionsFailedWithError:(id)arg1 ;
-(void)_handleConnectionDisconnect;
-(void)_handleMessage:(id)arg1 connection:(id)arg2 ;
-(void)_setTransactionsWithReply:(id)arg1 ;
-(void)_notifyObserversAboutRemovals:(id)arg1 ;
-(void)_updateDownloadsForMessage:(id)arg1 ;
-(void)_updatePaymentsForMessage:(id)arg1 ;
-(void)_removePaymentsForMessage:(id)arg1 ;
-(void)_completeRestoreWithMessage:(id)arg1 ;
-(id)_copyRemovalsFromUnmergedIndexSet:(id)arg1 ;
-(void)_finishRefreshPayments;
-(id)_copyDownloadIDsForDownloads:(id)arg1 ;
-(void)_processUpdates:(id)arg1 trimUnmatched:(bool)arg2 sendUpdatedDownloads:(bool)arg3 ;
-(id)_copyTransactionsFromXPCArray:(id)arg1 ;
-(id)_applyDownloadChangeset:(id)arg1 ;
-(void)_notifyObserversAboutDownloadChanges:(id)arg1 ;
-(void)addPayment:(id)arg1 ;
-(void)addTransactionObserver:(id)arg1 ;
-(void)finishTransaction:(id)arg1 ;
-(void)removeTransactionObserver:(id)arg1 ;
-(void)restoreCompletedTransactions;
-(void)resumeDownloads:(id)arg1 ;
-(void)startDownloads:(id)arg1 ;
-(id)transactions;
-(id)initWithPaymentQueueClient:(id)arg1 ;
-(id)paymentQueueClient;
-(void)_daemonLaunchedNotification;
-(void)dealloc;
-(id)init;
-(void)_establishConnection;
@end

