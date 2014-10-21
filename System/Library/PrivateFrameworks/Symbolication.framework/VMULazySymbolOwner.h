/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Symbolication/Symbolication-Structs.h>
@class NSString, NSDictionary, NSArray;

@interface VMULazySymbolOwner : NSObject {

	NSString* _name;
	NSDictionary* _signature;
	NSArray* _regions;
	unsigned _flags;

}
+(id)lazySymbolOwnerWithName:(id)arg1 signature:(id)arg2 regions:(id)arg3 flags:(unsigned)arg4 ;
-(bool)validate;
-(bool)containsAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)name;
-(unsigned)flags;
-(id)signature;
-(id)regions;
-(id)architecture;
-(bool)isProtected;
-(void)slideToSegmentAddresses:(id)arg1 ;
-(bool)isLazy;
-(bool)overlapsAddressRange:(VMURange)arg1 ;
-(bool)hasRegionsForName:(id)arg1 ;
-(id)initWithName:(id)arg1 signature:(id)arg2 regions:(id)arg3 flags:(unsigned)arg4 ;
@end

