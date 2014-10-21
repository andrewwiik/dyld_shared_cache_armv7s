/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:58 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Symbolication/Symbolication-Structs.h>
#import <Symbolication/VMUAddressRange.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, VMUSymbolOwner;

@interface VMUSymbol : VMUAddressRange <NSCopying> {

	NSString* _name;
	NSString* _mangledName;
	VMUSymbolOwner* _owner;
	unsigned _flags;

}
+(id)symbolWithName:(id)arg1 mangledName:(id)arg2 addressRange:(VMURange)arg3 owner:(id)arg4 flags:(unsigned)arg5 ;
-(void)setOwner:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)text;
-(id)name;
-(long long)compare:(id)arg1 ;
-(bool)isExternal;
-(unsigned)flags;
-(id)owner;
-(VMURange)addressRange;
-(id)sourceInfosInAddressRange:(VMURange)arg1 ;
-(id)initWithName:(id)arg1 mangledName:(id)arg2 addressRange:(VMURange)arg3 owner:(id)arg4 flags:(unsigned)arg5 ;
-(id)sourceInfoForAddress:(unsigned long long)arg1 ;
-(bool)isFunction;
-(id)mangledName;
-(id)sourceInfos;
-(bool)isObjcMethod;
-(bool)isJavaMethod;
-(bool)isDyldStub;
-(bool)isStab;
-(bool)isDwarf;
-(bool)isArm;
-(bool)isThumb;
-(bool)isEqualToSymbol:(id)arg1 ;
@end

