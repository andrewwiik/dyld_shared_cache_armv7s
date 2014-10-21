/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface PFUbiquityPeerSnapshotCollection : NSObject {

	NSMutableDictionary* _peerIDToTransactionNumberToSnapshot;
	NSMutableDictionary* _peerIDToTranasctionNumberToKnowledgeVector;
	NSMutableDictionary* _kvToSnapshot;
	NSMutableArray* _peerSnapshots;
	bool _needSort;

}
-(id)allPeerIDs;
-(void)addSnapshot:(id)arg1 ;
-(bool)calculateSnapshotDiffsWithError:(id*)arg1 ;
-(id)snapshotForKnowledgeVector:(id)arg1 ;
-(id)snapshotForPeerID:(id)arg1 andTransactionNumber:(id)arg2 ;
-(id)knowledgeVectorsForTransactionNumber:(id)arg1 exportedByPeerWithID:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end
