/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:36 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL;

@interface SAEncyclopediaEntityLink : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * description; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * name; 
+(id)link;
+(id)linkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(id)arg1 ;
-(id)description;
-(id)image;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setLink:(id)arg1 ;
-(id)link;
-(void)setDescription:(id)arg1 ;
-(id)encodedClassName;
@end

