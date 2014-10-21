/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSDecimalNumberBehaviors.h>
#import <CoreFoundation/NSCoding.h>

@interface NSDecimalNumberHandler : NSObject <NSDecimalNumberBehaviors, NSCoding> {

	unsigned _scale : 16;
	unsigned _roundingMode : 3;
	unsigned _raiseOnExactness : 1;
	unsigned _raiseOnOverflow : 1;
	unsigned _raiseOnUnderflow : 1;
	unsigned _raiseOnDivideByZero : 1;
	unsigned _unused : 9;
	void* _reserved2;
	void* _reserved;

}
+(id)defaultDecimalNumberHandler;
+(id)decimalNumberHandlerWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(bool)arg3 raiseOnOverflow:(bool)arg4 raiseOnUnderflow:(bool)arg5 raiseOnDivideByZero:(bool)arg6 ;
-(unsigned long long)roundingMode;
-(id)initWithRoundingMode:(unsigned long long)arg1 scale:(short)arg2 raiseOnExactness:(bool)arg3 raiseOnOverflow:(bool)arg4 raiseOnUnderflow:(bool)arg5 raiseOnDivideByZero:(bool)arg6 ;
-(id)exceptionDuringOperation:(SEL)arg1 error:(unsigned long long)arg2 leftOperand:(id)arg3 rightOperand:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(short)scale;
@end

