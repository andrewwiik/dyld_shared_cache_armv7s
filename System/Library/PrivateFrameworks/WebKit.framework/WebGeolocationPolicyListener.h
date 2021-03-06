/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WebAllowDenyPolicyListener.h>

@interface WebGeolocationPolicyListener : NSObject <WebAllowDenyPolicyListener> {

	RefPtr<WebCore::Geolocation>* _geolocation;
	RetainPtr<WebView *>* _webView;
	RetainPtr<id<WebGeolocationProvider> > _geolocationProvider;

}
-(void)deny;
-(id).cxx_construct;
-(void).cxx_destruct;
-(void)denyOnlyThisRequest;
-(id)initWithGeolocation:(Geolocation*)arg1 forWebView:(id)arg2 provider:(id)arg3 ;
-(void)allow;
-(bool)shouldClearCache;
@end

