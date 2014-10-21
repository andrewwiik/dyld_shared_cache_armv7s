/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSDictionary, NSData;

@interface ATMessage : NSObject {

	unsigned _session;
	NSString* _name;
	NSDictionary* _params;
	NSData* _sig;

}

@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;              //@synthesize params=_params - In the implementation block
@property (nonatomic,retain) NSData * sig;                           //@synthesize sig=_sig - In the implementation block
@property (nonatomic,readonly) unsigned sessionNumber;               //@synthesize session=_session - In the implementation block
+(id)messageFromDictionary:(id)arg1 ;
+(id)messageWithName:(id)arg1 parameters:(id)arg2 ;
+(unsigned)nextSessionNumber;
+(unsigned)currentSessionNumber;
+(void)setSessionNumber:(unsigned)arg1 ;
+(id)messageFromData:(id)arg1 ;
+(id)messageWithName:(id)arg1 parameters:(id)arg2 session:(unsigned)arg3 ;
-(id)sig;
-(id)parameterForKey:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionary;
-(id)data;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setSig:(id)arg1 ;
-(unsigned)sessionNumber;
-(id)parameters;
-(void)setParameters:(id)arg1 ;
@end

