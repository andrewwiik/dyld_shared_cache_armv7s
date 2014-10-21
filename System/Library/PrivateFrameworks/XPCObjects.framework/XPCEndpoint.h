/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSCoding.h>

@protocol OS_xpc_object;
@class NSObject;

@interface XPCEndpoint : NSObject <NSCoding> {

	NSObject<OS_xpc_object>* _endpoint;

}

@property (assign,nonatomic) NSObject<OS_xpc_object> * endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)endpoint;
-(id)createConnection;
-(id)initWithConnection:(id)arg1 ;
-(void)setEndpoint:(id)arg1 ;
-(id)_initWithEndpoint:(id)arg1 ;
@end
