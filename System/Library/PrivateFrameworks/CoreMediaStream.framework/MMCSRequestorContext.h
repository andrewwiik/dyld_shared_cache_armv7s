/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class MMCSEngine;

@interface MMCSRequestorContext : NSObject {

	int _type;
	MMCSEngine* _engine;
	char** _signatures;
	unsigned long long _count;
	unsigned long long* _itemIDs;
	unsigned* _itemFlags;
	char** _authTokens;

}

@property (assign,nonatomic,__weak) MMCSEngine * engine;               //@synthesize engine=_engine - In the implementation block
@property (assign,nonatomic) int type;                                 //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned long long count;                 //@synthesize count=_count - In the implementation block
@property (assign,nonatomic) unsigned long long* itemIDs;              //@synthesize itemIDs=_itemIDs - In the implementation block
@property (assign,nonatomic) unsigned* itemFlags;                      //@synthesize itemFlags=_itemFlags - In the implementation block
@property (assign,nonatomic) char** signatures;                        //@synthesize signatures=_signatures - In the implementation block
@property (assign,nonatomic) char** authTokens;                        //@synthesize authTokens=_authTokens - In the implementation block
+(id)contextWithEngine:(id)arg1 type:(int)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(bool)isEqual:(id)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setCount:(unsigned long long)arg1 ;
-(void).cxx_destruct;
-(id)engine;
-(id)initWithEngine:(id)arg1 type:(int)arg2 ;
-(void)setEngine:(id)arg1 ;
-(char**)signatures;
-(void)setSignatures:(char**)arg1 ;
-(unsigned long long*)itemIDs;
-(void)setItemIDs:(unsigned long long*)arg1 ;
-(unsigned*)itemFlags;
-(void)setItemFlags:(unsigned*)arg1 ;
-(char**)authTokens;
-(void)setAuthTokens:(char**)arg1 ;
@end

