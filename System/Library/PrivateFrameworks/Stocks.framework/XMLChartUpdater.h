/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Stocks/XMLHTTPRequest.h>

@class Stock, StockChartData, XMLChartParserData;

@interface XMLChartUpdater : XMLHTTPRequest {

	id _delegate;
	Stock* _stock;
	long long _interval;
	StockChartData* _currentChartData;
	XMLChartParserData* _chartParserData;

}

@property (assign,nonatomic,__weak) id delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_rangeStringForInterval:(long long)arg1 ;
-(int)parseData:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)cancel;
-(void).cxx_destruct;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(bool)updateChartForStock:(id)arg1 interval:(long long)arg2 ;
-(id)aggregateDictionaryDomain;
@end

