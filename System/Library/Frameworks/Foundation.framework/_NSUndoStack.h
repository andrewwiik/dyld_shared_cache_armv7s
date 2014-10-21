/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class _NSUndoObject;

@interface _NSUndoStack : NSObject {

	unsigned long long _max;
	unsigned long long _count;
	unsigned long long _nestingLevel;
	_NSUndoObject* _head;

}
-(id)topUndoObject;
-(void)markBegin;
-(bool)isDiscardable;
-(id)popUndoObject;
-(void)markEnd;
-(id)groupIdentifier;
-(void)setGroupIdentifier:(id)arg1 ;
-(void)setDiscardable:(bool)arg1 ;
-(void)removeAllObjectsWithTarget:(id)arg1 ;
-(void)_removeBottom;
-(id)_beginMark;
-(void)dealloc;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(void)removeAllObjects;
-(id)description;
-(bool)popAndInvoke;
-(unsigned long long)nestingLevel;
-(void)push:(id)arg1 ;
-(unsigned long long)max;
-(void)setMax:(unsigned long long)arg1 ;
@end

