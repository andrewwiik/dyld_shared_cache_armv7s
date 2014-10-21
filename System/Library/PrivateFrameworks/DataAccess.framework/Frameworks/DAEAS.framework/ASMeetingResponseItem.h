/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, ASEventUID, NSDate;

@interface ASMeetingResponseItem : NSObject {

	NSString* _deliveryItemFolderId;
	NSString* _deliveryItemServerId;
	int _meetingResponse;
	ASEventUID* _eventUID;
	NSString* _instanceId;
	NSString* _calEventServerId;
	int _status;
	id _context;
	NSDate* _instanceDate;

}

@property (readonly) NSString * deliveryItemFolderId;              //@synthesize deliveryItemFolderId=_deliveryItemFolderId - In the implementation block
@property (readonly) NSString * deliveryItemServerId;              //@synthesize deliveryItemServerId=_deliveryItemServerId - In the implementation block
@property (readonly) int meetingResponse;                          //@synthesize meetingResponse=_meetingResponse - In the implementation block
@property (readonly) ASEventUID * eventUID;                        //@synthesize eventUID=_eventUID - In the implementation block
@property (readonly) NSDate * instanceDate;                        //@synthesize instanceDate=_instanceDate - In the implementation block
@property (retain) NSString * calEventServerId;                    //@synthesize calEventServerId=_calEventServerId - In the implementation block
@property (assign) int status;                                     //@synthesize status=_status - In the implementation block
@property (retain) id context;                                     //@synthesize context=_context - In the implementation block
-(void)dealloc;
-(id)description;
-(id)context;
-(void)setContext:(id)arg1 ;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(id)initWithDeliveryItemFolderId:(id)arg1 deliveryItemServerId:(id)arg2 instanceDate:(id)arg3 meetingResponse:(int)arg4 eventUID:(id)arg5 ;
-(id)deliveryItemFolderId;
-(id)deliveryItemServerId;
-(id)instanceDate;
-(int)meetingResponse;
-(id)eventUID;
-(id)calEventServerId;
-(void)setCalEventServerId:(id)arg1 ;
@end

