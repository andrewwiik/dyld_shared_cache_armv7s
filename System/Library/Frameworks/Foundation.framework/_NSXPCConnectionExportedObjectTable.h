/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@class NSLock;

@interface _NSXPCConnectionExportedObjectTable : NSObject {

	NSLock* _lock;
	CFDictionaryRef _proxyNumberToObject;
	CFDictionaryRef _objectToProxyNumber;
	unsigned long long _next;
	bool _valid;

}
-(id)exportedObjectForProxyNumber:(unsigned long long)arg1 ;
-(id)interfaceForProxyNumber:(unsigned long long)arg1 ;
-(unsigned long long)proxyNumberForExportedObject:(id)arg1 interface:(id)arg2 ;
-(void)setExportedObject:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)setInterface:(id)arg1 forProxyNumber:(unsigned long long)arg2 ;
-(void)releaseExportedObject:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(void)finalize;
@end

