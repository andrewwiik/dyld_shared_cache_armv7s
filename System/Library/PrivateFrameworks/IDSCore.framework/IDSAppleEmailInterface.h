/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:18 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AppleAccount/MSSearchDelegate.h>

@class NSMutableDictionary, NSMutableArray;

@interface IDSAppleEmailInterface : NSObject <MSSearchDelegate> {

	NSMutableDictionary* _currentSearches;
	NSMutableArray* _handlers;

}
+(id)sharedInstance;
-(void)dealloc;
-(void)addListener:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(bool)startMonitoringForEmail:(id)arg1 registrationInfo:(id)arg2 ;
-(void)_cancelAllSearches;
-(id)_existingSearchForEmail:(id)arg1 ;
-(void)_cancelSearchesForEmail:(id)arg1 ;
-(void)_startSearchingForRegistrationEmail:(id)arg1 registrationInfo:(id)arg2 attempt:(int)arg3 ;
-(id)_emailForSearch:(id)arg1 ;
-(int)_searchAttemptForSearch:(id)arg1 ;
-(id)_registrationInfoIDForSearch:(id)arg1 ;
-(bool)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)_vettingIDForSearch:(id)arg1 ;
-(bool)cancelMonitoringForEmail:(id)arg1 registrationInfo:(id)arg2 ;
@end
