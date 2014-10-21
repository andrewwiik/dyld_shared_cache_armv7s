/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:52 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface CoreDAVSRVResourceRecord : NSObject {

	NSString* _serviceString;
	NSNumber* _priority;
	NSNumber* _weight;
	NSNumber* _port;
	NSString* _target;

}

@property (retain) NSString * serviceString;              //@synthesize serviceString=_serviceString - In the implementation block
@property (retain) NSNumber * priority;                   //@synthesize priority=_priority - In the implementation block
@property (retain) NSNumber * weight;                     //@synthesize weight=_weight - In the implementation block
@property (retain) NSNumber * port;                       //@synthesize port=_port - In the implementation block
@property (retain) NSString * target;                     //@synthesize target=_target - In the implementation block
-(void)setPort:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(id)priority;
-(void)setPriority:(id)arg1 ;
-(id)weight;
-(void)setWeight:(id)arg1 ;
-(id)serviceString;
-(void)setServiceString:(id)arg1 ;
-(id)port;
@end

