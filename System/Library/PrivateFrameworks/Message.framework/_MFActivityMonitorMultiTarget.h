/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableSet;

@interface _MFActivityMonitorMultiTarget : NSObject {

	id _primaryTarget;
	NSMutableSet* _allTargets;

}
-(void)dealloc;
-(id)allTargets;
-(id)displayName;
-(bool)addActivityTarget:(id)arg1 ;
-(bool)removeActivityTarget:(id)arg1 ;
-(id)primaryTarget;
-(void)setPrimaryTarget:(id)arg1 ;
@end
