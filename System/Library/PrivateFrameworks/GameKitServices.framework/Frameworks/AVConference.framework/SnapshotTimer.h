/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface SnapshotTimer : NSObject {

	bool taskIsComplete;

}

@property (assign,nonatomic) bool taskIsComplete; 
+(void)takeSnapshotForTask:(id)arg1 ;
-(id)init;
-(void)checkinWithTimeout:(double)arg1 forTask:(id)arg2 ;
-(void)checkout;
-(bool)taskIsComplete;
-(void)setTaskIsComplete:(bool)arg1 ;
@end

