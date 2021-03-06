/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface NSPointerFunctions : NSObject <NSCopying>

@property (assign) /*function pointer*/ void* hashFunction; 
@property (assign) /*function pointer*/ void* isEqualFunction; 
@property (assign) /*function pointer*/ void* sizeFunction; 
@property (assign) /*function pointer*/ void* descriptionFunction; 
@property (assign) /*function pointer*/ void* relinquishFunction; 
@property (assign) /*function pointer*/ void* acquireFunction; 
@property (assign) bool usesStrongWriteBarrier; 
@property (assign) bool usesWeakReadAndWriteBarriers; 
+(id)allocWithZone:(NSZone)arg1 ;
+(id)pointerFunctionsWithOptions:(unsigned long long)arg1 ;
-(void)setHashFunction:(/*function pointer*/ void*)arg1 ;
-(void)setIsEqualFunction:(/*function pointer*/ void*)arg1 ;
-(void)setSizeFunction:(/*function pointer*/ void*)arg1 ;
-(void)setDescriptionFunction:(/*function pointer*/ void*)arg1 ;
-(void)setAcquireFunction:(/*function pointer*/ void*)arg1 ;
-(void)setRelinquishFunction:(/*function pointer*/ void*)arg1 ;
-(void)setUsesStrongWriteBarrier:(bool)arg1 ;
-(void)setUsesWeakReadAndWriteBarriers:(bool)arg1 ;
-(/*function pointer*/ void*)sizeFunction;
-(/*function pointer*/ void*)hashFunction;
-(/*function pointer*/ void*)isEqualFunction;
-(/*function pointer*/ void*)descriptionFunction;
-(/*function pointer*/ void*)acquireFunction;
-(/*function pointer*/ void*)relinquishFunction;
-(bool)usesStrongWriteBarrier;
-(bool)usesWeakReadAndWriteBarriers;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 ;
@end

