/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUContinuationDelegate;
@interface SUContinuation : NSObject {

	<SUContinuationDelegate>* _delegate;

}

@property (assign,nonatomic) <SUContinuationDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)cancel;
-(void)start;
-(void)sendErrorToDelegate:(id)arg1 ;
-(void)sendFinishToDelegate;
@end

