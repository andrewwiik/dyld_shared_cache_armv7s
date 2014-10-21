/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSMutableDictionary, NSMutableArray;

@interface CertificateErrorHandler : NSObject <SymptomAdditionalProtocol> {

	unsigned _maxAge;
	unsigned _maxCount;
	NSMutableDictionary* _banned;
	NSMutableArray* _store;

}

@property (assign,nonatomic) unsigned maxAge;                 //@synthesize maxAge=_maxAge - In the implementation block
@property (assign,nonatomic) unsigned maxCount;               //@synthesize maxCount=_maxCount - In the implementation block
@property (retain) NSMutableDictionary * banned;              //@synthesize banned=_banned - In the implementation block
@property (retain) NSMutableArray * store;                    //@synthesize store=_store - In the implementation block
+(id)sharedInstance;
+(int)configure:(id)arg1 ;
+(id)evaluate:(id)arg1 forThreshold:(long long)arg2 ;
+(bool)noteSymptom:(id)arg1 ;
-(id)store;
-(void)setMaxCount:(unsigned)arg1 ;
-(void)setStore:(id)arg1 ;
-(id)init;
-(id)description;
-(void).cxx_destruct;
-(unsigned)maxCount;
-(unsigned)maxAge;
-(void)setMaxAge:(unsigned)arg1 ;
-(int)configure:(id)arg1 ;
-(id)evaluate:(id)arg1 forThreshold:(long long)arg2 ;
-(bool)noteSymptom:(id)arg1 ;
-(id)banned;
-(void)setBanned:(id)arg1 ;
@end

