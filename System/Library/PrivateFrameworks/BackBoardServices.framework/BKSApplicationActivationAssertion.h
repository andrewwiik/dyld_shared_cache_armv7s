/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class BKSWorkspace, NSString;

@interface BKSApplicationActivationAssertion : NSObject {

	BKSWorkspace* _workspace;
	NSString* _uniqueID;
	NSString* _name;
	bool _released;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(id)init;
-(id)name;
-(void)releaseAssertion;
-(id)_initWithWorkspace:(id)arg1 application:(id)arg2 name:(id)arg3 ;
@end

