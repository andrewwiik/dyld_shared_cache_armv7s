/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:03 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber;

@interface ASMeetingResponseSingularResponse : ASItem {

	NSString* _requestId;
	NSNumber* _status;
	NSString* _eventId;

}

@property (retain) NSString * requestId;              //@synthesize requestId=_requestId - In the implementation block
@property (retain) NSNumber * status;                 //@synthesize status=_status - In the implementation block
@property (retain) NSString * eventId;                //@synthesize eventId=_eventId - In the implementation block
+(bool)acceptsTopLevelLeaves;
+(bool)parsingLeafNode;
+(bool)parsingWithSubItems;
+(bool)frontingBasicTypes;
+(bool)notifyOfUnknownTokens;
+(id)asParseRules;
-(void)dealloc;
-(id)description;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(id)eventId;
-(id)requestId;
-(void)setRequestId:(id)arg1 ;
-(void)setEventId:(id)arg1 ;
@end

