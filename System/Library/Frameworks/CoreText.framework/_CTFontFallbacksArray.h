/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreText/CoreText-Structs.h>
#import <CoreFoundation/NSArray.h>

@class NSArray, NSMutableArray;

@interface _CTFontFallbacksArray : NSArray {

	int _lock;
	const TBaseFont* _baseFont;
	unsigned long long _count;
	NSArray* _cascade;
	NSMutableArray* _fallbacks;

}
-(id)initWithBaseFont:(const TBaseFont*)arg1 cascade:(id)arg2 ;
-(void)dealloc;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CT1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
@end

