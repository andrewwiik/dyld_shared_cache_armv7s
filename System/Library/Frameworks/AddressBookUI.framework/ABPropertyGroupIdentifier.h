/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface ABPropertyGroupIdentifier : NSObject <NSCopying> {

	int _property;
	void* _context;

}

@property (nonatomic,readonly) int property;               //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) void* context;              //@synthesize context=_context - In the implementation block
+(id)propertyGroupIdentifierWithProperty:(int)arg1 context:(void*)arg2 ;
-(id)initWithProperty:(int)arg1 context:(void*)arg2 ;
-(int)property;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone)arg1 ;
-(void*)context;
@end

