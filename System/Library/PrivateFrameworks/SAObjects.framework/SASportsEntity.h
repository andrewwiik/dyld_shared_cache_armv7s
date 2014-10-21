/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSURL, SASportsLeague, NSString, SAUIAppPunchOut;

@interface SASportsEntity : SADomainObject

@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSURL * largeImage; 
@property (nonatomic,retain) SASportsLeague * league; 
@property (nonatomic,copy) NSURL * listImage; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchout; 
+(id)entity;
+(id)entityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(id)arg1 ;
-(id)image;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)encodedClassName;
-(void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3 ;
-(id)largeImage;
-(void)setLargeImage:(id)arg1 ;
-(id)league;
-(void)setLeague:(id)arg1 ;
-(id)listImage;
-(void)setListImage:(id)arg1 ;
-(id)punchout;
-(void)setPunchout:(id)arg1 ;
@end
