/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:16 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class XPCEndpoint, NSString;

@interface _UIViewServiceSessionEndpoint : NSObject {

	XPCEndpoint* _serviceSessionEndpoint;
	NSString* _serviceBundleIdentifier;

}
-(void)dealloc;
-(id)connectToDeputyOfType:(id)arg1 connectionHandler:(/*^block*/ id)arg2 ;
-(id)initWithXPCEndpoint:(id)arg1 toViewServiceWithBundleIdentifier:(id)arg2 ;
@end

