/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface UIAccessibilityLoader : NSObject
+(void)initialize;
+(void)_accessibilityStartServer;
+(void)_accessibilityReenabled;
+(void)_accessibilityStopServer;
+(id)_loadAXBundleForBundle:(id)arg1 didLoad:(bool*)arg2 ;
+(id)_accessibilityBundlesForBundle:(id)arg1 ;
+(id)_loadAXBundleForBundle:(id)arg1 didLoad:(bool*)arg2 forceLoad:(bool)arg3 loadSubbundles:(bool)arg4 ;
+(id)loadAccessibilityBundle:(id)arg1 didLoad:(bool*)arg2 force:(bool)arg3 ;
+(id)_axBundleForBundle:(id)arg1 ;
+(void)loadActualAccessibilityBundle:(id)arg1 didLoad:(bool*)arg2 loadSubbundles:(bool)arg3 ;
+(void)_accessibilityInitializeRuntimeOverrides;
+(void)_accessibilityLoadSubbundles:(id)arg1 ;
+(id)loadAccessibilityBundle:(id)arg1 didLoad:(bool*)arg2 ;
@end

