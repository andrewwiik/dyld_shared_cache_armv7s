/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSString, NSMutableDictionary, NSArray;

@interface PFUbiquitySaveSnapshot : NSObject {

	NSDate* _transactionDate;
	NSString* _modelVersionHash;
	NSString* _exportingPeerID;
	NSString* _localPeerID;
	NSMutableDictionary* _storeNameToStoreSaveSnapshots;

}

@property (nonatomic,retain) NSDate * transactionDate;                   //@synthesize transactionDate=_transactionDate - In the implementation block
@property (nonatomic,readonly) NSString * modelVersionHash;              //@synthesize modelVersionHash=_modelVersionHash - In the implementation block
@property (nonatomic,readonly) NSString * exportingPeerID;               //@synthesize exportingPeerID=_exportingPeerID - In the implementation block
@property (nonatomic,readonly) NSArray * storeNames; 
@property (nonatomic,readonly) NSString * localPeerID;                   //@synthesize localPeerID=_localPeerID - In the implementation block
-(id)modelVersionHash;
-(id)localPeerID;
-(id)exportingPeerID;
-(id)storeSaveSnapshotForStoreName:(id)arg1 ;
-(id)transactionDate;
-(void)setTransactionDate:(id)arg1 ;
-(id)initWithSaveNotification:(id)arg1 withLocalPeerID:(id)arg2 ;
-(id)storeNames;
-(id)storeSaveSnapshotForStore:(id)arg1 ;
-(id)initWithTransactionLog:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
