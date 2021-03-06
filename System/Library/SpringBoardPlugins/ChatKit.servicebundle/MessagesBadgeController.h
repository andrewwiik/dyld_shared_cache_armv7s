/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:37 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/SpringBoardPlugins/ChatKit.servicebundle/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MessagesBadgeController : NSObject {

	long long _madridCount;
	long long _lastMadridFailure;
	bool _showingFailure;
	bool _disableDBFullDialog;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_updateBadge;
-(void)updateBadge;
-(void)_saveMadridFailureID:(long long)arg1 ;
-(void)_displayDatabaseFullWarning;
-(long long)_savedMadridFailureID;
-(void)_madridUnreadCountChanged:(id)arg1 ;
-(void)_madridFailureCountChanged:(id)arg1 ;
-(void)_madridMessageSent:(id)arg1 ;
-(void)_databaseBecameFull;
-(void)_databaseBecameNoLongerFull;
-(void)_clearFailureBadge;
@end

