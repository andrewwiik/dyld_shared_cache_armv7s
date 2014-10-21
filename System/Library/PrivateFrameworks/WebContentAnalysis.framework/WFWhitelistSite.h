/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:19 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSURL;

@interface WFWhitelistSite : NSObject {

	NSString* urlString;
	NSURL* url;
	NSString* domainName;
	NSString* normalizedURLString;

}

@property (copy) NSString * urlString; 
@property (copy) NSURL * url; 
@property (readonly) NSString * domainName; 
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)url;
-(void)setUrl:(id)arg1 ;
-(void)setUrlString:(id)arg1 ;
-(id)urlString;
-(id)initWithURLString:(id)arg1 ;
-(id)domainName;
-(bool)hasMetasitePrefix:(id)arg1 ;
@end

