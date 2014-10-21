/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUQueryDataSource.h>

@class NSOperationQueue, _MPUSearchOperation, NSArray, MPUQueryDataSource, NSString;

@interface MPUSearchDataSource : MPUQueryDataSource {

	NSOperationQueue* _operationQueue;
	_MPUSearchOperation* _searchOperation;
	NSArray* _searchResults;
	MPUQueryDataSource* _dataSource;
	NSString* _searchString;

}

@property (nonatomic,readonly) MPUQueryDataSource * dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) NSString * searchString;                      //@synthesize searchString=_searchString - In the implementation block
-(void)dealloc;
-(unsigned long long)count;
-(id)dataSource;
-(void).cxx_destruct;
-(id)searchString;
-(id)_searchPropertiesForGroupingType:(long long)arg1 ;
-(void)_searchOperation:(id)arg1 didFinishWithResults:(id)arg2 ;
-(id)initWithDataSource:(id)arg1 operationQueue:(id)arg2 ;
-(void)filterResultsUsingSearchString:(id)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id)entities;
@end

