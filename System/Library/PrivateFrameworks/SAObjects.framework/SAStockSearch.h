/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:30 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSURL, NSArray;

@interface SAStockSearch : SABaseClientBoundCommand

@property (nonatomic,copy) NSURL * targetAppId; 
@property (nonatomic,copy) NSArray * companyNameList; 
@property (nonatomic,copy) NSArray * stockReferences; 
+(id)searchWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)search;
-(id)groupIdentifier;
-(id)encodedClassName;
-(bool)requiresResponse;
-(id)targetAppId;
-(void)setTargetAppId:(id)arg1 ;
-(id)stockReferences;
-(void)setStockReferences:(id)arg1 ;
-(id)companyNameList;
-(void)setCompanyNameList:(id)arg1 ;
@end
