/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol ACDDataclassOwnersManagerProtocol;
@class NSXPCConnection;

@interface ACDDataclassOwnersManager : NSObject {

	<ACDDataclassOwnersManagerProtocol>* _remoteDOM;
	NSXPCConnection* _connection;

}
-(void).cxx_destruct;
-(bool)performDataclassActions:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 ;
-(id)actionsForEnablingDataclass:(id)arg1 onAccount:(id)arg2 ;
-(id)actionsForDisablingDataclass:(id)arg1 onAccount:(id)arg2 ;
-(id)actionsForDeletingAccount:(id)arg1 affectingDataclass:(id)arg2 ;
-(bool)isPerformingDataclassActionsForAccount:(id)arg1 ;
-(void)_connectToRemoteDataclassOwnersManager;
-(id)_remoteDOM;
-(id)actionsForAddingAccount:(id)arg1 affectingDataclass:(id)arg2 ;
@end

