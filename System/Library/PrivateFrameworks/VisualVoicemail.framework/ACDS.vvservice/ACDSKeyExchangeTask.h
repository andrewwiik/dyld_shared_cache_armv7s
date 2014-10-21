/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:15 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/ACDS.vvservice/ACDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ACDS/ACDS-Structs.h>
#import <ACDS/ACDSTask.h>

@interface ACDSKeyExchangeTask : ACDSTask
-(bool)requiresPassword;
-(int)type;
-(id)name;
-(void)perform:(SCD_Struct_AC0*)arg1 ;
-(int)priority;
-(long long)serviceTaskType;
-(void)handleResponse:(CFHTTPMessageRef)arg1 body:(CFDataRef)arg2 status:(long long)arg3 service:(id)arg4 error:(id*)arg5 ;
-(id)taskByCoalescingWithTask:(id)arg1 ;
@end

