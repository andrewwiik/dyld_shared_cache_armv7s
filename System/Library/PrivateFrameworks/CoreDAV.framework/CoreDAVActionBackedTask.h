/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVTask.h>

@class CoreDAVAction;

@interface CoreDAVActionBackedTask : CoreDAVTask {

	CoreDAVAction* _backingAction;

}

@property (retain) CoreDAVAction * backingAction;              //@synthesize backingAction=_backingAction - In the implementation block
@property (retain) CoreDAVAction * action; 
-(void)dealloc;
-(id)description;
-(id)action;
-(void)setAction:(id)arg1 ;
-(void)setBackingAction:(id)arg1 ;
-(id)backingAction;
@end

