/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:39 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <CoreFoundation/NSFastEnumeration.h>

@protocol AFUIQueueDelegate;
@class NSMutableArray;

@interface AFUIQueue : NSObject <NSFastEnumeration> {

	<AFUIQueueDelegate>* _delegate;
	NSMutableArray* _objects;

}

@property (nonatomic,readonly) id frontObject; 
@property (nonatomic,readonly) long long count; 
@property (assign,nonatomic,__weak) <AFUIQueueDelegate> * delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=_objects,nonatomic,readonly) NSMutableArray * objects;              //@synthesize objects=_objects - In the implementation block
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_AF0*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setDelegate:(id)arg1 ;
-(long long)count;
-(id)objectAtIndex:(long long)arg1 ;
-(id)init;
-(id)description;
-(id)delegate;
-(void).cxx_destruct;
-(id)_objects;
-(id)frontObject;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)dequeueAllObjects;
-(void)enqueueObjects:(id)arg1 ;
@end
