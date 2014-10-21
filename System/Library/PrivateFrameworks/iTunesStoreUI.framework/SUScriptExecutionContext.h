/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:33 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStore/ISStoreURLOperationDelegate.h>
#import <iTunesStoreUI/SUWebViewDelegate.h>

@class ISStoreURLOperation, SUWebView;

@interface SUScriptExecutionContext : NSObject <ISStoreURLOperationDelegate, SUWebViewDelegate> {

	ISStoreURLOperation* _loadOperation;
	SUWebView* _webView;

}

@property (nonatomic,readonly) id windowScriptObject; 
@property (nonatomic,readonly) OpaqueJSContextRef globalExecutionContext; 
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(void)dealloc;
-(void)callWebScriptMethod:(id)arg1 withArguments:(id)arg2 ;
-(OpaqueJSContextRef)globalExecutionContext;
-(id)windowScriptObject;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(id)_webView;
-(bool)evaluateData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)evaluateScriptAtURL:(id)arg1 ;
-(void)_cancelLoadOperation;
-(id)_newLoadOperation;
-(void)evaluateScriptWithURLBagKey:(id)arg1 ;
-(id)parentViewControllerForWebView:(id)arg1 ;
@end

