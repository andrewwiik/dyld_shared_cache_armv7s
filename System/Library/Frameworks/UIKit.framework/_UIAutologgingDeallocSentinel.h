/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:00:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString;

@interface _UIAutologgingDeallocSentinel : NSObject {

	bool _called;
	NSString* _message;

}

@property (nonatomic,retain) NSString * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) bool called;                     //@synthesize called=_called - In the implementation block
-(void)dealloc;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(bool)called;
-(void)setCalled:(bool)arg1 ;
@end

