/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:59 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SymptomAdditionalProtocol;
@class NSString, NSMutableArray;

@interface SimpleSymptomEvaluator : NSObject {

	unsigned symptomIdent;
	NSString* symptomName;
	const char* symptomUTF8Name;
	unsigned symptomSaveFlags;
	unsigned symptomSaveAdditionalId;
	unsigned symptomMaxRetainTime;
	<SymptomAdditionalProtocol>* symptomAdditionalHandlers[4];
	NSMutableArray* symptomRules;

}

@property (assign,nonatomic) unsigned symptomIdent; 
@property (nonatomic,retain) NSString * symptomName; 
@property (assign,nonatomic) const char* symptomUTF8Name; 
@property (assign,nonatomic) unsigned symptomSaveFlags; 
@property (assign,nonatomic) unsigned symptomSaveAdditionalId; 
@property (assign,nonatomic) unsigned symptomMaxRetainTime; 
@property (nonatomic,retain) NSMutableArray * symptomRules; 
+(void)initialize;
+(id)EvaluatorForSymptom:(unsigned)arg1 create:(bool)arg2 ;
+(int)loadSyndrome:(id)arg1 ;
+(void)postIncomingEvent:(id)arg1 ;
-(id)description;
-(void).cxx_destruct;
-(unsigned)symptomSaveFlags;
-(void)setSymptomSaveFlags:(unsigned)arg1 ;
-(unsigned)symptomMaxRetainTime;
-(void)setSymptomMaxRetainTime:(unsigned)arg1 ;
-(unsigned)symptomSaveAdditionalId;
-(void)setSymptomSaveAdditionalId:(unsigned)arg1 ;
-(void)setSymptomIdent:(unsigned)arg1 ;
-(void)setSymptomName:(id)arg1 ;
-(id)symptomName;
-(void)setSymptomUTF8Name:(const char*)arg1 ;
-(void)setSymptomRules:(id)arg1 ;
-(id)symptomRules;
-(void)evaluateIncomingEvent:(id)arg1 ;
-(void)loadPreflight:(id)arg1 ;
-(unsigned)symptomIdent;
-(const char*)symptomUTF8Name;
@end

