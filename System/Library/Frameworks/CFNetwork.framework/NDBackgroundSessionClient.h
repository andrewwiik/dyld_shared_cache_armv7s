/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:06 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NDBackgroundSessionClient <NSObject>
@required
-(void)backgroundTaskDidResume:(unsigned long long)arg1;
-(void)backgroundTaskDidSuspend:(unsigned long long)arg1;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveChallenge:(id)arg2 reply:(/*^block*/ id)arg3;
-(void)backgroundTask:(unsigned long long)arg1 didReceiveResponse:(id)arg2;
-(void)backgroundTask:(unsigned long long)arg1 didSendBodyData:(long long)arg2 totalBytesSent:(long long)arg3 totalBytesExpectedToSend:(long long)arg4;
-(void)backgroundTask:(unsigned long long)arg1 didCompleteWithError:(id)arg2 reply:(/*^block*/ id)arg3;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didWriteData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
-(void)backgroundDownloadTask:(unsigned long long)arg1 didFinishDownloadingToURL:(id)arg2 reply:(/*^block*/ id)arg3;
-(void)backgroundSessionDidStartAppWake:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)backgroundSessionDidFinishAppWake:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)credStorage_getInitialCredentialDictionariesWithReply:(/*^block*/ id)arg1;
-(void)credStorage_credentialsForProtectionSpace:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)credStorage_allCredentialsWithReply:(/*^block*/ id)arg1;
-(void)credStorage_setCredential:(id)arg1 forProtectionSpace:(id)arg2;
-(void)credStorage_removeCredential:(id)arg1 forProtectionSpace:(id)arg2;
-(void)credStorage_defaultCredentialForProtectionSpace:(id)arg1 reply:(/*^block*/ id)arg2;
-(void)credStorage_setDefaultCredential:(id)arg1 forProtectionSpace:(id)arg2;
@end
