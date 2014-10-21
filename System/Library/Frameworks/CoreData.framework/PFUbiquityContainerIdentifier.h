/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSFilePresenter.h>

@class NSString, PFUbiquityLocation, NSURL, NSOperationQueue;

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {

	NSString* _storeName;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _uuidString;
	PFUbiquityLocation* _uuidFileLocation;
	NSURL* _presentedItemURL;
	bool _usedExistingUUIDFile;

}

@property (nonatomic,readonly) NSString * uuidString;                              //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * uuidFileLocation;              //@synthesize uuidFileLocation=_uuidFileLocation - In the implementation block
@property (nonatomic,readonly) bool usedExistingUUIDFile;                          //@synthesize usedExistingUUIDFile=_usedExistingUUIDFile - In the implementation block
@property (readonly) NSURL * presentedItemURL;                                     //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (readonly) NSURL * primaryPresentedItemURL; 
-(id)uuidString;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(bool)identifyContainer:(id*)arg1 ;
-(bool)usedExistingUUIDFile;
-(bool)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)setUUIDStringFromLocation:(id)arg1 ;
-(bool)writeToDisk:(id*)arg1 ;
-(id)uuidFileLocation;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/ id)arg1 ;
-(id)presentedItemURL;
-(id)presentedItemOperationQueue;
@end

