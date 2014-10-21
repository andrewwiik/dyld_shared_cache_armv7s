/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSString.h>

@class NSString;

@interface NSPinyinString : NSString {

	NSString* _string;
	unsigned long long _syllableCount;
	unsigned long long _score;
	unsigned long long _rangeCount;
	unsigned long long _replacementCount;
	unsigned long long _transpositionCount;
	unsigned long long _insertionCount;
	unsigned long long _deletionCount;
	unsigned long long _firstModificationIndex;
	NSRange* _ranges;
	bool _lastSyllableIsPartial;

}
+(id)_alternativesForInputString:(id)arg1 ;
+(id)_prefixesForInputString:(id)arg1 ;
+(id)_correctionsForInputString:(id)arg1 ;
+(id)alternativesForInputString:(id)arg1 ;
+(id)prefixesForInputString:(id)arg1 ;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 indexOfFirstModification:(unsigned long long)arg9 rangeCount:(unsigned long long)arg10 ranges:(NSRange*)arg11 ;
-(unsigned long long)syllableCount;
-(bool)lastSyllableIsPartial;
-(unsigned long long)score;
-(unsigned long long)numberOfNonPinyinRanges;
-(unsigned long long)numberOfReplacements;
-(unsigned long long)numberOfTranspositions;
-(unsigned long long)numberOfInsertions;
-(unsigned long long)numberOfDeletions;
-(unsigned long long)indexOfFirstModification;
-(NSRange)nonPinyinRangeAtIndex:(unsigned long long)arg1 ;
-(id)nonPinyinIndexSet;
-(id)initWithString:(id)arg1 syllableCount:(unsigned long long)arg2 lastSyllableIsPartial:(bool)arg3 score:(unsigned long long)arg4 replacementCount:(unsigned long long)arg5 transpositionCount:(unsigned long long)arg6 insertionCount:(unsigned long long)arg7 deletionCount:(unsigned long long)arg8 rangeCount:(unsigned long long)arg9 ranges:(NSRange*)arg10 ;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(id)string;
-(Class)classForCoder;
-(unsigned short)characterAtIndex:(unsigned long long)arg1 ;
@end
