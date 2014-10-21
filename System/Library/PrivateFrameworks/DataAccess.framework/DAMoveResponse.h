/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:00 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, DAMessageMoveRequest;

@interface DAMoveResponse : NSObject {

	int _status;
	NSString* _sourceID;
	NSString* _destID;
	DAMessageMoveRequest* _origRequest;

}

@property (readonly) int status;                                    //@synthesize status=_status - In the implementation block
@property (readonly) NSString * sourceID;                           //@synthesize sourceID=_sourceID - In the implementation block
@property (readonly) NSString * destID;                             //@synthesize destID=_destID - In the implementation block
@property (retain) DAMessageMoveRequest * origRequest;              //@synthesize origRequest=_origRequest - In the implementation block
-(void)dealloc;
-(id)description;
-(int)status;
-(id)origRequest;
-(id)initWithStatus:(int)arg1 sourceID:(id)arg2 destID:(id)arg3 ;
-(void)setOrigRequest:(id)arg1 ;
-(id)sourceID;
-(id)destID;
@end

