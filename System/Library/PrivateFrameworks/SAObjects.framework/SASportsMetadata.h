/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:31 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsMetadata : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * average; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSNumber * selected; 
@property (nonatomic,copy) NSString * value; 
+(id)metadata;
+(id)metadataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setValue:(id)arg1 ;
-(void)setName:(id)arg1 ;
-(id)value;
-(id)name;
-(void)setSelected:(id)arg1 ;
-(id)identifier;
-(id)selected;
-(void)setIdentifier:(id)arg1 ;
-(id)encodedClassName;
-(id)average;
-(void)setAverage:(id)arg1 ;
@end

