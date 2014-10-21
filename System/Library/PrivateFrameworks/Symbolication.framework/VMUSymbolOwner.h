/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <CoreFoundation/NSCopying.h>

@protocol VMUMemory;
@class NSString, NSDictionary, NSArray;

@interface VMUSymbolOwner : NSObject <NSCopying> {

	NSString* _name;
	NSDictionary* _signature;
	<VMUMemory>* _textMemory;
	NSArray* _regions;
	NSArray* _symbols;
	NSArray* _sourceInfos;
	unsigned _flags;
	unsigned _currentVersion;
	unsigned _compatibilityVersion;

}
+(id)symbolOwnerWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(unsigned)arg7 currentVersion:(unsigned)arg8 compatibilityVersion:(unsigned)arg9 ;
-(bool)validate;
-(unsigned long long)size;
-(id)programTextForAddressRange:(VMURange)arg1 ;
-(void)slideToSegmentAddresses:(id)arg1 ;
-(id)symbolOwnerByAddingContentsOfOwner:(id)arg1 ;
-(bool)isLazy;
-(id)programTextForAddress:(unsigned long long)arg1 ;
-(bool)containsAddress:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)description;
-(id)path;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)name;
-(long long)compare:(id)arg1 ;
-(id)symbols;
-(unsigned)flags;
-(id)signature;
-(unsigned)currentVersion;
-(id)regions;
-(id)architecture;
-(bool)isMachO;
-(id)symbolsForMangledName:(id)arg1 ;
-(id)sourceInfosInAddressRange:(VMURange)arg1 ;
-(unsigned)compatibilityVersion;
-(bool)isCommpage;
-(bool)isProtected;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
-(id)sourceInfos;
-(id)regionForAddress:(unsigned long long)arg1 ;
-(id)regionsForName:(id)arg1 ;
-(id)symbolForAddress:(unsigned long long)arg1 ;
-(id)symbolsForName:(id)arg1 ;
-(id)symbolsInAddressRange:(VMURange)arg1 ;
-(id)initWithName:(id)arg1 signature:(id)arg2 textMemory:(id)arg3 regions:(id)arg4 symbols:(id)arg5 sourceInfos:(id)arg6 flags:(unsigned)arg7 currentVersion:(unsigned)arg8 compatibilityVersion:(unsigned)arg9 ;
-(id)symbolForName:(id)arg1 ;
-(bool)isPEF;
-(bool)isAOut;
-(bool)isDylib;
-(bool)isDyld;
-(bool)isBundle;
-(bool)isDsym;
-(bool)isEqualToSymbolOwner:(id)arg1 ;
@end

