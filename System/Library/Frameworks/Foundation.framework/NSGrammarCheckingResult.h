/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSTextCheckingResult.h>

@class NSArray;

@interface NSGrammarCheckingResult : NSTextCheckingResult {

	NSRange _range;
	NSArray* _details;

}
-(id)resultByAdjustingRangesWithOffset:(long long)arg1 ;
-(bool)_adjustRangesWithOffset:(long long)arg1 ;
-(id)grammarDetails;
-(id)initWithRange:(NSRange)arg1 details:(id)arg2 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSRange)range;
-(unsigned long long)resultType;
@end

