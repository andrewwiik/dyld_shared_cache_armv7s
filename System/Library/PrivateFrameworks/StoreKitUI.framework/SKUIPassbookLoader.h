/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/PKAddPassesViewControllerDelegate.h>

@protocol SKUIPassbookLoaderDelegate;
@class SKUIClientContext, NSOperationQueue;

@interface SKUIPassbookLoader : NSObject <PKAddPassesViewControllerDelegate> {

	SKUIClientContext* _clientContext;
	<SKUIPassbookLoaderDelegate>* _delegate;
	long long _loadCount;
	NSOperationQueue* _operationQueue;

}

@property (assign,nonatomic,__weak) <SKUIPassbookLoaderDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
-(id)operationQueue;
-(void)setOperationQueue:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void).cxx_destruct;
-(void)_loadPassWithURL:(id)arg1 ;
-(void)_sendDidFinishIfFinished;
-(void)_didLoadWithPass:(id)arg1 error:(id)arg2 ;
-(void)addPassesViewControllerDidFinish:(id)arg1 ;
-(id)initWithClientContext:(id)arg1 ;
-(void)loadPassWithURL:(id)arg1 ;
@end

