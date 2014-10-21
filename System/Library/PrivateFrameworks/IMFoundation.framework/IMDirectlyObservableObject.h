/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:21 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSArray;

@interface IMDirectlyObservableObject : NSObject {

	NSArray* _observers;

}

@property (retain) NSArray * observers;              //@synthesize observers=_observers - In the implementation block
-(void)dealloc;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(id)arg1 ;
-(id)observers;
-(void)addObserver:(id)arg1 ;
-(void)informObserversOfNotification:(id)arg1 ;
-(void)_objectDidPostNotification:(id)arg1 ;
@end
