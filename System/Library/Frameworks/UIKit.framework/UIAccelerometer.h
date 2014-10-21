/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:05 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol UIAccelerometerDelegate;
#import <UIKit/UIKit-Structs.h>
@interface UIAccelerometer : NSObject {

	double _updateInterval;
	<UIAccelerometerDelegate>* _delegate;
	struct {
		unsigned delegateDidAccelerate : 1;
		unsigned reserved : 31;
	}  _accelerometerFlags;

}

@property (assign,nonatomic) double updateInterval;                             //@synthesize updateInterval=_updateInterval - In the implementation block
@property (assign,nonatomic) <UIAccelerometerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedAccelerometer;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(id)delegate;
-(void)_acceleratedInX:(double)arg1 y:(double)arg2 z:(double)arg3 timestamp:(double)arg4 ;
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
@end
