/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface SLNetworkReachabilityWarning : NSObject {

	/*^block*/ id _completionHandler;
	NSString* _serviceType;

}
-(id)initWithServiceType:(id)arg1 ;
-(void)showIfNecessaryWithCompletion:(/*^block*/ id)arg1 ;
-(void)showIfNecessary;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void).cxx_destruct;
@end

