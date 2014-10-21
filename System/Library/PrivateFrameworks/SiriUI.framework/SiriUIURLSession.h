/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:40 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <MultipeerConnectivity/NSURLSessionDataDelegate.h>

@class NSURLSession, NSMapTable;

@interface SiriUIURLSession : NSObject <NSURLSessionDataDelegate> {

	NSURLSession* _URLSession;
	NSMapTable* _tasksForClient;
	NSMapTable* _imageDownloadForTask;

}
+(id)sharedURLSession;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(id)init;
-(id)description;
-(void).cxx_destruct;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(CGSize)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(CGSize)arg3 fillColor:(id)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 fitToSize:(CGSize)arg3 incremental:(bool)arg4 progressHandler:(/*^block*/ id)arg5 fillColor:(id)arg6 ;
-(void)_registerTask:(id)arg1 forClient:(id)arg2 ;
-(void)_unregisterTask:(id)arg1 forClient:(id)arg2 ;
-(id)imageTaskWithHTTPGetRequest:(id)arg1 client:(id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(void)cancelAllTasksForClient:(id)arg1 ;
@end

