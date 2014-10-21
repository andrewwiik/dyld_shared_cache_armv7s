/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <MediaPlayerUI/MPURemoteViewControllerPresentation.h>

@protocol MPURemoteViewControllerPresentation;
@interface MPURadioStationActionsClientViewController : _UIRemoteViewController <MPURemoteViewControllerPresentation> {

	<MPURemoteViewControllerPresentation>* _presentationDelegate;

}

@property (assign,nonatomic,__weak) <MPURemoteViewControllerPresentation> * presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
+(id)serviceViewControllerBundleID;
+(id)requestViewControllerWithCompletionHandler:(/*^block*/ id)arg1 ;
+(id)serviceViewControllerClassName;
-(id)presentationDelegate;
-(void)setPresentationDelegate:(id)arg1 ;
-(void)remoteViewControllerDidFinish;
-(void).cxx_destruct;
@end
