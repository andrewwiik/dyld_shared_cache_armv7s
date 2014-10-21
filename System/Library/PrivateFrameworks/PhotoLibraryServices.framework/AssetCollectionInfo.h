/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:02:10 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSDate;

@interface AssetCollectionInfo : NSObject <NSSecureCoding> {

	bool _isMine;
	bool _hasVideoAsset;
	bool _isDeletable;
	NSString* _GUID;
	NSString* _personID;
	NSDictionary* _metaData;
	NSNumber* _width;
	NSNumber* _height;
	NSDate* _timestamp;

}

@property (getter=UID,nonatomic,readonly) NSString * GUID;              //@synthesize GUID=_GUID - In the implementation block
@property (nonatomic,readonly) NSString * personID;                     //@synthesize personID=_personID - In the implementation block
@property (nonatomic,readonly) bool isMine;                             //@synthesize isMine=_isMine - In the implementation block
@property (nonatomic,readonly) bool hasVideoAsset;                      //@synthesize hasVideoAsset=_hasVideoAsset - In the implementation block
@property (nonatomic,readonly) bool isDeletable;                        //@synthesize isDeletable=_isDeletable - In the implementation block
@property (nonatomic,readonly) NSDictionary * metaData;                 //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,readonly) NSNumber * width;                        //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) NSNumber * height;                       //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) NSDate * timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
+(bool)supportsSecureCoding;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)timestamp;
-(id)width;
-(id)height;
-(id)personID;
-(id)GUID;
-(bool)isMine;
-(bool)hasVideoAsset;
-(bool)isDeletable;
-(id)initWithAssetCollection:(id)arg1 ;
-(id)metaData;
@end

