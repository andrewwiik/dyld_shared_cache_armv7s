/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ML3DatabaseFunction : NSObject {

	int _argumentCount;
	NSString* _name;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int argumentCount;              //@synthesize argumentCount=_argumentCount - In the implementation block
-(void)setName:(id)arg1 ;
-(id)name;
-(void).cxx_destruct;
-(id)initWithName:(id)arg1 argumentCount:(int)arg2 ;
-(bool)registerWithConnection:(id)arg1 ;
-(int)argumentCount;
-(void)setArgumentCount:(int)arg1 ;
@end

