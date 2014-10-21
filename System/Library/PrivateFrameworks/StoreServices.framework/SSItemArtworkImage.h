/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:55 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <StoreServices/SSXPCCoding.h>
#import <CoreFoundation/NSCopying.h>

@class NSMutableDictionary, NSString, NSURL;

@interface SSItemArtworkImage : NSObject <SSXPCCoding, NSCopying> {

	NSMutableDictionary* _dictionary;
	NSString* _imageKind;

}

@property (nonatomic,readonly) long long height; 
@property (nonatomic,readonly) long long width; 
@property (nonatomic,copy) NSString * imageKind;                                   //@synthesize imageKind=_imageKind - In the implementation block
@property (nonatomic,readonly) long long imageOrientation; 
@property (nonatomic,readonly) double imageScale; 
@property (getter=isPrerendered,nonatomic,readonly) bool prerendered; 
@property (nonatomic,retain) NSURL * URL; 
@property (nonatomic,readonly) CGSize imageSize; 
@property (nonatomic,readonly) NSString * URLString; 
-(void)dealloc;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(long long)imageOrientation;
-(CGSize)imageSize;
-(long long)width;
-(long long)height;
-(id)URL;
-(void)setURL:(id)arg1 ;
-(id)URLString;
-(id)valueForProperty:(id)arg1 ;
-(void)setValue:(id)arg1 forProperty:(id)arg2 ;
-(void)_setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)setImageKind:(id)arg1 ;
-(void)setImageKindWithTypeName:(id)arg1 variantName:(id)arg2 ;
-(double)imageScale;
-(id)imageKind;
-(bool)isPrerendered;
-(id)initWithArtworkDictionary:(id)arg1 ;
@end
