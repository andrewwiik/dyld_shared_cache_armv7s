/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:09 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol VKStylesheetObserver <NSObject>
@property (nonatomic,readonly) VKStylesheet * stylesheet; 
@optional
-(void)prepareForStylesheetTransitionToMapDisplayStyle:(long long)arg1 withReadinessBlock:(/*^block*/ id)arg2;
-(void)stylesheetWillChange;
-(void)stylesheetDidChange;
-(void)stylesheetWillTransition:(long long)arg1;
-(void)stylesheetDoneChanging;

@required
+(bool)reloadOnStylesheetChange;
-(id)stylesheet;
@end

