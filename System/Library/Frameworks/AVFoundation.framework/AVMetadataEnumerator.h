/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:58:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class NSEnumerator, NSString, NSLocale;

@interface AVMetadataEnumerator : NSEnumerator {

	OpaqueFigMetadataReaderRef _reader;
	NSEnumerator* _arrayEnumerator;
	id _key;
	NSString* _keySpace;
	NSLocale* _locale;
	long long _count;
	long long _index;

}
+(id)metadataEnumeratorWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
+(id)metadataEnumeratorWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4 ;
-(id)initWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
-(id)initWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4 ;
-(id)initWithMetadataReader:(OpaqueFigMetadataReaderRef)arg1 array:(id)arg2 key:(id)arg3 keySpace:(id)arg4 locale:(id)arg5 ;
-(void)_setMetadataReader:(OpaqueFigMetadataReaderRef)arg1 ;
-(void)_setArrayEnumerator:(id)arg1 ;
-(void)_setKeySpace:(id)arg1 ;
-(void)_setKey:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(void)_setLocale:(id)arg1 ;
-(void)finalize;
@end

