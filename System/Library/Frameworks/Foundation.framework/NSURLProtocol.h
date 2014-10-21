/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:27 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURLProtocolInternal;

@interface NSURLProtocol : NSObject {

	NSURLProtocolInternal* _internal;

}
+(Class)_protocolClassForRequest:(id)arg1 allowCF:(bool)arg2 ;
+(Class)_protocolClassForRequest:(id)arg1 ;
+(id)_registeredClasses;
+(id)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg1 ;
+(void)_removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(bool)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(bool)_requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 allowCF:(bool)arg3 ;
+(id)_canonicalRequestForRequest:(id)arg1 allowCF:(bool)arg2 ;
+(bool)registerClass:(Class)arg1 ;
+(void)unregisterClass:(Class)arg1 ;
+(id)propertyForKey:(id)arg1 inRequest:(id)arg2 ;
+(void)setProperty:(id)arg1 forKey:(id)arg2 inRequest:(id)arg3 ;
+(void)removePropertyForKey:(id)arg1 inRequest:(id)arg2 ;
-(void)_suspendLoading;
-(void)_resumeLoading;
-(void)_releaseProtocolClientReference;
-(void)startLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(id)cachedResponse;
-(void)dealloc;
-(id)request;
-(void)stopLoading;
-(id)client;
@end

