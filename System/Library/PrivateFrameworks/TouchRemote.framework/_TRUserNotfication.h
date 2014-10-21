/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <TouchRemote/TouchRemote-Structs.h>
@interface _TRUserNotfication : NSObject {

	CFUserNotificationRef _userNotification;
	int _response;
	unsigned long long _responseFlags;

}

@property (nonatomic,readonly) CFUserNotificationRef CFUserNotification; 
@property (nonatomic,readonly) int response;                                          //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) unsigned long long responseFlags;                      //@synthesize responseFlags=_responseFlags - In the implementation block
-(void)dealloc;
-(void)show;
-(void)cancel;
-(int)response;
-(unsigned long long)responseFlags;
-(id)initWithDictionary:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(CFUserNotificationRef)CFUserNotification;
@end

