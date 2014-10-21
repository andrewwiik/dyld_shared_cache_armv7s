/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:25 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSWeakCallback.h>

@class NSObject, NSKeyValueProperty, NSPointerArray;

@interface NSKeyValueObservance : NSWeakCallback {

	int _retainCountMinusOne;
	NSObject* _observer;
	NSKeyValueProperty* _property;
	unsigned long long _options;
	void* _context;
	NSObject* _originalObservable;
	unsigned long long _cachedUnrotatedHashComponent;
	bool _cachedIsShareable;
	NSPointerArray* _observationInfos;

}
-(id)_initWithObserver:(id)arg1 property:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 originalObservable:(id)arg5 ;
-(oneway void)release;
-(id)retain;
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)retainCount;
-(id)description;
-(bool)_tryRetain;
-(bool)_isDeallocating;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end
