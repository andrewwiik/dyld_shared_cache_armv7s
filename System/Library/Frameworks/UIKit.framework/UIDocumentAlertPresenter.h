/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSError, UIAlertView;

@interface UIDocumentAlertPresenter : NSObject <UIAlertViewDelegate> {

	/*^block*/ id _completionHandler;
	NSError* _error;
	UIAlertView* _alert;

}
+(id)_presentAlertWithError:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertViewCancel:(id)arg1 ;
-(id)initWithError:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)_forceFinishNow;
@end

