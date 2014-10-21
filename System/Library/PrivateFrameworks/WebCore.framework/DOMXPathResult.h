/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType; 
@property (readonly) double numberValue; 
@property (readonly) NSString * stringValue; 
@property (readonly) bool booleanValue; 
@property (readonly) DOMNode * singleNodeValue; 
@property (readonly) bool invalidIteratorState; 
@property (readonly) unsigned snapshotLength; 
-(void)dealloc;
-(id)stringValue;
-(void)finalize;
-(unsigned short)resultType;
-(double)numberValue;
-(bool)booleanValue;
-(id)singleNodeValue;
-(bool)invalidIteratorState;
-(unsigned)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(unsigned)arg1 ;
@end

