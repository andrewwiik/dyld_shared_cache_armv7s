/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:45 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSString;

@interface SymbolParserData : NSObject {

	int state;
	NSMutableDictionary* _dictionary;
	NSMutableArray* _symbols;
	NSString* _bufferString;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * symbols;                      //@synthesize symbols=_symbols - In the implementation block
@property (nonatomic,retain) NSString * bufferString;                       //@synthesize bufferString=_bufferString - In the implementation block
-(id)dictionary;
-(void).cxx_destruct;
-(void)setSymbols:(id)arg1 ;
-(id)symbols;
-(void)setDictionary:(id)arg1 ;
-(id)bufferString;
-(void)setBufferString:(id)arg1 ;
@end

