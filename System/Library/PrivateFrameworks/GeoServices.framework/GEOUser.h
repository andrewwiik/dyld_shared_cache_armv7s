/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:01:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class GEOPhoto, NSString;

@interface GEOUser : PBCodable <NSCopying> {

	GEOPhoto* _image;
	NSString* _name;

}

@property (nonatomic,readonly) bool hasName; 
@property (nonatomic,retain) NSString * name;               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) bool hasImage; 
@property (nonatomic,retain) GEOPhoto * image;              //@synthesize image=_image - In the implementation block
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(bool)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone)arg1 ;
-(id)image;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)dictionaryRepresentation;
-(bool)hasImage;
-(bool)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(bool)hasName;
@end

