/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSDate, NSString, IMMessage;

@interface IMChatItem : NSObject {

	NSDate* _date;
	id _datum1;
	id _datum2;
	id _datum3;
	bool _isFromArchive;
	NSString* _guid;

}

@property (nonatomic,retain) NSString * guid;                       //@synthesize guid=_guid - In the implementation block
@property (nonatomic,readonly) NSDate * date;                       //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (nonatomic,readonly) IMMessage * message; 
@property (nonatomic,readonly) bool isFromArchive; 
-(void)dealloc;
-(id)date;
-(id)message;
-(id)stringValue;
-(long long)_reverseCompareToChatItem:(id)arg1 ;
-(long long)_compareToChatItem:(id)arg1 ;
-(id)_initWithGUID:(id)arg1 date:(id)arg2 datum1:(id)arg3 datum2:(id)arg4 datum3:(id)arg5 ;
-(void)_setIsFromArchive:(bool)arg1 ;
-(bool)isFromArchive;
-(id)guid;
-(void)setGuid:(id)arg1 ;
@end

