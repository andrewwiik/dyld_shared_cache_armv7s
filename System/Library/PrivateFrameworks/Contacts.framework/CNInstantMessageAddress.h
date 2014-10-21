/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:51 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface CNInstantMessageAddress : NSObject <NSCopying> {

	NSString* _username;
	NSString* _service;

}

@property (readonly) NSString * username;              //@synthesize username=_username - In the implementation block
@property (readonly) NSString * service;               //@synthesize service=_service - In the implementation block
+(id)instantMessageAddressWithUsername:(id)arg1 service:(id)arg2 ;
-(id)initWithUsername:(id)arg1 service:(id)arg2 ;
-(id)service;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)addressDictionary;
-(id)username;
@end

