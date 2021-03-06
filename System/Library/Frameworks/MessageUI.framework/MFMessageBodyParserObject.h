/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:49 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@interface MFMessageBodyParserObject : NSObject {

	double _timeoutTime;
	bool _shouldAbort;
	bool _didTimeout;
	bool _copyBlocks;
	double _timeoutInterval;

}

@property (assign,nonatomic) double timeoutInterval;              //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
-(void)abortParsing;
-(double)timeoutInterval;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)copyBlocks;
-(void)messageBodyParserWillBeginParsing:(id)arg1 ;
-(bool)shouldProceedParsing;
-(bool)areBlocksCopied;
@end

