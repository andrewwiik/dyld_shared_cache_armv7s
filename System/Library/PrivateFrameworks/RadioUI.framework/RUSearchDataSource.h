/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/RadioUI.framework/RadioUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol RUSearchDataSourceDelegate;
@class RadioSearchRequest;

@interface RUSearchDataSource : NSObject {

	RadioSearchRequest* _activeRequest;
	double _activeRequestTimeInterval;
	<RUSearchDataSourceDelegate>* _delegate;
	double _minimumSearchTimeInterval;
	RadioSearchRequest* _queuedRequest;

}

@property (assign,nonatomic,__weak) <RUSearchDataSourceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void).cxx_destruct;
-(void)_updateResultForQueuedSearchRequest;
-(void)updateResultWithSearchRequest:(id)arg1 ;
@end

