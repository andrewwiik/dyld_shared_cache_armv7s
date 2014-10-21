/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:44 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libAWDProtobufSiri.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned gatewayPingDuration : 1;
	unsigned knownURLLoadDuration : 1;
	unsigned siriSaltURLLoadDuration : 1;
	unsigned siriURLLoadDuration : 1;
	unsigned timestamp : 1;
	unsigned gatewayPingsDropped : 1;
	unsigned gatewayPingsSent : 1;
	unsigned gatewayStatus : 1;
	unsigned interface : 1;
	unsigned sendBufferBytesRemaining : 1;
	unsigned analyzingSuccessfulRetry : 1;
	unsigned isUserRequest : 1;
	unsigned wwanPreferred : 1;
} SCD_Struct_AW1;

typedef struct {
	unsigned errorCode : 1;
	unsigned timestamp : 1;
	unsigned connectionType : 1;
} SCD_Struct_AW2;

typedef struct {
	unsigned timestamp : 1;
} SCD_Struct_AW3;

typedef struct {
	unsigned connectionTechnology : 1;
	unsigned interfaceIndex : 1;
	unsigned sendBufferSize : 1;
	unsigned timestamp : 1;
	unsigned wwanPreferred : 1;
} SCD_Struct_AW4;

typedef struct {
	unsigned duration : 1;
	unsigned timestamp : 1;
} SCD_Struct_AW5;
