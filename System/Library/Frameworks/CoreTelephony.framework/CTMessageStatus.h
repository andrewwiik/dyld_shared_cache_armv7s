/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface CTMessageStatus : NSObject {

	unsigned _messageId;
	int _messageType;
	int _result;

}

@property (readonly) unsigned messageId;              //@synthesize messageId=_messageId - In the implementation block
@property (readonly) int messageType;                 //@synthesize messageType=_messageType - In the implementation block
@property (readonly) int result;                      //@synthesize result=_result - In the implementation block
-(unsigned)messageId;
-(int)messageType;
-(id)initWithMessageId:(unsigned)arg1 messageType:(int)arg2 result:(int)arg3 ;
-(int)result;
@end

