/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:23 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class WebView, NSString;

@interface WebInspectorWindowController : NSObject {

	WebView* _inspectedWebView;
	WebInspectorFrontendClient* _frontendClient;
	WebInspectorClient* _inspectorClient;
	bool _destroyingInspectorView;
	WebView* _webView;
	NSString* _title;

}

@property (nonatomic,readonly) WebView * webView;              //@synthesize webView=_webView - In the implementation block
@property (nonatomic,retain) NSString * title;                 //@synthesize title=_title - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setTitle:(id)arg1 ;
-(id)title;
-(id)webView;
-(id)initWithInspectedWebView:(id)arg1 ;
-(void)setInspectorClient:(WebInspectorClient*)arg1 ;
-(void)setFrontendClient:(WebInspectorFrontendClient*)arg1 ;
-(void)destroyInspectorView:(bool)arg1 ;
-(WebInspectorClient*)inspectorClient;
@end
