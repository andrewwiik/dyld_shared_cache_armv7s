/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableArray;

@interface _NSXPCInterfaceMethodInfo : NSObject {

	char* _replySignature;
	int _replyPosition;
	NSMutableArray* _replyArguments;
	NSMutableArray* _arguments;

}

@property (assign) int replyPosition;                            //@synthesize replyPosition=_replyPosition - In the implementation block
@property (retain) NSMutableArray * replyArguments;              //@synthesize replyArguments=_replyArguments - In the implementation block
@property (retain) NSMutableArray * arguments;                   //@synthesize arguments=_arguments - In the implementation block
-(void)setArguments:(id)arg1 ;
-(void)setReplySignature:(id)arg1 ;
-(const char*)replySignature;
-(id)replyArguments;
-(void)setReplyArguments:(id)arg1 ;
-(int)replyPosition;
-(void)setReplyPosition:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(id)arguments;
-(void)finalize;
@end

