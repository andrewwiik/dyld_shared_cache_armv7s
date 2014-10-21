/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:26 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSNumber;

@interface NSURLComponents : NSObject <NSCopying>

@property (copy) NSString * scheme; 
@property (copy) NSString * user; 
@property (copy) NSString * password; 
@property (copy) NSString * host; 
@property (copy) NSNumber * port; 
@property (copy) NSString * path; 
@property (copy) NSString * query; 
@property (copy) NSString * fragment; 
@property (copy) NSString * percentEncodedUser; 
@property (copy) NSString * percentEncodedPassword; 
@property (copy) NSString * percentEncodedHost; 
@property (copy) NSString * percentEncodedPath; 
@property (copy) NSString * percentEncodedQuery; 
@property (copy) NSString * percentEncodedFragment; 
+(id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(bool)arg2 ;
+(id)componentsWithString:(id)arg1 ;
+(id)allocWithZone:(NSZone)arg1 ;
-(id)user;
-(id)password;
-(void)setPort:(id)arg1 ;
-(id)percentEncodedPath;
-(id)percentEncodedHost;
-(id)percentEncodedQuery;
-(id)percentEncodedFragment;
-(id)percentEncodedUser;
-(id)percentEncodedPassword;
-(id)URLRelativeToURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(bool)arg2 ;
-(void)setUser:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setHost:(id)arg1 ;
-(void)setQuery:(id)arg1 ;
-(void)setFragment:(id)arg1 ;
-(void)setPercentEncodedUser:(id)arg1 ;
-(void)setPercentEncodedPassword:(id)arg1 ;
-(void)setPercentEncodedHost:(id)arg1 ;
-(void)setPercentEncodedPath:(id)arg1 ;
-(void)setPercentEncodedQuery:(id)arg1 ;
-(void)setPercentEncodedFragment:(id)arg1 ;
-(id)init;
-(id)scheme;
-(id)query;
-(id)path;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)URL;
-(id)host;
-(void)setPath:(id)arg1 ;
-(id)fragment;
-(id)port;
-(void)setScheme:(id)arg1 ;
@end

