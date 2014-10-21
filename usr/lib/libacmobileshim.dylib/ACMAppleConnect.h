/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:46 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /usr/lib/libacmobileshim.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface ACMAppleConnect : NSObject {

	id _private;

}

@property (assign) id delegate; 
@property (readonly) NSString * version; 
@property (assign,nonatomic) int logLevel; 
+(id)sharedInstance;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(id)version;
-(void)cancelRequests;
-(void)authenticateWithRequest:(id)arg1 password:(id)arg2 ;
-(void)handleMemoryWarningNotification:(id)arg1 ;
-(id)private;
-(void)authenticate:(id)arg1 ;
-(id)hideAppleConnectSignInDialog;
-(void)setIsUsingLocalTestEndPoint:(bool)arg1 ;
-(bool)isUsingLocalTestEndPoint;
-(void)verifyServiceTicket:(id)arg1 ;
-(id)realms;
@end

