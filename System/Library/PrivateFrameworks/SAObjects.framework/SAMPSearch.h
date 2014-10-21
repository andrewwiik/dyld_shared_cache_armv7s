/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:28 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SAMPSearch : SADomainCommand

@property (nonatomic,copy) NSArray * constraints; 
@property (assign,nonatomic) long long maxResults; 
@property (nonatomic,copy) NSArray * searchTypes; 
@property (assign,nonatomic) bool strict; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(void)setMaxResults:(long long)arg1 ;
-(long long)maxResults;
-(id)groupIdentifier;
-(void)setConstraints:(id)arg1 ;
-(id)constraints;
-(void)setSearchTypes:(id)arg1 ;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)searchTypes;
-(bool)strict;
-(void)setStrict:(bool)arg1 ;
@end
