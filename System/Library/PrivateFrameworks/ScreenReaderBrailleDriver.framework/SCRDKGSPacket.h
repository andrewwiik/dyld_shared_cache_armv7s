/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderBrailleDriver.framework/ScreenReaderBrailleDriver
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSData;

@interface SCRDKGSPacket : NSObject {

	unsigned char _command;
	unsigned char _subCommand;
	NSData* _data;

}

@property (assign,nonatomic) unsigned char command;                 //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) unsigned char subCommand;              //@synthesize subCommand=_subCommand - In the implementation block
@property (nonatomic,retain) NSData * data;                         //@synthesize data=_data - In the implementation block
-(unsigned char)command;
-(void)dealloc;
-(id)data;
-(void)setData:(id)arg1 ;
-(void)setCommand:(unsigned char)arg1 ;
-(unsigned char)subCommand;
-(void)setSubCommand:(unsigned char)arg1 ;
@end

