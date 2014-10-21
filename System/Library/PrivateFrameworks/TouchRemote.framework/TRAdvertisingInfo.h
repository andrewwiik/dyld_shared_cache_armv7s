/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:04 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <TouchRemote/TouchRemote-Structs.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSMutableCopying.h>
#import <CoreFoundation/NSSecureCoding.h>

@class NSData;

@interface TRAdvertisingInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSData* _pairingPublicKey;
	NSData* _wirelessProximityIdentifier;

}

@property (nonatomic,readonly) NSData * pairingPublicKey;                         //@synthesize pairingPublicKey=_pairingPublicKey - In the implementation block
@property (nonatomic,readonly) NSData * wirelessProximityIdentifier;              //@synthesize wirelessProximityIdentifier=_wirelessProximityIdentifier - In the implementation block
+(bool)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)mutableCopyWithZone:(NSZone)arg1 ;
-(void).cxx_destruct;
-(id)_initWithTXTRecordRepresentation:(id)arg1 ;
-(id)pairingPublicKey;
-(id)_TXTRecordRepresentation;
-(id)wirelessProximityIdentifier;
@end
