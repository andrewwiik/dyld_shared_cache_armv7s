/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <ProofReader/ProofReader-Structs.h>
#import <ProofReader/PRModification.h>

@class NSString;

@interface PRZhuyinModification : PRModification {

	NSRange _range;
	NSString* _replacementString;
	unsigned long long _modificationType;
	NSRange _syllableRange;
	NSRange _additionalSyllableRange;
	double _modificationScore;
	unsigned long long _syllableCountScore;
	unsigned char _letters[5];
	bool _producesPartialSyllable;

}
-(id)replacementString;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSRange)range;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 additionalSyllableRange:(NSRange)arg5 modificationScore:(double)arg6 syllableCountScore:(unsigned long long)arg7 syllableLetters:(const char*)arg8 producesPartialSyllable:(bool)arg9 ;
-(unsigned long long)syllableCountScore;
-(bool)producesPartialSyllable;
-(id)initWithRange:(NSRange)arg1 replacementString:(id)arg2 modificationType:(unsigned long long)arg3 syllableRange:(NSRange)arg4 modificationScore:(double)arg5 syllableCountScore:(unsigned long long)arg6 syllableLetters:(const char*)arg7 producesPartialSyllable:(bool)arg8 ;
-(NSRange)combinedSyllableRange;
-(bool)_shouldAppendLetter:(unsigned char)arg1 ;
-(unsigned long long)modificationType;
-(NSRange)syllableRange;
-(double)modificationScore;
-(NSRange)additionalSyllableRange;
@end

