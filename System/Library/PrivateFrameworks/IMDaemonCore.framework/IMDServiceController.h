/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:20 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSArray;

@interface IMDServiceController : NSObject {

	NSMutableDictionary* _services;

}

@property (nonatomic,readonly) NSArray * allServices; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)allServices;
-(id)serviceWithName:(id)arg1 ;
-(void)registerSessionClassWithBundle:(id)arg1 ;
@end

