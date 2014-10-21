/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:12 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>
#import <CoreFoundation/NSCopying.h>
#import <CoreFoundation/NSCoding.h>

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding> {

	char* _g;
	unsigned char _select;
	void* _rankTable;
	double _c;
	unsigned _M;
	unsigned _factor;
	unsigned _numKey;
	unsigned _seeds[2];
	id* _keys;
	NSSharedKeySet* _subSharedKeySet;

}
+(id)keySetWithKeys:(id)arg1 ;
-(id)initWithKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)createSubclassCode:(id)arg1 interface:(const _CFString*)arg2 implementation:(const _CFString*)arg3 ;
-(unsigned long long)maximumIndex;
-(unsigned long long)keySetCount;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS16*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(id)allKeys;
-(id)copyWithZone:(NSZone)arg1 ;
-(bool)isEmpty;
-(id)keyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(void)finalize;
@end
