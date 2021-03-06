/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSDirectoryEnumerator.h>

@interface NSURLDirectoryEnumerator : NSDirectoryEnumerator {

	CFURLEnumeratorRef _enumerator;
	/*^block*/ id _errorHandler;
	bool shouldContinue;

}

@property (copy) id errorHandler;              //@synthesize errorHandler=_errorHandler - In the implementation block
-(id)directoryAttributes;
-(void)skipDescendents;
-(id)initWithURL:(id)arg1 includingPropertiesForKeys:(id)arg2 options:(unsigned long long)arg3 errorHandler:(/*^block*/ id)arg4 ;
-(/*^block*/ id)errorHandler;
-(void)dealloc;
-(id)nextObject;
-(unsigned long long)level;
-(void)setErrorHandler:(/*^block*/ id)arg1 ;
-(id)fileAttributes;
-(void)skipDescendants;
-(void)finalize;
@end

