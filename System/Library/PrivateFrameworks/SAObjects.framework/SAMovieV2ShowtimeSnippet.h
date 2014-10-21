/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:35 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIImageResource, NSString, NSArray, SALocalSearchBusiness2;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (nonatomic,retain) SAUIImageResource * attributionLogo; 
@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (nonatomic,copy) NSString * theaterName; 
+(id)showtimeSnippet;
+(id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(id)movieName;
-(void)setMovieName:(id)arg1 ;
-(id)showtimes;
-(void)setShowtimes:(id)arg1 ;
-(id)theater;
-(void)setTheater:(id)arg1 ;
-(id)theaterName;
-(void)setTheaterName:(id)arg1 ;
-(id)attributionLogo;
-(void)setAttributionLogo:(id)arg1 ;
@end

