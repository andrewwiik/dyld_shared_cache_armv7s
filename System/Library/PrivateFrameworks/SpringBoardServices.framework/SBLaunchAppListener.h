/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:43 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSLock;

@interface SBLaunchAppListener : NSObject {

	NSString* _displayIdentifier;
	/*^block*/ id _block;
	NSLock* _lock;
	bool _launched;
	int _notifyToken;
	int _notifyAppExitedToken;
	unsigned _notifyRegisterStatus;
	unsigned _notifyAppExitedStatus;

}
+(bool)waitForLaunchThatSpringBoardKnowsAbout:(id)arg1 timeout:(double)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)_didLaunch;
-(void)_didFailToLaunch;
-(id)initWithDisplayIdentifier:(id)arg1 handlerBlock:(/*^block*/ id)arg2 ;
@end

