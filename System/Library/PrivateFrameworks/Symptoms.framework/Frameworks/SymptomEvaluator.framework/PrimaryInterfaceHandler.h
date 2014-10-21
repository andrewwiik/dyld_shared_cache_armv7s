/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSDate, NSMutableArray, NSNumber;

@interface PrimaryInterfaceHandler : NSObject <SymptomAdditionalProtocol> {

	NSDate* _establishedTime;
	const char* _interfaceName;
	NSMutableArray* _additionalProtocolHandlers;
	NSNumber* _isWiFi;
	NSNumber* _isCellular;

}

@property (nonatomic,readonly) NSNumber * isWiFi;                  //@synthesize isWiFi=_isWiFi - In the implementation block
@property (nonatomic,readonly) NSNumber * isCellular;              //@synthesize isCellular=_isCellular - In the implementation block
+(id)sharedInstance;
+(void)refresh;
+(int)configure:(id)arg1 ;
+(bool)noteSymptom:(id)arg1 ;
+(id)cachedIsCellular;
+(id)isCellular;
+(id)isWiFi;
+(id)interfacePresenceTime;
+(void)addHandlerForReset:(id)arg1 ;
+(id)cachedIsWifi;
-(id)init;
-(void).cxx_destruct;
-(void)refresh;
-(id)isCellular;
-(id)isWiFi;
-(id)interfacePresenceTime;
-(void)addHandlerForReset:(id)arg1 ;
@end

