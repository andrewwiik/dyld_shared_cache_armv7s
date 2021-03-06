/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:57 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsPageEvent : SSMetricsBaseEvent

@property (assign,getter=isCachedResponse,nonatomic) bool cachedResponse; 
@property (nonatomic,retain) NSString * navigationType; 
@property (nonatomic,retain) NSString * pageHistoryDescription; 
@property (assign,nonatomic) double pageRenderTime; 
@property (assign,nonatomic) double requestEndTime; 
@property (assign,nonatomic) double requestStartTime; 
@property (assign,nonatomic) double responseEndTime; 
@property (assign,nonatomic) double responseStartTime; 
@property (nonatomic,retain) NSString * searchTerm; 
@property (nonatomic,retain) NSString * serverApplicationInstance; 
@property (nonatomic,retain) NSString * serverTiming; 
@property (assign,getter=isUbered,nonatomic) bool ubered; 
-(id)searchTerm;
-(void)setSearchTerm:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setPageHistoryDescriptionWithIdentifiers:(id)arg1 ;
-(void)setPageRenderTime:(double)arg1 ;
-(void)setNavigationType:(id)arg1 ;
-(void)setUbered:(bool)arg1 ;
-(void)setResponseStartTime:(double)arg1 ;
-(void)setResponseEndTime:(double)arg1 ;
-(void)setRequestStartTime:(double)arg1 ;
-(void)setServerApplicationInstance:(id)arg1 ;
-(void)setServerTiming:(id)arg1 ;
-(void)setCachedResponse:(bool)arg1 ;
-(double)requestStartTime;
-(double)responseEndTime;
-(double)responseStartTime;
-(void)setPageHistoryDescription:(id)arg1 ;
-(id)serverApplicationInstance;
-(bool)isCachedResponse;
-(bool)isUbered;
-(id)navigationType;
-(id)pageHistoryDescription;
-(double)pageRenderTime;
-(double)requestEndTime;
-(id)serverTiming;
-(void)setRequestEndTime:(double)arg1 ;
@end

