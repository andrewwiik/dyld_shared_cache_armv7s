/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMChatHistoryController : NSObject {

	NSMutableDictionary* _runningQueries;

}

@property (retain) NSMutableDictionary * _runningQueries;              //@synthesize runningQueries=_runningQueries - In the implementation block
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)loadMessageWithGUID:(id)arg1 completionBlock:(/*^block*/ id)arg2 ;
-(void)messageQuery:(id)arg1 finishedWithResult:(id)arg2 chatGUIDs:(id)arg3 ;
-(void)databaseFull;
-(void)databaseNoLongerFull;
-(id)_runningQueries;
-(void)set_runningQueries:(id)arg1 ;
@end

