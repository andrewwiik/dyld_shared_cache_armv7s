/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:01 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class ODDPoint, ODDAlgorithm, ODDShape, NSMutableArray;

@interface ODILayoutNode : NSObject {

	ODDPoint* mPoint;
	ODDAlgorithm* mAlgorithm;
	ODDShape* mShape;
	NSMutableArray* mChildren;

}
-(id)initWithLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processLayoutObjects:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processLayoutNode:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processChoose:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processForEach:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processAlgorithm:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)processShape:(id)arg1 state:(ODILayoutNodeState*)arg2 ;
-(void)dealloc;
-(id)initWithLayoutNode:(id)arg1 point:(id)arg2 ;
@end

