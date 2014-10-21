/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:29 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/POP.framework/POP
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Message/MFAuthScheme.h>

@interface MFAPOPAuthScheme : MFAuthScheme
+(void)load;
-(bool)requiresPassword;
-(id)name;
-(bool)supportsAccountType:(id)arg1 ;
-(bool)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)connectionClassForAccountClass:(Class)arg1 ;
-(Class)authenticatorClass;
-(bool)hasEncryption;
-(id)humanReadableName;
@end
