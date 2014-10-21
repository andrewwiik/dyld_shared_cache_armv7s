/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CPAggregateDictionary : NSObject

@property (getter=isEnabled,nonatomic,readonly) bool enabled; 
+(id)sharedAggregateDictionary;
-(void)setValue:(long long)arg1 forScalarKey:(id)arg2 ;
-(void)setValue:(double)arg1 forDistributionKey:(id)arg2 ;
-(void)addValue:(long long)arg1 forKey:(id)arg2 ;
-(void)incrementKey:(id)arg1 ;
-(bool)isEnabled;
-(int)commit;
-(void)significantTimeChanged;
-(void)pushValue:(double)arg1 forKey:(id)arg2 ;
-(void)clearScalarKey:(id)arg1 ;
-(void)subtractValue:(long long)arg1 forKey:(id)arg2 ;
-(void)decrementKey:(id)arg1 ;
-(void)clearDistributionKey:(id)arg1 ;
@end

