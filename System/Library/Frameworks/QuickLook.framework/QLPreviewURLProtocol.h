/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:53 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/NSURLProtocol.h>

@interface QLPreviewURLProtocol : NSURLProtocol
+(bool)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerPreview:(id)arg1 ;
+(id)_errorForAbort;
+(void)_unregisterURL:(id)arg1 ;
+(id)_errorForCancel;
+(void)startLoadingProtocol:(id)arg1 ;
+(void)stopLoadingProtocol:(id)arg1 ;
+(id)newUniqueURLWithName:(id)arg1 ;
+(id)newURLWithContentID:(id)arg1 baseURL:(id)arg2 ;
+(void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
+(id)_errorForNoPreview;
+(void)unregisterURLs:(id)arg1 andPreview:(id)arg2 ;
+(void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(bool)arg3 ;
+(void)setError:(id)arg1 forURL:(id)arg2 ;
+(id)errorForURL:(id)arg1 ;
+(id)mimeTypeForAttachmentURL:(id)arg1 ;
+(void)initialize;
-(void)startLoading;
-(void)stopLoading;
@end

