/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <FTServices/FTServices-Structs.h>
#import <IDSFoundation/IDSBaseMessage.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying> {

	NSString* _language;
	NSDictionary* _responseRegionInformation;

}

@property (copy) NSString * language;                                   //@synthesize language=_language - In the implementation block
@property (copy) NSDictionary * responseRegionInformation;              //@synthesize responseRegionInformation=_responseRegionInformation - In the implementation block
-(id)bagKey;
-(long long)command;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)language;
-(void)setLanguage:(id)arg1 ;
-(id)responseRegionInformation;
-(void)setResponseRegionInformation:(id)arg1 ;
-(void)handleResponseDictionary:(id)arg1 ;
-(bool)wantsBagKey;
-(bool)wantsHTTPHeaders;
-(bool)wantsCompressedBody;
-(bool)wantsBinaryPush;
-(long long)responseCommand;
-(bool)wantsHTTPGet;
-(id)messageBody;
-(id)requiredKeys;
@end

