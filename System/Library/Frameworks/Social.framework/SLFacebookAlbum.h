/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 9:59:56 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding> {

	bool _canUpload;
	bool _isDefaultAlbum;
	NSString* _identifier;
	NSString* _name;
	NSString* _coverPhotoIdentifier;
	long long _count;

}

@property (retain) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (retain) NSString * coverPhotoIdentifier;              //@synthesize coverPhotoIdentifier=_coverPhotoIdentifier - In the implementation block
@property (assign) long long count;                              //@synthesize count=_count - In the implementation block
@property (assign) bool canUpload;                               //@synthesize canUpload=_canUpload - In the implementation block
@property (assign) bool isDefaultAlbum;                          //@synthesize isDefaultAlbum=_isDefaultAlbum - In the implementation block
+(id)albumsWithAlbumDataDictionaries:(id)arg1 ;
+(id)albumWithDataDictionary:(id)arg1 ;
+(bool)supportsSecureCoding;
-(bool)canUpload;
-(void)setIsDefaultAlbum:(bool)arg1 ;
-(id)coverPhotoIdentifier;
-(bool)isDefaultAlbum;
-(void)setCoverPhotoIdentifier:(id)arg1 ;
-(void)setCanUpload:(bool)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)count;
-(id)description;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)setCount:(long long)arg1 ;
-(id)identifier;
-(void)setIdentifier:(id)arg1 ;
-(void).cxx_destruct;
@end

