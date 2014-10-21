/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreTelephony/CoreTelephony-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreTelephony/CTMessageAddress.h>

@class NSString;

@interface CTAsciiAddress : NSObject <NSCopying, CTMessageAddress> {

	NSString* _address;

}

@property (readonly) NSString * address;              //@synthesize address=_address - In the implementation block
+(id)asciiAddressWithString:(id)arg1 ;
-(id)initWithAddress:(id)arg1 ;
-(id)canonicalFormat;
-(id)encodedString;
-(void)dealloc;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)address;
@end

