/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:24 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <WebKit/WebPluginManualLoader.h>
#import <WebKit/WebPluginContainerCheckController.h>

@class WAKView, WebDataSource, NSMutableArray, NSMutableSet;

@interface WebPluginController : NSObject <WebPluginManualLoader, WebPluginContainerCheckController> {

	WAKView* _documentView;
	WebDataSource* _dataSource;
	NSMutableArray* _views;
	bool _started;
	NSMutableSet* _checksInProgress;
	NSMutableArray* _viewsNotInDocument;

}
+(id)plugInViewWithArguments:(id)arg1 fromPluginPackage:(id)arg2 ;
+(void)pluginViewHidden:(id)arg1 ;
+(void)addPlugInView:(id)arg1 ;
+(bool)isPlugInView:(id)arg1 ;
-(void)dealloc;
-(void)setDataSource:(id)arg1 ;
-(id)webView;
-(id)webFrame;
-(id)initWithDocumentView:(id)arg1 ;
-(void)mediaPlugInProxyViewCreated:(id)arg1 ;
-(void)pluginView:(id)arg1 receivedResponse:(id)arg2 ;
-(void)pluginView:(id)arg1 receivedData:(id)arg2 ;
-(void)pluginView:(id)arg1 receivedError:(id)arg2 ;
-(void)pluginViewFinishedLoading:(id)arg1 ;
-(void)destroyAllPlugins;
-(void)stopAllPlugins;
-(void)startAllPlugins;
-(void)addPlugin:(id)arg1 ;
-(void)destroyPlugin:(id)arg1 ;
-(void)_webPluginContainerCancelCheckIfAllowedToLoadRequest:(id)arg1 ;
-(void)stopOnePlugin:(id)arg1 ;
-(void)stopOnePluginForPageCache:(id)arg1 ;
-(void)destroyOnePlugin:(id)arg1 ;
-(void)_cancelOutstandingChecks;
-(void)webPlugInContainerShowStatus:(id)arg1 ;
-(bool)plugInsAreRunning;
-(id)superlayerForPluginView:(id)arg1 ;
-(void)stopPluginsForPageCache;
-(void)restorePluginsFromCache;
-(bool)processingUserGesture;
-(id)_webPluginContainerCheckIfAllowedToLoadRequest:(id)arg1 inFrame:(id)arg2 resultObject:(id)arg3 selector:(SEL)arg4 ;
-(void)webPlugInContainerLoadRequest:(id)arg1 inFrame:(id)arg2 ;
-(void)webPlugInContainerWillShowFullScreenForView:(id)arg1 ;
-(void)webPlugInContainerDidHideFullScreenForView:(id)arg1 ;
-(void)showStatus:(id)arg1 ;
-(id)URLPolicyCheckReferrer;
-(void)_webPluginContainerSetMediaPlayerProxy:(id)arg1 forElement:(id)arg2 ;
-(void)_webPluginContainerPostMediaPlayerNotification:(int)arg1 forElement:(id)arg2 ;
@end

