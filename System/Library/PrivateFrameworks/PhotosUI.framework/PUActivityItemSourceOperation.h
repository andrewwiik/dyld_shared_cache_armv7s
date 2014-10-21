/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:17 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotosUI.framework/PhotosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSString, PUActivityItemSource;

@interface PUActivityItemSourceOperation : NSOperation {

	NSString* __activityType;
	PUActivityItemSource* __activityItemSource;

}

@property (setter=_setActivityType:,nonatomic,copy) NSString * _activityType;                                               //@synthesize _activityType=__activityType - In the implementation block
@property (assign,setter=_setActivityItemSource:,nonatomic,__weak) PUActivityItemSource * _activityItemSource;              //@synthesize _activityItemSource=__activityItemSource - In the implementation block
-(id)init;
-(void)main;
-(void).cxx_destruct;
-(void)_setActivityType:(id)arg1 ;
-(id)initWithActivityItemSource:(id)arg1 activityType:(id)arg2 ;
-(void)_setActivityItemSource:(id)arg1 ;
-(id)_activityItemSource;
-(id)_activityType;
@end
